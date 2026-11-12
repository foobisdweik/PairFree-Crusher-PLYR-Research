// Read-only batch memory dump over one BLE connection.
// Each step is the documented relay 0x0D01 wrapping READ_ADDRESS 0x1680 (four bytes). No writes.
// Usage: swift dump_ram.swift <start hex> <byte count> <output .bin>
import Foundation
import CoreBluetooth

final class Dump: NSObject, CBCentralManagerDelegate, CBPeripheralDelegate {
  var central: CBCentralManager!
  var peripheral: CBPeripheral?
  var tx: CBCharacteristic?
  let start: UInt32, count: Int, out: String
  var next: UInt32 = 0
  var data = [UInt8]()
  var retries = 0
  var timer: Timer?

  init(start: UInt32, count: Int, out: String) {
    self.start = start; self.count = (count + 3) & ~3; self.out = out; self.next = start
    super.init()
  }

  func packet(_ a: UInt32) -> Data {
    Data([5, 0x5a, 16, 0, 1, 0x0d, 0, 2, 5, 0x5a, 8, 0, 0x80, 0x16, 0, 0,
          UInt8(a & 255), UInt8((a >> 8) & 255), UInt8((a >> 16) & 255), UInt8((a >> 24) & 255)])
  }

  func finish(_ status: String) {
    try? Data(data).write(to: URL(fileURLWithPath: out))
    FileHandle.standardError.write("\(status): \(data.count) bytes from 0x\(String(start, radix: 16)) to \(out)\n".data(using: .utf8)!)
    if let p = peripheral { central.cancelPeripheralConnection(p) }
    exit(data.count == count ? 0 : 1)
  }

  func send() {
    guard data.count < count else { finish("complete"); return }
    guard let p = peripheral, let t = tx else { return }
    p.writeValue(packet(next), for: t, type: .withResponse)
    timer?.invalidate()
    // Resend the same address if no reply arrives; give up after 5 tries.
    timer = Timer.scheduledTimer(withTimeInterval: 1.5, repeats: false) { _ in
      self.retries += 1
      if self.retries > 5 { self.finish("timeout") } else { self.send() }
    }
  }

  func centralManagerDidUpdateState(_ c: CBCentralManager) {
    guard c.state == .poweredOn else { if c.state == .unauthorized || c.state == .poweredOff { finish("Bluetooth unavailable") }; return }
    let ps = c.retrieveConnectedPeripherals(withServices: [CBUUID(string: "5052494D-2DAB-0341-6972-6F6861424C45")]).filter { $0.name == "BLE-CRUSHER PLYR 720" }
    guard ps.count == 1 else { finish("expected one connected PLYR, found \(ps.count)"); return }
    peripheral = ps[0]; peripheral!.delegate = self; c.connect(peripheral!, options: nil)
  }
  func centralManager(_ c: CBCentralManager, didConnect p: CBPeripheral) { p.discoverServices([CBUUID(string: "5052494D-2DAB-0341-6972-6F6861424C45")]) }
  func peripheral(_ p: CBPeripheral, didDiscoverServices error: Error?) {
    guard error == nil, let s = p.services?.first else { finish("service unavailable"); return }
    p.discoverCharacteristics(nil, for: s)
  }
  func peripheral(_ p: CBPeripheral, didDiscoverCharacteristicsFor s: CBService, error: Error?) {
    tx = s.characteristics?.first { $0.uuid.uuidString == "43484152-2DAB-3241-6972-6F6861424C45" }
    guard let rx = s.characteristics?.first(where: { $0.uuid.uuidString == "43484152-2DAB-3141-6972-6F6861424C45" }), tx != nil else { finish("characteristics unavailable"); return }
    p.setNotifyValue(true, for: rx)
  }
  func peripheral(_ p: CBPeripheral, didUpdateNotificationStateFor c: CBCharacteristic, error: Error?) {
    guard error == nil, c.isNotifying else { finish("subscription failed"); return }
    send()
  }
  func peripheral(_ p: CBPeripheral, didUpdateValueFor c: CBCharacteristic, error: Error?) {
    let b = [UInt8](c.value ?? Data())
    // Relay reply: 05 5D 15 00 01 0D 00 02 05 5B 0D 00 80 16 <status> 00? <addr 4> <data 4>; match on the echoed address.
    guard b.count >= 25, b[0] == 5, b[1] == 0x5d, b[12] == 0x80, b[13] == 0x16 else { return }
    let a = UInt32(b[17]) | UInt32(b[18]) << 8 | UInt32(b[19]) << 16 | UInt32(b[20]) << 24
    guard a == next else { return }
    // Byte 14 is the READ_ADDRESS status. A nonzero status can still echo the address, so its payload is not memory.
    guard b[14] == 0 else { timer?.invalidate(); finish(String(format: "READ_ADDRESS status 0x%02X at 0x%08X", b[14], a)); return }
    data += b[21..<25]; next += 4; retries = 0
    if data.count % 512 == 0 { FileHandle.standardError.write("\(data.count)/\(count)\n".data(using: .utf8)!) }
    send()
  }
}

let args = CommandLine.arguments
guard args.count == 4, let s = UInt32(args[1].replacingOccurrences(of: "0x", with: ""), radix: 16), let n = Int(args[2]) else {
  print("usage: dump_ram.swift <start hex> <bytes> <out.bin>"); exit(2)
}
let dump = Dump(start: s, count: n, out: args[3])
dump.central = CBCentralManager(delegate: dump, queue: .main, options: [CBCentralManagerOptionShowPowerAlertKey: false])
RunLoop.main.run()

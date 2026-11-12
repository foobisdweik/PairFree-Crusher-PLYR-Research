import Foundation
import CoreBluetooth
final class Query:NSObject,CBCentralManagerDelegate,CBPeripheralDelegate {
 var central:CBCentralManager!;var peripheral:CBPeripheral?;var tx:CBCharacteristic?;var rx:CBCharacteristic?;var events:[[String:Any]]=[];var sent=false
 let packet:Data
 let label:String
 init(_ kind:String){
  let fields:[String:UInt32] = ["callback":0x0423be40,"route-enum":0x0420f43c,"route-handle":0x04247994,"route-handle-2":0x0424799c,"route-flags":0x042479a0,"handle-a-id":0x042479b8,"handle-a-state":0x042479dc,"handle-a-flags":0x042479ec,"handle-a-backend":0x042479f0,"handle-a-backend-alt":0x042479f8,"handle-a-kind":0x042479cc,"handle-a-volume":0x042479c8,"handle-b-volume":0x04247a0c,"handle-b-kind":0x04247a10,"transmitter-a":0x0423f828,"transmitter-b":0x0423f87c,"usb-streams":0x042479a4,"usb-enable":0x0420f478,"handle-b-state":0x04247a20,"handle-b-flags":0x04247a30,"handle-b-backend":0x04247a34,"handle-b-id":0x042479fc,"detect":0x04247684,"flags":0x04247688,"flags-2":0x0424768c,"flags-3":0x04247690,"mmi":0x04247698,"ext-mask":0x0420f4c4,"ext-handle":0x0420f4c8,"votes":0x0420f4d8,"max-level":0x0423f348,"aux-toggle":0x0420f43c]
  if let a=fields[kind] ?? (kind.hasPrefix("0x") ? UInt32(kind.dropFirst(2),radix:16) : nil) {packet=Data([5,0x5a,16,0,1,0x0d,0,2,5,0x5a,8,0,0x80,0x16,0,0,UInt8(a & 255),UInt8((a>>8)&255),UInt8((a>>16)&255),UInt8((a>>24)&255)]);label=String(format:"Master read four RAM bytes at 0x%08X",a)}
  // raw:<hex> sends one Master-relayed RACE frame (the inner frame is given in hex). Used only for approved state changes.
  else if kind.hasPrefix("raw:") {let h=Array(kind.dropFirst(4));var inner=[UInt8]();var i=0;while i+1<h.count {inner.append(UInt8(String(h[i...i+1]),radix:16)!);i+=2}
   packet=Data([5,0x5a,UInt8(4+inner.count),0,1,0x0d,0,2]+inner);label="RELAY_RACE inner "+String(kind.dropFirst(4))}
  // nvkey:XXXX reads up to 16 bytes of one NVKEY (RACE 0x0A0C, read only).
  else if kind.hasPrefix("nvkey:"), let id = UInt16(kind.dropFirst(6), radix: 16) {packet=Data([5,0x5a,14,0,1,0x0d,0,2,5,0x5a,6,0,0x0c,0x0a,UInt8(id & 255),UInt8(id >> 8),16,0]);label="Master READ_NVKEY_RESP_NVID \(kind.dropFirst(6)) max16 bytes"}
  // app-conf:XXXX reads one GET_APP_COMMON_CONF value (RACE 0x2C83, read only). 000B = game/chat mix ratio.
  else if kind.hasPrefix("app-conf:"), let id = UInt16(kind.dropFirst(9), radix: 16) {packet=Data([5,0x5a,12,0,1,0x0d,0,2,5,0x5a,4,0,0x83,0x2c,UInt8(id & 255),UInt8(id >> 8)]);label="Master GET_APP_COMMON_CONF \(kind.dropFirst(9))"}
  else if kind == "nvkey-f323" {packet=Data([5,0x5a,14,0,1,0x0d,0,2,5,0x5a,6,0,0x0c,0x0a,0x23,0xf3,2,0]);label="Master READ_NVKEY_RESP_NVID F323 max2 bytes"}
  else if kind == "relay-audio-path" {packet=Data([5,0x5a,12,0,1,0x0d,0,2,5,0x5a,4,0,1,9,10,0]);label="RELAY_RACE 0x0200 GET_MMI_ENUM module 0x000A"}
  else if kind == "relay-mmi-state" {packet=Data([5,0x5a,10,0,1,0x0d,0,2,5,0x5a,2,0,0x80,0x2c]);label="RELAY_RACE 0x0200 GET_MMI_STATE"}
  else if kind == "relay-line-input-ram" {packet=Data([5,0x5a,16,0,1,0x0d,0,2,5,0x5a,8,0,0x80,0x16,0,0,0x84,0x76,0x24,4]);label="RELAY_RACE 0x0200 READ_ADDRESS four bytes at 0x04247684"}
  else if kind == "relay-build" {packet=Data([5,0x5a,10,0,1,0x0d,0,2,5,0x5a,2,0,8,0x1e]);label="RELAY_RACE 0x0200 GET_BUILD_VERSION"}
  else if kind == "relay-id" {packet=Data([5,0x5a,2,0,0,0x0d]);label="QUERY_RELAY_ID"}
  else if kind == "build-version" {packet=Data([5,0x5a,2,0,8,0x1e]);label="GET_BUILD_VERSION"}
  else if kind == "line-input-ram" {packet=Data([5,0x5a,8,0,0x80,0x16,0,0,0x84,0x76,0x24,4]);label="READ_ADDRESS four bytes at 0x04247684"}
  else if kind == "audio-path" {packet=Data([5,0x5a,4,0,1,9,10,0]);label="GET_MMI_ENUM module 0x000A"}
  else {packet=Data([5,0x5a,2,0,0x80,0x2c]);label="GET_MMI_STATE"}
  super.init()
 }
 func log(_ kind:String,_ extra:[String:Any]=[:]){var row=extra;row["kind"]=kind;row["time"]=Date().timeIntervalSince1970;events.append(row)}
 // Response opcodes whose first payload byte (frame byte 6) is a status, where 0 means success.
 // Taken from saved replies; other opcodes (for example GET_MMI_STATE 0x2C80) start with a value instead.
 static let statusFirst:Set<Int>=[0x1680,0x0A0C,0x2C82,0x2C83,0x0002,0x1E08]
 // Find the reply that answers this request. A direct request expects a 05 5B response with the same opcode.
 // A relay request (opcode 0x0D01) expects a 05 5D relay notification that wraps the Master's 05 5B response
 // with the inner opcode. The short 05 5B 03 00 01 0D 00 is only the relay's transport acknowledgment.
 func reply(_ b:[UInt8])->[UInt8]? {
  let outer=Int(packet[4])|Int(packet[5])<<8;var f=b;var expect=outer
  // Bytes 6-7 of a relay frame are the relay ID (0x0200 = the Master); the reply must come from the requested one.
  if outer == 0x0d01 {guard f.count>=8,f[0]==5,f[1]==0x5d,f[4]==1,f[5]==0x0d,f[6]==packet[6],f[7]==packet[7] else{return nil};f=Array(f[8...]);expect=Int(packet[12])|Int(packet[13])<<8}
  guard f.count>=6,f[0]==5,f[1]==0x5b,f.count == 4+(Int(f[2])|Int(f[3])<<8),(Int(f[4])|Int(f[5])<<8) == expect else{return nil}
  return f
 }
 // Exit status: 0 = the write was acknowledged and the matching reply arrived with status 0 (or with no status field).
 // 1 = the session failed (Bluetooth off, headset not found, connect or subscribe failed, deadline), or the reply status is nonzero.
 // 3 = no matching reply arrived. A RACE command can be applied without a reply, so 3 means "unconfirmed", not "not applied".
 func finish(_ status:String){
  if let p=peripheral {if let c=rx,c.isNotifying {p.setNotifyValue(false,for:c)};central.cancelPeripheralConnection(p)}
  let acked=events.contains{$0["kind"] as? String == "write_ack" && $0["error"] as? String == "none"}
  let match=events.lazy.filter{$0["kind"] as? String == "notification"}.compactMap{($0["hex"] as? String).flatMap{h in self.reply(stride(from:0,to:h.count-1,by:2).compactMap{i in UInt8(h.dropFirst(i).prefix(2),radix:16)})}}.first
  var verdict="no matching reply";var code:Int32=3
  if let f=match {let op=Int(f[4])|Int(f[5])<<8
   if Query.statusFirst.contains(op) && (f.count<7 || f[6] != 0) {verdict=String(format:"reply status 0x%02X (rejected)",f.count<7 ? 0xff : Int(f[6]));code=1} else {verdict="reply ok";code=0}}
  if status != "response window completed" || !acked {verdict="session failed";code=1}
  let data=try! JSONSerialization.data(withJSONObject:["query":label,"status":status,"reply":verdict,"scope":(label.hasPrefix("RELAY_RACE inner") ? "One approved RACE command (state change)." : "One documented state query. No settings, NVKEY writes, or firmware commands."),"events":events],options:[.prettyPrinted,.sortedKeys]);print(String(data:data,encoding:.utf8)!)
  exit(code)
 }
 func centralManagerDidUpdateState(_ c:CBCentralManager){
  guard c.state == .poweredOn else {if c.state == .unauthorized || c.state == .poweredOff {finish("Bluetooth unavailable")};return}
  let ps=c.retrieveConnectedPeripherals(withServices:[CBUUID(string:"5052494D-2DAB-0341-6972-6F6861424C45")]).filter{$0.name == "BLE-CRUSHER PLYR 720"}
  guard ps.count == 1 else {finish("Expected one connected PLYR; found \(ps.count)");return}
  peripheral=ps[0];peripheral!.delegate=self;c.connect(peripheral!,options:nil)
 }
 func centralManager(_ c:CBCentralManager,didConnect p:CBPeripheral){log("connected");p.discoverServices([CBUUID(string:"5052494D-2DAB-0341-6972-6F6861424C45")])}
 func centralManager(_ c:CBCentralManager,didFailToConnect p:CBPeripheral,error:Error?){finish("connect failed")}
 func peripheral(_ p:CBPeripheral,didDiscoverServices error:Error?){guard error == nil,let s=p.services?.first else{finish("service unavailable");return};p.discoverCharacteristics(nil,for:s)}
 func peripheral(_ p:CBPeripheral,didDiscoverCharacteristicsFor s:CBService,error:Error?){
  guard error == nil else{finish("characteristics unavailable");return}
  tx=s.characteristics?.first{$0.uuid.uuidString == "43484152-2DAB-3241-6972-6F6861424C45"};rx=s.characteristics?.first{$0.uuid.uuidString == "43484152-2DAB-3141-6972-6F6861424C45"}
  guard let t=tx,t.properties.contains(.write),let r=rx,r.properties.contains(.notify) else{finish("required properties unavailable");return};p.setNotifyValue(true,for:r)
 }
 func peripheral(_ p:CBPeripheral,didUpdateNotificationStateFor c:CBCharacteristic,error:Error?){
  guard !sent else{return};guard error == nil,c.isNotifying,let t=tx else{finish("subscription failed");return}
  sent=true;log("request",["hex":packet.map{String(format:"%02x",$0)}.joined()]);p.writeValue(packet,for:t,type:.withResponse)
  DispatchQueue.main.asyncAfter(deadline:.now()+4){self.finish("response window completed")}
 }
 func peripheral(_ p:CBPeripheral,didWriteValueFor c:CBCharacteristic,error:Error?){log("write_ack",["error":error.map{String(describing:$0)} ?? "none"])}
 func peripheral(_ p:CBPeripheral,didUpdateValueFor c:CBCharacteristic,error:Error?){
  let b=c.value ?? Data();log("notification",["hex":b.map{String(format:"%02x",$0)}.joined(),"error":error.map{String(describing:$0)} ?? "none"])
 }
}
let query=Query(CommandLine.arguments.dropFirst().first ?? "mmi-state");query.central=CBCentralManager(delegate:query,queue:.main,options:[CBCentralManagerOptionShowPowerAlertKey:false]);DispatchQueue.main.asyncAfter(deadline:.now()+15){query.finish("deadline")};RunLoop.main.run()

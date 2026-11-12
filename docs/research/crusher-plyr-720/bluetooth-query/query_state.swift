import Foundation
import CoreBluetooth
final class Query:NSObject,CBCentralManagerDelegate,CBPeripheralDelegate {
 var central:CBCentralManager!;var peripheral:CBPeripheral?;var tx:CBCharacteristic?;var rx:CBCharacteristic?;var events:[[String:Any]]=[];var sent=false
 let packet:Data
 let label:String
 init(_ kind:String){
  if kind == "relay-line-input-ram" {packet=Data([5,0x5a,16,0,1,0x0d,0,2,5,0x5a,8,0,0x80,0x16,0,0,0x84,0x76,0x24,4]);label="RELAY_RACE 0x0200 READ_ADDRESS four bytes at 0x04247684"}
  else if kind == "relay-build" {packet=Data([5,0x5a,10,0,1,0x0d,0,2,5,0x5a,2,0,8,0x1e]);label="RELAY_RACE 0x0200 GET_BUILD_VERSION"}
  else if kind == "relay-id" {packet=Data([5,0x5a,2,0,0,0x0d]);label="QUERY_RELAY_ID"}
  else if kind == "build-version" {packet=Data([5,0x5a,2,0,8,0x1e]);label="GET_BUILD_VERSION"}
  else if kind == "line-input-ram" {packet=Data([5,0x5a,8,0,0x80,0x16,0,0,0x84,0x76,0x24,4]);label="READ_ADDRESS four bytes at 0x04247684"}
  else if kind == "audio-path" {packet=Data([5,0x5a,4,0,1,9,10,0]);label="GET_MMI_ENUM module 0x000A"}
  else {packet=Data([5,0x5a,2,0,0x80,0x2c]);label="GET_MMI_STATE"}
  super.init()
 }
 func log(_ kind:String,_ extra:[String:Any]=[:]){var row=extra;row["kind"]=kind;row["time"]=Date().timeIntervalSince1970;events.append(row)}
 // Same reply rules as audio-route/downstream/query_ram.swift.
 // Response opcodes whose first payload byte (frame byte 6) is a status, where 0 means success.
 static let statusFirst:Set<Int>=[0x1680,0x0A0C,0x2C82,0x2C83,0x0002,0x1E08]
 // A direct request expects a 05 5B response with the same opcode. A relay request (opcode 0x0D01) expects a
 // 05 5D relay notification that wraps the Master's 05 5B response; 05 5B 03 00 01 0D 00 is only the transport acknowledgment.
 func reply(_ b:[UInt8])->[UInt8]? {
  let outer=Int(packet[4])|Int(packet[5])<<8;var f=b;var expect=outer
  // Bytes 6-7 of a relay frame are the relay ID (0x0200 = the Master); the reply must come from the requested one.
  if outer == 0x0d01 {guard f.count>=8,f[0]==5,f[1]==0x5d,f[4]==1,f[5]==0x0d,f[6]==packet[6],f[7]==packet[7] else{return nil};f=Array(f[8...]);expect=Int(packet[12])|Int(packet[13])<<8}
  guard f.count>=6,f[0]==5,f[1]==0x5b,f.count == 4+(Int(f[2])|Int(f[3])<<8),(Int(f[4])|Int(f[5])<<8) == expect else{return nil}
  return f
 }
 // Exit status: 0 = the matching reply arrived with status 0 (or with no status field).
 // 1 = the session failed (Bluetooth off, headset not found, connect or subscribe failed, deadline), or the reply status is nonzero.
 // 3 = no matching reply arrived, so the capture is unconfirmed.
 func finish(_ status:String){
  if let p=peripheral {if let c=rx,c.isNotifying {p.setNotifyValue(false,for:c)};central.cancelPeripheralConnection(p)}
  let acked=events.contains{$0["kind"] as? String == "write_ack" && $0["error"] as? String == "none"}
  let match=events.lazy.filter{$0["kind"] as? String == "notification"}.compactMap{($0["hex"] as? String).flatMap{h in self.reply(stride(from:0,to:h.count-1,by:2).compactMap{i in UInt8(h.dropFirst(i).prefix(2),radix:16)})}}.first
  var verdict="no matching reply";var code:Int32=3
  if let f=match {let op=Int(f[4])|Int(f[5])<<8
   if Query.statusFirst.contains(op) && (f.count<7 || f[6] != 0) {verdict=String(format:"reply status 0x%02X (rejected)",f.count<7 ? 0xff : Int(f[6]));code=1} else {verdict="reply ok";code=0}}
  if status != "response window completed" || !acked {verdict="session failed";code=1}
  let data=try! JSONSerialization.data(withJSONObject:["query":label,"status":status,"reply":verdict,"scope":"One documented state query. No settings, NVKEY writes, or firmware commands.","events":events],options:[.prettyPrinted,.sortedKeys]);print(String(data:data,encoding:.utf8)!)
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

import Foundation
import CoreBluetooth
final class Query:NSObject,CBCentralManagerDelegate,CBPeripheralDelegate {
 var central:CBCentralManager!;var peripheral:CBPeripheral?;var tx:CBCharacteristic?;var rx:CBCharacteristic?;var events:[[String:Any]]=[];var sent=false;var timer:Timer?
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
 func log(_ kind:String,_ extra:[String:Any]=[:]){var row=extra;row["kind"]=kind;row["time"]=Date().timeIntervalSince1970;events.append(row);let d=try! JSONSerialization.data(withJSONObject:row,options:[.sortedKeys]);print(String(data:d,encoding:.utf8)!);fflush(stdout)}
 func finish(_ status:String){
  timer?.invalidate();if let p=peripheral {if let c=rx,c.isNotifying {p.setNotifyValue(false,for:c)};central.cancelPeripheralConnection(p)}
  let data=try! JSONSerialization.data(withJSONObject:["query":label,"status":status,"scope":"Repeated read-only queries to one known Master RAM block. No memory writes, settings, or firmware commands.","events":events],options:[.prettyPrinted,.sortedKeys]);print(String(data:data,encoding:.utf8)!);exit(0)
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
  log("monitor_ready");timer=Timer.scheduledTimer(withTimeInterval:3,repeats:true){_ in self.log("request",["hex":self.packet.map{String(format:"%02x",$0)}.joined()]);p.writeValue(self.packet,for:t,type:.withResponse)}
  DispatchQueue.main.asyncAfter(deadline:.now()+120){self.finish("monitor completed")}
 }
 func peripheral(_ p:CBPeripheral,didWriteValueFor c:CBCharacteristic,error:Error?){log("write_ack",["error":error.map{String(describing:$0)} ?? "none"])}
 func peripheral(_ p:CBPeripheral,didUpdateValueFor c:CBCharacteristic,error:Error?){
  let b=c.value ?? Data();log("notification",["hex":b.map{String(format:"%02x",$0)}.joined(),"error":error.map{String(describing:$0)} ?? "none"])
 }
}
let query=Query(CommandLine.arguments.dropFirst().first ?? "mmi-state");query.central=CBCentralManager(delegate:query,queue:.main,options:[CBCentralManagerOptionShowPowerAlertKey:false]);DispatchQueue.main.asyncAfter(deadline:.now()+130){query.finish("deadline")};RunLoop.main.run()

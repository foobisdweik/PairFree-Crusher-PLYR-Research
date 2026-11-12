import Foundation
import CoreBluetooth
final class Query:NSObject,CBCentralManagerDelegate,CBPeripheralDelegate {
 var central:CBCentralManager!;var peripheral:CBPeripheral?;var tx:CBCharacteristic?;var rx:CBCharacteristic?;var events:[[String:Any]]=[];var sent=false
 let packet:Data
 let label:String
 init(_ kind:String){
  let fields:[String:UInt32] = ["callback":0x0423be40,"route-enum":0x0420f43c,"route-handle":0x04247994,"route-handle-2":0x0424799c,"route-flags":0x042479a0,"handle-a-id":0x042479b8,"handle-a-state":0x042479dc,"handle-a-flags":0x042479ec,"handle-a-backend":0x042479f0,"handle-a-backend-alt":0x042479f8,"handle-a-kind":0x042479cc,"handle-a-volume":0x042479c8,"handle-b-volume":0x04247a0c,"handle-b-kind":0x04247a10,"transmitter-a":0x0423f828,"transmitter-b":0x0423f87c,"usb-streams":0x042479a4,"usb-enable":0x0420f478,"handle-b-state":0x04247a20,"handle-b-flags":0x04247a30,"handle-b-backend":0x04247a34,"handle-b-id":0x042479fc,"detect":0x04247684,"flags":0x04247688,"flags-2":0x0424768c,"flags-3":0x04247690,"mmi":0x04247698]
  if let a=fields[kind] {packet=Data([5,0x5a,16,0,1,0x0d,0,2,5,0x5a,8,0,0x80,0x16,0,0,UInt8(a & 255),UInt8((a>>8)&255),UInt8((a>>16)&255),UInt8((a>>24)&255)]);label=String(format:"Master read four RAM bytes at 0x%08X",a)}
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
 func finish(_ status:String){
  if let p=peripheral {if let c=rx,c.isNotifying {p.setNotifyValue(false,for:c)};central.cancelPeripheralConnection(p)}
  let data=try! JSONSerialization.data(withJSONObject:["query":label,"status":status,"scope":"One documented state query. No settings, NVKEY writes, or firmware commands.","events":events],options:[.prettyPrinted,.sortedKeys]);print(String(data:data,encoding:.utf8)!);exit(0)
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

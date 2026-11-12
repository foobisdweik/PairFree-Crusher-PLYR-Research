import Foundation
import CoreBluetooth
final class Inspector: NSObject,CBCentralManagerDelegate,CBPeripheralDelegate {
 var central:CBCentralManager!;var peripheral:CBPeripheral?;var records:[[String:Any]]=[];var remaining=0;var reads=0;var values:[[String:Any]]=[]
 func finish(_ status:String){
  if let p=peripheral {central.cancelPeripheralConnection(p)}
  let data=try! JSONSerialization.data(withJSONObject:["status":status,"scope":"Service discovery and selected standard reads only. No vendor commands or setting changes.","standard_values":values,"name":peripheral?.name ?? "unknown","services":records],options:[.prettyPrinted,.sortedKeys])
  print(String(data:data,encoding:.utf8)!);exit(0)
 }
 func centralManagerDidUpdateState(_ c:CBCentralManager){
  guard c.state == .poweredOn else {if c.state == .unauthorized || c.state == .poweredOff {finish("unavailable")};return}
  let matches=c.retrieveConnectedPeripherals(withServices:[CBUUID(string:"5052494D-2DAB-0341-6972-6F6861424C45")]).filter{$0.name == "BLE-CRUSHER PLYR 720"}
  guard matches.count == 1 else {finish("Expected one matching connected BLE device; found \(matches.count)");return}
  peripheral=matches[0];peripheral!.delegate=self;c.connect(peripheral!,options:nil)
 }
 func centralManager(_ c:CBCentralManager,didConnect p:CBPeripheral){p.discoverServices(nil)}
 func centralManager(_ c:CBCentralManager,didFailToConnect p:CBPeripheral,error:Error?){finish("connect failed: \(String(describing:error))")}
 func peripheral(_ p:CBPeripheral,didDiscoverServices error:Error?){
  guard error == nil else{finish("services failed");return}
  let services=p.services ?? [];remaining=services.count
  if remaining == 0 {finish("no services");return}
  for s in services {p.discoverCharacteristics(nil,for:s)}
 }
 func peripheral(_ p:CBPeripheral,didDiscoverCharacteristicsFor service:CBService,error:Error?){
  let cs=(service.characteristics ?? []).map {c -> [String:Any] in
   return ["uuid":c.uuid.uuidString,"properties":c.properties.rawValue,"read":c.properties.contains(.read),"write":c.properties.contains(.write),"write_without_response":c.properties.contains(.writeWithoutResponse),"notify":c.properties.contains(.notify),"indicate":c.properties.contains(.indicate)]
  }
  for c in service.characteristics ?? [] {
   if ["2A24","2A26","2A27","2A19"].contains(c.uuid.uuidString) && c.properties.contains(.read) {reads+=1;p.readValue(for:c)}
  }
  records.append(["uuid":service.uuid.uuidString,"characteristics":cs,"error":error.map{String(describing:$0)} ?? "none"]);remaining-=1
  if remaining == 0 && reads == 0 {finish("standard reads completed")}
 }
 func peripheral(_ p:CBPeripheral,didUpdateValueFor c:CBCharacteristic,error:Error?){
  let data=c.value ?? Data();values.append(["uuid":c.uuid.uuidString,"hex":data.map{String(format:"%02x",$0)}.joined(),"text":String(data:data,encoding:.utf8) ?? "binary","error":error.map{String(describing:$0)} ?? "none"]);reads-=1
  if remaining == 0 && reads == 0 {finish("standard reads completed")}
 }
}
let inspector=Inspector();inspector.central=CBCentralManager(delegate:inspector,queue:.main,options:[CBCentralManagerOptionShowPowerAlertKey:false])
DispatchQueue.main.asyncAfter(deadline:.now()+15){inspector.finish("deadline")};RunLoop.main.run()

import Foundation
import CoreBluetooth
final class Discovery: NSObject, CBCentralManagerDelegate {
    var central: CBCentralManager!
    var rows: [[String: Any]] = []
    func finish(_ status: String) {
        central.stopScan()
        let object: [String: Any] = ["status":status,"scope":"Discovery only. No connection, characteristic read, or control write.","devices":rows]
        let data = try! JSONSerialization.data(withJSONObject: object, options:[.prettyPrinted,.sortedKeys])
        print(String(data:data,encoding:.utf8)!)
        exit(0)
    }
    func centralManagerDidUpdateState(_ central: CBCentralManager) {
        if central.state == .poweredOn {
            let services = [CBUUID(string:"5052494D-2DAB-0341-6972-6F6861424C45"),CBUUID(string:"00001100-D102-11E1-9B23-00025B00A5A5")]
            for peripheral in central.retrieveConnectedPeripherals(withServices:services) {
                rows.append(["name":peripheral.name ?? "unknown","source":"connected BLE retrieval"])
            }
            central.scanForPeripherals(withServices:nil,options:[CBCentralManagerScanOptionAllowDuplicatesKey:false])
            DispatchQueue.main.asyncAfter(deadline:.now()+8) { self.finish("scan completed") }
        } else if central.state == .unauthorized || central.state == .unsupported || central.state == .poweredOff {
            finish("Bluetooth state: \(central.state.rawValue)")
        }
    }
    func centralManager(_ central: CBCentralManager, didDiscover peripheral: CBPeripheral, advertisementData: [String:Any], rssi RSSI: NSNumber) {
        let name = advertisementData[CBAdvertisementDataLocalNameKey] as? String ?? peripheral.name ?? ""
        guard name.lowercased().contains("crusher") || name.lowercased().contains("plyr") else {return}
        let services = (advertisementData[CBAdvertisementDataServiceUUIDsKey] as? [CBUUID] ?? []).map {$0.uuidString}
        rows.append(["name":name,"source":"BLE advertisement","rssi":RSSI,"advertised_services":services])
    }
}
let discovery = Discovery()
discovery.central = CBCentralManager(delegate:discovery,queue:.main,options:[CBCentralManagerOptionShowPowerAlertKey:false])
DispatchQueue.main.asyncAfter(deadline:.now()+15) {discovery.finish("discovery deadline")}
RunLoop.main.run()

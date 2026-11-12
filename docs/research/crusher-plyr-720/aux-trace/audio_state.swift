import Foundation
import CoreAudio

func uintValue(_ id: AudioObjectID, _ selector: AudioObjectPropertySelector) -> UInt32? {
    var address = AudioObjectPropertyAddress(mSelector: selector, mScope: kAudioObjectPropertyScopeGlobal, mElement: kAudioObjectPropertyElementMain)
    var value: UInt32 = 0
    var size = UInt32(MemoryLayout<UInt32>.size)
    let result = AudioObjectGetPropertyData(id, &address, 0, nil, &size, &value)
    return result == noErr ? value : nil
}
func name(_ id: AudioObjectID) -> String {
    var address = AudioObjectPropertyAddress(mSelector: kAudioObjectPropertyName, mScope: kAudioObjectPropertyScopeGlobal, mElement: kAudioObjectPropertyElementMain)
    let value = UnsafeMutablePointer<CFString?>.allocate(capacity: 1)
    value.initialize(to: nil)
    defer { value.deinitialize(count: 1); value.deallocate() }
    var size = UInt32(MemoryLayout<CFString>.size)
    let result = AudioObjectGetPropertyData(id, &address, 0, nil, &size, value)
    return result == noErr ? (value.pointee.map { $0 as String } ?? "unknown") : "unknown"
}
let system = AudioObjectID(kAudioObjectSystemObject)
var address = AudioObjectPropertyAddress(mSelector: kAudioHardwarePropertyDevices, mScope: kAudioObjectPropertyScopeGlobal, mElement: kAudioObjectPropertyElementMain)
var size: UInt32 = 0
AudioObjectGetPropertyDataSize(system, &address, 0, nil, &size)
var devices = [AudioObjectID](repeating: 0, count: Int(size) / MemoryLayout<AudioObjectID>.size)
AudioObjectGetPropertyData(system, &address, 0, nil, &size, &devices)
let input = uintValue(system, kAudioHardwarePropertyDefaultInputDevice)
let output = uintValue(system, kAudioHardwarePropertyDefaultOutputDevice)
var rows: [[String: Any]] = []
for id in devices {
    var row: [String: Any] = ["id": id, "name": name(id), "default_input": input == id, "default_output": output == id]
    if let value = uintValue(id, kAudioDevicePropertyDeviceIsRunningSomewhere) { row["running_somewhere"] = value != 0 }
    if let value = uintValue(id, kAudioDevicePropertyDeviceIsAlive) { row["alive"] = value != 0 }
    rows.append(row)
}
let data = try JSONSerialization.data(withJSONObject: ["devices": rows, "scope": "Read-only CoreAudio properties. Running does not identify a stream or application."], options: [.prettyPrinted, .sortedKeys])
print(String(data: data, encoding: .utf8)!)

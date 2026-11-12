import Foundation
import CoreAudio
func scalar<T>(_ obj:AudioObjectID,_ selector:AudioObjectPropertySelector,_ initial:T,_ scope:AudioObjectPropertyScope=kAudioObjectPropertyScopeGlobal)->T? {
 var a=AudioObjectPropertyAddress(mSelector:selector,mScope:scope,mElement:kAudioObjectPropertyElementMain)
 var v=initial;var size=UInt32(MemoryLayout<T>.size)
 guard AudioObjectGetPropertyData(obj,&a,0,nil,&size,&v)==noErr else{return nil};return v
}
let system=AudioObjectID(kAudioObjectSystemObject)
var a=AudioObjectPropertyAddress(mSelector:kAudioHardwarePropertyDevices,mScope:kAudioObjectPropertyScopeGlobal,mElement:kAudioObjectPropertyElementMain)
var size:UInt32=0
AudioObjectGetPropertyDataSize(system,&a,0,nil,&size)
var ids=[AudioObjectID](repeating:0,count:Int(size)/4)
AudioObjectGetPropertyData(system,&a,0,nil,&size,&ids)
let di:UInt32=scalar(system,kAudioHardwarePropertyDefaultInputDevice,UInt32(0)) ?? 0
let dout:UInt32=scalar(system,kAudioHardwarePropertyDefaultOutputDevice,UInt32(0)) ?? 0
var rows=[[String:Any]]()
for id in ids {
 let name:CFString?=scalar(id,kAudioObjectPropertyName,"" as CFString)
 rows.append(["name":(name as String?) ?? "unknown","id":id,"default_input":id==di,"default_output":id==dout,"running_somewhere":scalar(id,kAudioDevicePropertyDeviceIsRunningSomewhere,UInt32(0)) as Any? ?? NSNull(),"nominal_rate":scalar(id,kAudioDevicePropertyNominalSampleRate,Float64(0)) as Any? ?? NSNull()])
}
let output:[String:Any] = ["time":Date().timeIntervalSince1970,"scope":"Read-only CoreAudio properties. No playback or capture.","devices":rows]
print(String(data:try! JSONSerialization.data(withJSONObject:output,options:[.prettyPrinted,.sortedKeys]),encoding:.utf8)!)

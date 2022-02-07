using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class XRInfo : MonoBehaviour
{
    public static bool isVREnabled {
        get { return XRSettings.isDeviceActive; } //might not be correct way
    }

    private static XRInputSubsystem currentXRInputSubsystem = null;

    public void Awake()
    {   
        //define connect/disconnect of xrinputsubsystem by connect/disconnect of headset
        InputDevices.deviceConnected += (inputDevice) => {
            if(inputDevice.characteristics == InputDeviceCharacteristics.HeadMounted) {
                currentXRInputSubsystem = inputDevice.subsystem;
            }
        };

        InputDevices.deviceDisconnected += (inputDevice) => {
            if(inputDevice.characteristics == InputDeviceCharacteristics.HeadMounted){
                currentXRInputSubsystem = null;
            }
        };
    }
}

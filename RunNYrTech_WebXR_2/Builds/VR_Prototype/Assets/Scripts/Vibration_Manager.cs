using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class Vibration_Manager : MonoBehaviour
{

    public void TriggerImpulseVibration(PlayerController.Hand hand, float strength, float duration)
    {
        if (hand == PlayerController.Hand.L)
        {
            InputDevices.GetDeviceAtXRNode(XRNode.LeftHand).SendHapticImpulse(0, strength, duration);
        }
        else if (hand == PlayerController.Hand.R)
        {
            InputDevices.GetDeviceAtXRNode(XRNode.RightHand).SendHapticImpulse(0, strength, duration);
        }

    }
}

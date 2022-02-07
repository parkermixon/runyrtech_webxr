using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestingTracker : MonoBehaviour
{
    [SerializeField] private Transform centerEye, trackingSpace, rig;

    // Update is called once per frame
    void Update()
    {
        Debug.Log("Center eye: " + centerEye.position.y);
        Debug.Log("Tracking space: " + trackingSpace.position.y);
        Debug.Log("Rig: " + rig.position.y);
    }
}

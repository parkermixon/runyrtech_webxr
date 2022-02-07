using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class PlayerController : MonoBehaviour
{
    [SerializeField]
    private GameObject headset;

    [SerializeField]
    private float m_playerHeight;

    [SerializeField]
    private GameObject floorRef;

    [SerializeField]
    private LayerMask groundLayer;

    public enum Hand { L, R, B};

    private Vibration_Manager m_VibrationManager;

    public void Awake()
    {
        m_VibrationManager = GetComponent<Vibration_Manager>();
    }

    public void TriggerVibration(Hand tempHand, float vibStrength, float vibLength)
    {
        m_VibrationManager.TriggerImpulseVibration(tempHand, vibStrength, vibLength);
    }

    public float CalcHeight()
    {

        float tempHeight = headset.transform.position.y - floorRef.transform.position.y;
        tempHeight = Mathf.Abs(tempHeight);
        m_playerHeight = tempHeight;

        return tempHeight;

    }



}

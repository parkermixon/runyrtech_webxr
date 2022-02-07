using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class BoxController : MonoBehaviour
{
    [SerializeField]
    private int  m_defaultPointValue = 1;
    [SerializeField]
    private float m_defaultSpeedValue = 1;

    [SerializeField]
    private HitDetector.DetectorType m_allowedDetector;
    public HitDetector.DetectorType allowedDetector { get { return m_allowedDetector; } }

    private float m_speed = 1;
    public float speed { get { return m_speed; } set { m_speed = value; } }

    private int m_pointValue = 1;
    public int pointValue { get { return m_pointValue; } set { m_pointValue = value; } }

    private Rigidbody rb;

    [SerializeField]
    private TextMeshPro txt;

    private void Awake()
    {
        rb = GetComponent<Rigidbody>();
    }

    private void DeathTimer()
    {
        gameObject.SetActive(false);
    }

    private void OnEnable()
    {
        rb.AddForce((m_speed) * -transform.forward, ForceMode.Impulse);

        if (txt != null)
            txt.text = m_pointValue.ToString();

    }

    private void OnCollisionEnter(Collision collision)
    {
        gameObject.SetActive(false);
    }

    private void OnDisable()
    {
        m_pointValue = m_defaultPointValue;
        m_speed = m_defaultSpeedValue;
        rb.velocity = Vector3.zero;
        rb.angularVelocity = Vector3.zero;
    }

    
}

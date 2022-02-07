using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class HitDetector : MonoBehaviour
{
    public delegate void HitEvent(int point, Vector3 hitPosition);
    public static event HitEvent OnHit;

    private AudioSource aSource;

    [SerializeField]
    private AudioClip positiveHitSound;
    [SerializeField]
    private AudioClip negativeHitSound;

   public enum DetectorType { head, leftHand, rightHand, any};

    [SerializeField]
    private DetectorType currentDetector = DetectorType.head;

    [SerializeField]
    [Range(0, 1)]
    private float m_vibrationStrengthBox = 1f;

    [SerializeField]
    [Range(0, 1)]
    private float m_vibrationLengthBox = 0.25f;

    [SerializeField]
    [Range(0, 1)]
    private float m_vibrationStrengthButton = 0.6f;

    [SerializeField]
    [Range(0, 1)]
    private float m_vibrationLengthButton = 0.05f;

    private PlayerController m_playerController;

    private void Awake()
    {
        aSource = GetComponent<AudioSource>();
        m_playerController = GetComponentInParent<PlayerController>();
    }

    private void OnTriggerEnter(Collider other)
    {
        BoxController hit = other.gameObject.GetComponent<BoxController>();

        if (hit != null)
        {

            if(hit.allowedDetector == currentDetector || hit.allowedDetector == DetectorType.any)
            {
                OnHit?.Invoke(hit.pointValue, transform.position);

                if (currentDetector == DetectorType.leftHand)
                    m_playerController.TriggerVibration(PlayerController.Hand.L, m_vibrationStrengthBox, m_vibrationLengthBox);
                else if(currentDetector == DetectorType.rightHand)
                    m_playerController.TriggerVibration(PlayerController.Hand.R, m_vibrationStrengthButton, m_vibrationLengthButton);

                if (hit.pointValue > 0)
                {
                    aSource.pitch = Random.Range(0.99f, 1.01f);
                    aSource.PlayOneShot(positiveHitSound);
                }
                else
                {
                    aSource.pitch = Random.Range(0.69f, 0.71f);
                    aSource.PlayOneShot(negativeHitSound);
                }

                hit.gameObject.SetActive(false);
            }       

           
        }
           


    }



}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialManager : MonoBehaviour
{

    [SerializeField]
    private AudioClip tutorialIntroClip;

    [SerializeField]
    private AudioSource musicAudio;

    private AudioSource aSource;

    public void Awake()
    {
        aSource = GetComponent<AudioSource>();


    }

    public void Start()
    {
        aSource.PlayOneShot(aSource.clip);
    }

    public void StopAdudio()
    {

        if(aSource.isPlaying)
            aSource.Stop();


        if(!musicAudio.isPlaying)
            musicAudio.Play();

    }

}

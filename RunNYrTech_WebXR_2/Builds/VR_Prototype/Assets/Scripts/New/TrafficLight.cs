using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class TrafficLight : MonoBehaviour
{
    [SerializeField]
    private GameObject[] lights;

    [SerializeField]
    private float delayBetweenLights = 1;

    [SerializeField]
    private float initialDelay = 1;

    [SerializeField]
    private AudioClip[] audioList;

    [SerializeField]
    private Transform rightSideTargetTransform;

    [SerializeField]
    private Transform pedstalTragetTransform;

    [SerializeField]
    private GameObject pedastal;

    [SerializeField]
    private float timeToRightTarget = 1f;

    [SerializeField]
    private float rotationTime = 5f;

    private GameObject currentLevelObj;


    private int num = 0;
    private AudioSource aSource;

    public void Awake()
    {
        aSource = GetComponent<AudioSource>();
        num = 0;
        for (int i = 0; i < lights.Length; i++)
        {
            lights[i].SetActive(false);
        }
    }


    public IEnumerator StartTrafficLight(Mode currentMode, AudioClip nextLevelAudio, GameObject levelObj)
    {
        if(nextLevelAudio != null)
            aSource.PlayOneShot(nextLevelAudio);


        if (levelObj != null)
        {
            if (currentLevelObj != null)
                currentLevelObj.SetActive(false);

            levelObj.transform.position = pedstalTragetTransform.position;
            levelObj.SetActive(true);
            currentLevelObj = levelObj;
        }

        pedastal.SetActive(true);

        yield return new WaitForSeconds(initialDelay);

        while (num < 3)
        {
            
            switch (num)
            {
                case (0):
                    aSource.PlayOneShot(audioList[0]);
                    lights[0].SetActive(true);              
                    num++;
                    break;
                case (1):
                    aSource.PlayOneShot(audioList[1]);
                    lights[0].SetActive(false);
                    lights[1].SetActive(true);
                    num++;
                    break;
                case (2):
                    aSource.PlayOneShot(audioList[2]);
                    lights[1].SetActive(false);
                    lights[2].SetActive(true);
                    num++;
                    break;
            }

            yield return new WaitForSeconds(delayBetweenLights);
        }

        if (levelObj != null)
        {
            levelObj.transform.DOMove(rightSideTargetTransform.position, timeToRightTarget);
            levelObj.transform.DORotateQuaternion(rightSideTargetTransform.rotation, timeToRightTarget);
            levelObj.transform.DOScale(rightSideTargetTransform.localScale, timeToRightTarget);
        }

        pedastal.SetActive(false); 

        currentMode.pauseMode = false;

        gameObject.SetActive(false);
        
    }

    public void Reset()
    {
        currentLevelObj.SetActive(false);
    }

    public void OnDisable()
    {
        StopAllCoroutines();
        pedastal.SetActive(false);

        num = 0;
        for(int i = 0; i < lights.Length; i++)
        {
            lights[i].SetActive(false);
        }
    }
}

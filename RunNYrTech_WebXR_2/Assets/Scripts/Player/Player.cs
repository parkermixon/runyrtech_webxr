using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Player : MonoBehaviour, IStateRecordable<PlayerState>
{
    [SerializeField] private TriggerPart head;
    [SerializeField] private TriggerPart leftHand;
    [SerializeField] private TriggerPart rightHand;


    public PlayerState GetState() {
        return new PlayerState(head.transform, leftHand.transform, rightHand.transform);
    } 
}

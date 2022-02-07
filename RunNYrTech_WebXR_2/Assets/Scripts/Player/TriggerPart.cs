using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class TriggerPart : MonoBehaviour, IStateRecordable<CollidingPart>
{
    [SerializeField]
    public StrikingPart strikingPart;

    void Awake() {
        //Ensure there is a trigger collider in one of the children, if not throw an error to implement one 
        //(don't want to just create one as it might need to be a specific shape)

        Collider collider = GetComponentInChildren<Collider>(); 
        if(collider == null) {
            Debug.LogError("StrikingPart requires a trigger collider in it or its children", this);
        } else {
            collider.isTrigger = true;
        }
    }

    public CollidingPart GetState() {
        return new CollidingPart(strikingPart.ToString(), transform);
    }
}

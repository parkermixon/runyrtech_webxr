using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public abstract class Target : MonoBehaviour, IStateRecordable<TargetState>
{
    protected Vector3 speed = Vector3.zero;
    protected Action<Target, TriggerPart> hitCallback;
    protected float programmedCellDeathMetres = 0;
    protected float distance = 0;

    public Func<TargetState> GetTargetState;
    public abstract void Init(Vector3 speed, float lifeTimeMetres, int value, Action<Target, TriggerPart> hitCallback);

    void OnTriggerEnter(Collider collider){
        TriggerPart triggerPart = collider.GetComponentInParent<TriggerPart>();
        Debug.Log(collider.name);
        Debug.Log(triggerPart);
        if(triggerPart != null) {
            hitCallback(this, triggerPart);
            GameObject.Destroy(gameObject);
        }
    }

    void FixedUpdate(){
        this.transform.position += speed;

        distance += Vector3.Magnitude(speed);
        if(distance >= programmedCellDeathMetres) {
            Destroy(this.gameObject);
        }
    }

    public TargetState GetState() {
        return GetTargetState();
    }
}

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

[RequireComponent(typeof(Rigidbody))]
public class SimpleTarget : Target
{
    public override void Init(Vector3 speed, float lifeTimeMetres, int value, Action<Target, TriggerPart> hitCallback){ //value is here to allow for number target
        this.speed = speed;
        this.hitCallback = hitCallback;
        this.programmedCellDeathMetres = lifeTimeMetres;
    }

}

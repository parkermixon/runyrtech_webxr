using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HandController : MonoBehaviour
{

    private bool triggerPressed = false;

    [SerializeField]
    private MeshGenerator meshGen;

    public void Update()
    {
        if(Input.GetAxisRaw(gameObject.name) > 0.9f && !triggerPressed)
        {
            triggerPressed = true;

            if (meshGen != null)
                meshGen.GeneratePoint(transform.position);
        }
        else if(Input.GetAxisRaw(gameObject.name) <= 0.2f && triggerPressed)
         { 
            triggerPressed = false;
        }

    }

}

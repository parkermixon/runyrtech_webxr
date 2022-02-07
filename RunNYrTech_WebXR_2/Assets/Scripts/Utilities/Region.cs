using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Region", menuName = "ScriptableObjects/Region")]
public class Region : PointContainer
{
    public Vector2 topLeft, bottomRight;

    public override Vector2 GetPoint()
    {
        float x = UnityEngine.Random.Range(topLeft.x, bottomRight.x);
        float y = UnityEngine.Random.Range(topLeft.y, bottomRight.y);

        return new Vector2(x, y);
    }
}

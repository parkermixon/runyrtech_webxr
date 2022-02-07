using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Flags]
public enum StrikingPart {
    None = 0,
    Head = 0x1,
    LeftHand = 0x2,
    RightHand = 0x4,
    All = ~0
    
}

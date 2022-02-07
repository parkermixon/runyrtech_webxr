using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IStateRecordable<T> {
    public T GetState();
}

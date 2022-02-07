using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(WebGLExportSettings))]
public class WebGLExportSettings : Editor
{
    [MenuItem("Tools/Enable WebGL Debug")]
    static void SetWebGLArgs(){
        PlayerSettings.WebGL.emscriptenArgs="--profiling-funcs";
        Debug.Log(PlayerSettings.WebGL.emscriptenArgs);
    }
    [MenuItem("Tools/Disable WebGL Debug")]
    static void UnsetWebGLArgs(){
        PlayerSettings.WebGL.emscriptenArgs="";
    }
}

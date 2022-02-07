using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Reflection;


public static class JSONHelper
{
    public static string CreateJSONObject(Dictionary<string, object> objectData) {
        string jsonObject = "{";

        List<string> formattedKeyVals = new List<string>();
        foreach(KeyValuePair<string, object> keyVal in objectData) {
            formattedKeyVals.Add(String.Format("\"{0}\":{1}", keyVal.Key, ConvertToJson(keyVal.Value)));
        }

        jsonObject += String.Join(",", formattedKeyVals);

        jsonObject += "}";

        return jsonObject;
    }

    public static string ConvertToJson(object obj) {
        Debug.Log("converting to json");
        Debug.Log(obj.ToString());
        Debug.Log(obj.GetType());
        if (obj is string) { //check if string first, because a numerical string will get through the number tryparse below
            Debug.Log("string");
            return "\"" + (string)obj + "\"";
        } else if (Single.TryParse(obj.ToString(), out float floatVal)) { //check if number
            Debug.Log("number");
            return obj.ToString();
        } else if(obj.GetType().IsValueType || obj.GetType() == typeof(MonoBehaviour) || obj.GetType() == typeof(ScriptableObject)) { //check for fields supported by jsonutilty
            Debug.Log("mono");
            return JSONHelper.ObjectToJson(obj);
        } else if (obj.GetType() == typeof(Transform)) { //have to have exception for Transform type since it implements IEnumerable as well; and we just want loc, rot, and scale from it
            Transform transform = (Transform)obj;
            return CreateJSONObject(new Dictionary<string, object>() {
                {"position", transform.position}, 
                {"rotation", transform.rotation},
                {"scale", transform.localScale}
            });
        } else if(obj.GetType().IsSerializable) { //check for fields supported by jsonutilty
            Debug.Log("serializable");
            return ObjectToJson(obj);
        } else if(obj is System.Collections.IEnumerable) {
            Debug.Log("enumerable");
            if(obj.GetType() == typeof(Dictionary<string, object>)) {
                return CreateJSONObject((Dictionary<string, object>)obj); //some recursion
            } else {
                string json = "[";
                List<string> jsonVals = new List<string>();
                foreach(object value in (System.Collections.IEnumerable)(obj)) { 
                    jsonVals.Add(ConvertToJson(value)); //lotta recursion
                }
                json += String.Join(",", jsonVals) + "]";

                return json;
            }
        } else {
            return null; //default
        }
    }

    public static string ObjectToJson(object obj){
        Debug.Log("converting from obj");
        string json = "{";

        List<string> entries = new List<string>();
        foreach(FieldInfo fieldInfo in obj.GetType().GetFields(BindingFlags.Public | BindingFlags.Instance)) {
            Debug.Log(fieldInfo.Name);
            Debug.Log(fieldInfo.GetValue(obj));
            entries.Add(String.Format("\"{0}\" : {1}", fieldInfo.Name, ConvertToJson(fieldInfo.GetValue(obj))));
        }

        json += String.Join(",", entries) + "}";

        return json;
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class CustomUtils
{
    public static T ChooseRandom<T>(T[] array) {
        return array[Random.Range(0, array.Length)];
    }

    public static string RemoveWhitespace(string val) {
        string cleanedString = "";
        foreach(char c in val) {
            if(!char.IsWhiteSpace(c)) {
                cleanedString += c;
            }
        }
        return cleanedString;
    }

    public static List<T> EnumFlagsToList<T>(T value) where T : System.Enum {
        string[] enumNames = value.ToString().Split(','); //not dealing with whitespace, Enum.Parse seems to take care of that

        List<T> outList = new List<T>();

        for (int i = 0; i < enumNames.Length; i++) {
            outList.Add((T) System.Enum.Parse(typeof(T), enumNames[i]));//unchecked cast, should be safe though as the input is the same type
        }

        return outList;
    }

    public static List<string> EnumFlagsToStringList<T>(T enumValue) where T : System.Enum{
        return new List<string>(RemoveWhitespace(enumValue.ToString()).Split(','));
    }
}

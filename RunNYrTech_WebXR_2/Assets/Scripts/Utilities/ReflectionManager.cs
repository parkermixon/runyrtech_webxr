using System; 
using System.Reflection;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class ReflectionManager
{
    public static Type[] GetAllDerivedTypes(this AppDomain appDomain, Type baseType) {
        List<Type> derivedTypes = new List<Type>();
        
        foreach(Assembly assembly in appDomain.GetAssemblies()){
            foreach(Type type in assembly.GetTypes()) {
                if(type.IsSubclassOf(baseType)) derivedTypes.Add(type);
            }
        }

        return derivedTypes.ToArray();
    }
}

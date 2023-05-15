using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "LevelData", menuName = "CreateLevel/LevelData", order = 1)]
public class SaveData : ScriptableObject
{
    public List<Level_Data> list_data;
}

[Serializable]
public class Level_Data
{
    public string name;
    public float Time;
    public int Count;

    public Level_Data(string name, float time, int count)
    {
        this.name = name;
        this.Time = time;
        this.Count = count;
    }
}
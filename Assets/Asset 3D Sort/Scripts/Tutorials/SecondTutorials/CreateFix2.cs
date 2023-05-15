using Lean.Pool;
using System.CodeDom;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;

public class CreateFix2 : MonoBehaviour
{
    [SerializeField] public List<Transform> list;
    public static CreateFix2 instance { get; private set; }

    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
        QualitySettings.vSyncCount = 0;
        Application.targetFrameRate = 60;
    }

    public int GetIndex(Transform FirstPosition)
    {
        int index = 0;
        for (int i = 0; i < list.Count; i++)
        {
            if (FirstPosition.name == list[i].name)
            {
                index = i;
            }
        }
        return index;
    }
}
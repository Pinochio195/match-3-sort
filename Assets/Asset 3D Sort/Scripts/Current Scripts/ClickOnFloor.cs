using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using DG.Tweening;
using IngameDebugConsole;
using System;
using System.Linq;
using Unity.VisualScripting;

public class ClickOnFloor : MonoBehaviour
{
    private float raylength = 4000;
    public LayerMask mask;
    private int click_Count = 0;
    private Vector3 Position_1;
    private Vector3 Position_2;

    private int CountCheck;
    public List<Transform> List_FirstClick;
    private List<Transform> List_SecondClick;

    private int isCheck;

    [Range(0.1f, .75f)]
    [SerializeField] private float TimeSpeedPlayer = 2f;

    private Transform Ex_FirstClick;
    private int b = 0;

    [Range(0.15f, 0.5f)]
    [SerializeField] private float SpeedDisplayObject;

    [SerializeField] private Rigidbody rigidbodyAnimal;
    public static bool isClick;
    public static bool isStartGame;
    public static ClickOnFloor instance { get; set; }

    private void Awake()
    {
        instance = this;
    }

    private void Update()
    {
        if (isStartGame)
        {
            if (!isClick)
            {
                //Click1Object();
            }
            else
            {
            }
        }
        ClickObject();
    }

    private void ClickObject()
    {
        if (Input.GetMouseButtonDown(0) && !EventSystem.current.IsPointerOverGameObject())
        {
            RaycastHit ray;
            Ray ray1 = Camera.main.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray1, out ray, raylength, mask))
            {
                Debug.Log(ray.collider.gameObject.name);
            }
        }
    }

    private IEnumerator MoveOb()
    {
        for (int CountMove = 0; CountMove < Mathf.Min(List_FirstClick.Count, List_SecondClick.Count); CountMove++)
        {
            Transform ExSample;
            Transform Position_1_ = List_FirstClick[CountMove];
            Transform Position_2_ = List_SecondClick[CountMove];
            //Position_1 = List_FirstClick[CountMove].position;
            //Position_2 = List_SecondClick[CountMove].position;
            List<Vector3> list = new List<Vector3>();
            list.Add(new Vector3((Position_2_.position.x + List_FirstClick[CountMove].position.x) / 2, (Position_2_.position.y + List_FirstClick[CountMove].position.y) / 2, List_FirstClick[CountMove].position.z - 1.25f));
            list.Add(Position_2_.position);
            float X = Vector3.Distance(List_FirstClick[CountMove].position, Position_2_.position);
            //All box is disable
            //Disable Box
            for (int i = 0; i < CreateOb.instance.list.Count; i++)
            {
                CreateOb.instance.list[i].GetComponent<BoxCollider>().enabled = false;
            }

            List_FirstClick[CountMove].DOPath(list.ToArray(), X * TimeSpeedPlayer, PathType.CatmullRom);
            StartCoroutine(DelayBoxcollider(X * TimeSpeedPlayer));
            //List_SecondClick[CountMove].DOMove(new Vector3(Position_1_.position.x, Position_1_.position.y, Position_1_.position.z + .75f), .1f);
            List_SecondClick[CountMove].DOMove(Position_1_.position, .1f);
            //set parent
            ExSample = List_FirstClick[CountMove].parent;
            List_FirstClick[CountMove].parent = List_SecondClick[CountMove].parent;
            List_SecondClick[CountMove].parent = ExSample;
            List_SecondClick[CountMove].DOLocalMoveZ(0, .1f);
            CreateOb.instance.CheckWin(List_FirstClick[CountMove], List_SecondClick[CountMove]);
            if (CountMove == Mathf.Min(List_FirstClick.Count, List_SecondClick.Count) - 1)
            {
                int a = List_FirstClick.Count - List_SecondClick.Count < 0 ? 0 : List_FirstClick.Count - List_SecondClick.Count;
                if (List_FirstClick.Count - List_SecondClick.Count < 0)
                {
                    //Debug.Log(List_FirstClick.Count - List_SecondClick.Count);
                }
                StartCoroutine(PutDownOBject(a));
            }

            if (CheckWinnerForAll() >= CreateOb.instance.ParentPosition.Count)
            {
                UI_Manager.instance.winner.Next_Level.SetActive(true);
                UI_Manager.instance.FireWin1.Play();
                UI_Manager.instance.FireWin2.Play();
                UI_Manager.instance.Check_Vibrate();
                UI_Manager.instance.timeplay.isStart = false;
                isStartGame = false;
            }

            yield return new WaitForSeconds(.3f);
        }
    }

    private IEnumerator PutDownOBject(int count)
    {
        yield return new WaitForSeconds(.3f);

        //Console.WriteLine(b);
        b = List_FirstClick.IndexOf(List_FirstClick.Last());
        for (int i = 0; i < count; i++)
        {
            Debug.Log(count);
            Debug.Log(b);
            List_FirstClick[b].DOLocalMoveZ(0f, SpeedDisplayObject);
            b--;
            //Debug.Log(i);
        }
    }

    private IEnumerator DelayBoxcollider(float delaytime)
    {
        yield return new WaitForSeconds(delaytime + .1f);
        for (int i = 0; i < CreateOb.instance.list.Count; i++)
        {
            CreateOb.instance.list[i].GetComponent<BoxCollider>().enabled = true;
        }
    }

    private int CheckWinnerForAll()
    {
        for (int i = 0; i < CreateOb.instance.list.Count; i++)
        {
            if (i % 3 == 1)
            {
                if (CreateOb.instance.list[i].CompareTag(CreateOb.instance.list[i - 1].tag) && CreateOb.instance.list[i].CompareTag(CreateOb.instance.list[i + 1].tag))
                {
                    isCheck++;
                }
                if (!CreateOb.instance.list[i].CompareTag(CreateOb.instance.list[i - 1].tag) || !CreateOb.instance.list[i].CompareTag(CreateOb.instance.list[i + 1].tag))
                {
                    isCheck = 0;
                }
            }
        }

        return isCheck;
    }
}
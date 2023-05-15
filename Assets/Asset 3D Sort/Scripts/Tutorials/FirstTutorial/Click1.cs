using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using DG.Tweening;
using IngameDebugConsole;
using System;
using System.Linq;

public class Click1 : MonoBehaviour
{
    private float raylength = 4000;
    public LayerMask mask;
    public int click_Count = 0;

    public List<Transform> List_FirstClick;
    public List<Transform> List_SecondClick;

    //private int isCheck = 0;
    //private bool isCheck;
    private int isCheck;

    [Range(0.1f, .75f)]
    [SerializeField] private float TimeSpeedPlayer = 2f;

    private Transform Ex_FirstClick;
    private int b = 0;

    [Range(0.15f, 0.5f)]
    [SerializeField]
    private float SpeedDisplayObject;

    public static bool isClick;
    public static bool StartGame;
    public static Click1 instance { get; set; }

    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
    }

    private void Update()
    {
        if (StartGame)
        {
            if (!isClick)
            {
                //Click1Object();
            }
            else
            {
                ClickObject();
            }
        }
    }

    private void ClickObject()
    {
        if (Input.GetMouseButtonDown(0) && !EventSystem.current.IsPointerOverGameObject())
        {
            RaycastHit ray;
            Ray ray1 = Camera.main.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray1, out ray, raylength, mask))
            {
                if (click_Count == 0 && !ray.collider.CompareTag("Empty"))
                {
                    AudioManager.instance.PlaySound(AudioManager.instance.SoundMove[0], 1);
                    List_FirstClick.Add(CreateFix.instance.list[8]);
                    List_FirstClick.Add(CreateFix.instance.list[6]);
                    List_FirstClick[0].DOLocalMoveZ(+.75f, SpeedDisplayObject);
                    List_FirstClick[1].DOLocalMoveZ(+.75f, SpeedDisplayObject);
                    click_Count++;
                    TapToTutorials.instance.One_SecondTime();
                }
                //Check bug
                else if (click_Count == 1 && ray.collider.CompareTag("Empty"))
                {
                    AudioManager.instance.PlaySound(AudioManager.instance.SoundMove[1], 1);
                    //List_SecondClick = new List<Transform>();
                    List_SecondClick.Add(CreateFix.instance.list[4]);
                    List_SecondClick.Add(CreateFix.instance.list[3]);
                    StartCoroutine(MoveOb());
                    click_Count++;
                    TapToTutorials.instance.Two_FirstTime();
                }
                if (click_Count == 2 && !ray.collider.CompareTag("Empty"))
                {
                    AudioManager.instance.PlaySound(AudioManager.instance.SoundMove[0], 1);
                    List_FirstClick = new List<Transform>();
                    List_FirstClick.Add(CreateFix.instance.list[7]);
                    List_FirstClick[0].DOLocalMoveZ(+.75f, SpeedDisplayObject);
                    click_Count++;
                    TapToTutorials.instance.Two_SecondTime();
                }
                //Check bug
                else if (click_Count == 3 && ray.collider.CompareTag("Empty"))
                {
                    AudioManager.instance.PlaySound(AudioManager.instance.SoundMove[1], 1);
                    List_SecondClick = new List<Transform>();
                    List_SecondClick.Add(CreateFix.instance.list[0]);
                    StartCoroutine(MoveOb());
                    click_Count++;
                    UI_Manager.instance.winner.Next_Level.SetActive(true);
                    UI_Manager.instance.timeplay.isStart = false;
                    UI_Manager.instance.FireWin1.Play();
                    UI_Manager.instance.FireWin2.Play();
                    TapToTutorials.instance.HandTutorial.SetActive(false);
                }
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

            List<Vector3> list = new List<Vector3>();
            list.Add(new Vector3((Position_2_.position.x + List_FirstClick[CountMove].position.x) / 2, (Position_2_.position.y + List_FirstClick[CountMove].position.y) / 2, List_FirstClick[CountMove].position.z - 1.25f));
            list.Add(Position_2_.position);
            float X = Vector3.Distance(List_FirstClick[CountMove].position, Position_2_.position);

            List_FirstClick[CountMove].DOPath(list.ToArray(), X * TimeSpeedPlayer, PathType.CatmullRom);
            List_SecondClick[CountMove].DOMove(Position_1_.position, .1f);
            yield return new WaitForSeconds(.3f);
        }
    }
}
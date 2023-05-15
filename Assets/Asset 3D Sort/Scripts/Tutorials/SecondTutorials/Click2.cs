using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using DG.Tweening;
using IngameDebugConsole;
using System;
using System.Linq;

public class Click2 : MonoBehaviour
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

    [Range(0.15f, 0.5f)]
    [SerializeField]
    private float SpeedDisplayObject;

    public static Click2 instance { get; set; }

    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
    }

    private void Update()
    {
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
                if (click_Count == 0 && !ray.collider.CompareTag("Empty"))
                {
                    AudioManager.instance.PlaySound(AudioManager.instance.SoundMove[0], 1);
                    List_FirstClick.Add(CreateFix2.instance.list[8]);
                    List_FirstClick[0].DOLocalMoveZ(+.75f, SpeedDisplayObject);
                    click_Count++;
                    TapTutorials2.instance._1_();
                }
                //Check bug
                else if (click_Count == 1 && ray.collider.CompareTag("Empty"))
                {
                    AudioManager.instance.PlaySound(AudioManager.instance.SoundMove[1], 1);
                    //List_SecondClick = new List<Transform>();
                    List_SecondClick.Add(CreateFix2.instance.list[2]);

                    StartCoroutine(MoveOb());
                    List_SecondClick[0].DOLocalMoveZ(0, SpeedDisplayObject);
                    click_Count++;
                    TapTutorials2.instance._2_();
                }
                if (click_Count == 2 && !ray.collider.CompareTag("Empty"))
                {
                    AudioManager.instance.PlaySound(AudioManager.instance.SoundMove[0], 1);
                    List_FirstClick = new List<Transform>();
                    List_FirstClick.Add(CreateFix2.instance.list[14]);

                    List_FirstClick[0].DOLocalMoveZ(+.75f, SpeedDisplayObject);
                    click_Count++;
                    TapTutorials2.instance._3_();
                }
                if (click_Count == 3 && ray.collider.CompareTag("Empty"))
                {
                    AudioManager.instance.PlaySound(AudioManager.instance.SoundMove[1], 1);
                    List_SecondClick = new List<Transform>();
                    List_SecondClick.Add(CreateFix2.instance.list[2]);

                    StartCoroutine(MoveOb());
                    List_SecondClick[0].DOLocalMoveZ(0, SpeedDisplayObject);
                    click_Count++;
                    TapTutorials2.instance._4_();
                }
                //
                if (click_Count == 4 && !ray.collider.CompareTag("Empty"))
                {
                    AudioManager.instance.PlaySound(AudioManager.instance.SoundMove[0], 1);
                    List_FirstClick = new List<Transform>();
                    List_FirstClick.Add(CreateFix2.instance.list[9]);

                    List_FirstClick[0].DOLocalMoveZ(+.75f, SpeedDisplayObject);
                    click_Count++;
                    TapTutorials2.instance._5_();
                }
                if (click_Count == 5 && ray.collider.CompareTag("Empty"))
                {
                    AudioManager.instance.PlaySound(AudioManager.instance.SoundMove[1], 1);
                    List_SecondClick = new List<Transform>();
                    List_SecondClick.Add(CreateFix2.instance.list[2]);
                    StartCoroutine(MoveOb());
                    List_SecondClick[0].DOLocalMoveZ(0, SpeedDisplayObject);
                    click_Count++;
                    TapTutorials2.instance._6_();
                }
                if (click_Count == 6 && !ray.collider.CompareTag("Empty"))
                {
                    AudioManager.instance.PlaySound(AudioManager.instance.SoundMove[0], 1);
                    List_FirstClick = new List<Transform>();
                    List_FirstClick.Add(CreateFix2.instance.list[10]);
                    List_FirstClick[0].DOLocalMoveZ(+.75f, SpeedDisplayObject);
                    click_Count++;
                    TapTutorials2.instance._7_();
                }
                if (click_Count == 7 && ray.collider.CompareTag("Empty"))
                {
                    AudioManager.instance.PlaySound(AudioManager.instance.SoundMove[1], 1);
                    List_SecondClick = new List<Transform>();
                    List_SecondClick.Add(CreateFix2.instance.list[5]);
                    StartCoroutine(MoveOb());
                    List_SecondClick[0].DOLocalMoveZ(0, SpeedDisplayObject);
                    click_Count++;
                    TapTutorials2.instance._8_();
                }
                //
                if (click_Count == 8 && !ray.collider.CompareTag("Empty"))
                {
                    AudioManager.instance.PlaySound(AudioManager.instance.SoundMove[0], 1);
                    List_FirstClick = new List<Transform>();
                    List_FirstClick.Add(CreateFix2.instance.list[16]);
                    List_FirstClick[0].DOMoveY(List_FirstClick[0].position.y + .25f, SpeedDisplayObject);
                    click_Count++;
                    TapTutorials2.instance._9_();
                }
                if (click_Count == 9 && ray.collider.CompareTag("Empty"))
                {
                    AudioManager.instance.PlaySound(AudioManager.instance.SoundMove[1], 1);
                    List_SecondClick = new List<Transform>();
                    List_SecondClick.Add(CreateFix2.instance.list[2]);
                    StartCoroutine(MoveOb());
                    List_SecondClick[0].DOMoveY(0, SpeedDisplayObject);
                    click_Count++;
                    TapTutorials2.instance._10_();
                }

                if (click_Count == 10 && !ray.collider.CompareTag("Empty"))
                {
                    AudioManager.instance.PlaySound(AudioManager.instance.SoundMove[0], 1);
                    List_FirstClick = new List<Transform>();
                    List_FirstClick.Add(CreateFix2.instance.list[17]);
                    List_FirstClick[0].DOMoveY(List_FirstClick[0].position.y + .25f, SpeedDisplayObject);
                    click_Count++;
                    TapTutorials2.instance._11_();
                }
                if (click_Count == 11 && ray.collider.CompareTag("Empty"))
                {
                    AudioManager.instance.PlaySound(AudioManager.instance.SoundMove[1], 1);
                    List_SecondClick = new List<Transform>();
                    List_SecondClick.Add(CreateFix2.instance.list[5]);
                    StartCoroutine(MoveOb());
                    List_SecondClick[0].DOMoveY(0, SpeedDisplayObject);
                    click_Count++;
                    TapTutorials2.instance._12_();
                }

                if (click_Count == 12 && !ray.collider.CompareTag("Empty"))
                {
                    AudioManager.instance.PlaySound(AudioManager.instance.SoundMove[0], 1);
                    List_FirstClick = new List<Transform>();
                    List_FirstClick.Add(CreateFix2.instance.list[15]);
                    List_FirstClick[0].DOMoveY(List_FirstClick[0].position.y + .25f, SpeedDisplayObject);
                    click_Count++;
                    TapTutorials2.instance._13_();
                }
                if (click_Count == 13 && ray.collider.CompareTag("Empty"))
                {
                    AudioManager.instance.PlaySound(AudioManager.instance.SoundMove[1], 1);
                    List_SecondClick = new List<Transform>();
                    List_SecondClick.Add(CreateFix2.instance.list[11]);
                    StartCoroutine(MoveOb());
                    List_SecondClick[0].DOMoveY(0, SpeedDisplayObject);
                    click_Count++;
                    UI_Manager.instance.winner.Next_Level.SetActive(true);
                    UI_Manager.instance.timeplay.isStart = false;
                    UI_Manager.instance.FireWin1.Play();
                    UI_Manager.instance.FireWin2.Play();
                    TapTutorials2.instance.HandTutorial.SetActive(false);
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
            List_FirstClick[0].rotation = List_SecondClick[0].rotation;
            yield return new WaitForSeconds(.3f);
        }
    }
}
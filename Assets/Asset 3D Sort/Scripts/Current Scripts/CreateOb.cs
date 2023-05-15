using DG.Tweening;
using Lean.Pool;
using System;
using System.Collections.Generic;
using System.Linq;

using UnityEngine;
using Random = UnityEngine.Random;

public class CreateOb : MonoBehaviour
{
    [SerializeField] public List<Transform> GridCellPrefabs;
    private int Height = 1;
    private int Width = 3;
    public Transform[,] GridCells;
    public NodeObject[,] NodeObjects;
    public List<Transform> list = new List<Transform>();
    private List<Transform> list_Obstacle = new List<Transform>();
    private int count_Clone = 0;
    private Transform Obstacle1;
    private int NumberOverload;
    private Transform ExSample;
    public static CreateOb instance { get; private set; }

    //public int txt;
    private Transform positionCreate;

    private Transform positionCreate1;

    [Header("So cap 3 goi ý")]
    public List<int> result = new List<int>();

    [Space(5)]
    [Header("Nhap so cap 3 cua enemy trong này")]
    [SerializeField] private int EmptyCount = 2;

    [SerializeField] private int Butterfly;

    [SerializeField] private int Dino;
    [SerializeField] private int Dog;
    [SerializeField] private int Frog;
    [SerializeField] private int Hamstor0;
    [SerializeField] private int Hamstor1;
    [SerializeField] private int Whale0;
    [SerializeField] private int Whale1;

    [Header("Behind 31")]
    [Space(5)]
    [SerializeField] private int Armadillo_A;

    [SerializeField] private int Chibi_Cat_02;
    [SerializeField] private int DragonSD_29;
    [SerializeField] private int DragonSD_32;
    [SerializeField] private int Example09;
    [SerializeField] private int Puffe_B;
    [SerializeField] private int Rabby_Young_White;
    [SerializeField] private int Redpanda_A;
    [SerializeField] private int Sloth_A;
    [SerializeField] private int Pangolin_A;
    [SerializeField] private int DragonSD_13;
    [SerializeField] private int DragonSD_23;
    [SerializeField] private int DragonSD_26;
    [SerializeField] public List<GameObject> ParentPosition;
    private int a, b;

    //public List<GameObject> RootRotation;
    private int countList = 0;

    private List<int> list_EX;

    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
        ParentPosition = GameObject.FindGameObjectsWithTag("Spawn").ToList();
        list_EX = new List<int>(ReturnSumNumbers());
        CreateGrid();
        QualitySettings.vSyncCount = 0;
        Application.targetFrameRate = 60;
        CheckMapCreate();
    }

    private void Update()
    {
    }

    private void CreateGrid()
    {
        NodeObjects = new NodeObject[Width, Height];
        for (int pa = 0; pa < ParentPosition.Count; pa++)
        {
            for (int i = 0; i < Height; i++)
            {
                for (int j = 0; j < Width; j++)
                {
                    CreateObject(j, i, pa, countList);
                    list.Add(NodeObjects[j, i].obj);
                    countList++;

                    #region Dùng trong m?ng 2 chi?u

                    ////////////////////////////////////////////////////////////////////
                    /*for (int a = 0; a < GridCellPrefabs.Count; a++)
                    {
                        count_Clone = list_Obstacle.Where(x => x.tag.Equals(GridCellPrefabs[a].tag)).Count();
                        if (count_Clone == EmptyCount * 3 && GridCellPrefabs[a].tag == "Empty")
                        {
                            GridCellPrefabs.RemoveAt(a);
                        }
                        //t?o 1 list nh?p th?ng vào ?? check luôn cho nhanh ko c?n cái khác :v
                        else if (count_Clone == Butterfly * 3 && GridCellPrefabs[a].tag == "Butterfly")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                        else if (count_Clone == Dino * 3 && GridCellPrefabs[a].tag == "Dino")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                        else if (count_Clone == Dog * 3 && GridCellPrefabs[a].tag == "Dog")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                        else if (count_Clone == Frog * 3 && GridCellPrefabs[a].tag == "Frog")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                        else if (count_Clone == Hamstor0 * 3 && GridCellPrefabs[a].tag == "Hamstor0")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                        else if (count_Clone == Hamstor1 * 3 && GridCellPrefabs[a].tag == "Hamstor1")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                    }*/

                    #endregion Dùng trong m?ng 2 chi?u

                    #region Dùng trong danh sách

                    for (int a = 0; a < GridCellPrefabs.Count; a++)
                    {
                        count_Clone = list.Where(x => x.tag.Equals(GridCellPrefabs[a].tag)).Count();
                        //Debug.Log(count_Clone);
                        if (count_Clone == EmptyCount && GridCellPrefabs[a].tag == "Empty")
                        {
                            GridCellPrefabs.RemoveAt(a);
                        }
                        //t?o 1 list nh?p th?ng vào ?? check luôn cho nhanh ko c?n cái khác :v
                        else if (count_Clone == Butterfly && GridCellPrefabs[a].tag == "Butterfly")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                        else if (count_Clone == Dino && GridCellPrefabs[a].tag == "Dino")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                        else if (count_Clone == Dog && GridCellPrefabs[a].tag == "Dog")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                        else if (count_Clone == Frog && GridCellPrefabs[a].tag == "Frog")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                        else if (count_Clone == Hamstor0 && GridCellPrefabs[a].tag == "Hamstor0")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                        else if (count_Clone == Hamstor1 && GridCellPrefabs[a].tag == "Hamstor1")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                        else if (count_Clone == Whale0 && GridCellPrefabs[a].tag == "Whale0")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                        else if (count_Clone == Whale1 && GridCellPrefabs[a].tag == "Whale1")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                        else if (count_Clone == Armadillo_A && GridCellPrefabs[a].tag == "Armadillo_A")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                        else if (count_Clone == Chibi_Cat_02 && GridCellPrefabs[a].tag == "Chibi_Cat_02")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                        else if (count_Clone == DragonSD_29 && GridCellPrefabs[a].tag == "DragonSD_29")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                        else if (count_Clone == DragonSD_32 && GridCellPrefabs[a].tag == "DragonSD_32")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                        else if (count_Clone == Example09 && GridCellPrefabs[a].tag == "Example09")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                        else if (count_Clone == Puffe_B && GridCellPrefabs[a].tag == "Puffe_B")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                        else if (count_Clone == Rabby_Young_White && GridCellPrefabs[a].tag == "Rabby_Young_White")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                        else if (count_Clone == Redpanda_A && GridCellPrefabs[a].tag == "Redpanda_A")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                        else if (count_Clone == Sloth_A && GridCellPrefabs[a].tag == "Sloth_A")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                        else if (count_Clone == Pangolin_A && GridCellPrefabs[a].tag == "Pangolin_A")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                        else if (count_Clone == DragonSD_26 && GridCellPrefabs[a].tag == "DragonSD_26")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                        else if (count_Clone == DragonSD_23 && GridCellPrefabs[a].tag == "DragonSD_23")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                        else if (count_Clone == DragonSD_13 && GridCellPrefabs[a].tag == "DragonSD_13")
                        {
                            GridCellPrefabs.Remove(GridCellPrefabs[a]);
                        }
                    }
                    //count_Clone = list_Obstacle.Where(x => x.tag.Equals(GridCellPrefabs[a].tag)).Count();

                    #endregion Dùng trong danh sách
                }
            }
        }
    }

    private void CreateObject(int i, int j, int count, int countlist)
    {
        int random;
        random = Random.Range(0, GridCellPrefabs.Count);
        Vector3 worldPosition = new Vector3(i, j, 0);
        Transform obj = LeanPool.Spawn(GridCellPrefabs[random], worldPosition, Quaternion.identity, ParentPosition[count].transform);
        obj.name = (countlist).ToString();
        obj.localRotation = Quaternion.Euler(new Vector3(0, 0, 0));
        obj.localPosition = new Vector3(i, j, 0);
        NodeObjects[i, j] = new NodeObject(true, worldPosition, obj);
        list_Obstacle.Add(NodeObjects[i, j].obj);
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

    public void CheckWin(Transform first, Transform second)
    {
        int a = list.IndexOf(first);
        int b = list.IndexOf(second);
        Obstacle1 = list[a];
        list[a] = list[b];
        list[b] = Obstacle1;
    }

    private void CheckMapCreate()
    {
        for (int i = 0; i < CreateOb.instance.list.Count; i++)
        {
            if (i % 3 == 1)
            {
                if (CreateOb.instance.list[i].CompareTag(CreateOb.instance.list[i - 1].tag) && CreateOb.instance.list[i].CompareTag(CreateOb.instance.list[i + 1].tag))
                {
                    for (int j = 0; j < CreateOb.instance.list.Count; j++)
                    {
                        if (j % 3 == 1)
                        {
                            if ((!CreateOb.instance.list[j].CompareTag(CreateOb.instance.list[i].tag) && !CreateOb.instance.list[j + 1].CompareTag(CreateOb.instance.list[i].tag)) || (!CreateOb.instance.list[j].CompareTag(CreateOb.instance.list[i].tag) && !CreateOb.instance.list[j - 1].CompareTag(CreateOb.instance.list[i].tag)))
                            {
                                Vector3 X;
                                X = CreateOb.instance.list[j].position;
                                CreateOb.instance.list[j].position = CreateOb.instance.list[i].position;
                                CreateOb.instance.list[i].position = X;
                                CheckWin(CreateOb.instance.list[j], CreateOb.instance.list[i]);
                                break;
                            }
                        }
                    }
                }
            }
        }
    }

    public List<int> ReturnSumNumbers()
    {
        int Multi = ParentPosition.Count * 3;
        int n = GridCellPrefabs.Count;
        if (ParentPosition.Count != 0)
        {
            NumberOverload = Multi % n;
            if (Multi % n == 0)
            {
                for (int i = 0; i < n; i++)
                {
                    result.Add((Multi / n));
                }
                //Debug.Log("%n == 0");
                //Debug.Log(Multi + "--" + n);
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    result.Add((Multi / n));
                }
                for (int i = 0; i < NumberOverload; i++)
                {
                    result[Random.Range(0, n)] += NumberOverload;
                }
                Debug.Log("%n ==1");
            }
        }
        return result;//list này trả về số lượng phần tử = n-1
    }
}

public class NodeObject
{
    public bool isPlaceable;
    public Vector3 cellPosition;
    public Transform obj;

    public NodeObject(bool isplace, Vector3 cellposition, Transform obj)
    {
        this.isPlaceable = isplace;
        this.cellPosition = cellposition;
        this.obj = obj;
    }
}
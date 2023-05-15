using Lean.Pool;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using Random = UnityEngine.Random;

public class PlaceObjectInGrid : MonoBehaviour
{
    [SerializeField] public List<Transform> GridCellPrefabs;
    [SerializeField] public int Height;
    [SerializeField] public int Width;
    public SaveData SaveData;
    public Transform[,] GridCells;
    public Node[,] nodes;
    public List<Transform> list = new List<Transform>();
    private List<Transform> list_Obstacle = new List<Transform>();
    private int count_Clone = 0;
    private Transform Obstacle1;
    public static PlaceObjectInGrid instance { get; private set; }
    public int EmptyCount = 2;
    public int txt;

    [Header("Số cặp 3 gợi ý")]
    public List<int> result = new List<int>();

    [Space(5)]
    [Header("Nhập số cặp 3 của enemy trong này")]
    [SerializeField] private int Boar;

    [SerializeField] private int Buffalo;
    [SerializeField] private int Camel_A;
    [SerializeField] private int Flamingo;
    [SerializeField] private int Gorilla;
    [SerializeField] private int Monkey;

    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
        CreateGrid();
    }

    // Update is called once per frame
    private void Update()
    {
    }

    private void CreateGrid()
    {
        nodes = new Node[Width, Height];
        List<int> list_EX = new List<int>(ReturnSumNumbers());
        list_EX.Insert(0, 0);
        //list_EX.ForEach(a => Debug.Log(a));
        for (int i = 0; i < Width; i++)
        {
            for (int j = 0; j < Height; j++)
            {
                CreateObject(i, j);
                ////////////////////////////////////////////////////////////////////
                for (int a = 0; a < GridCellPrefabs.Count; a++)
                {
                    count_Clone = list_Obstacle.Where(x => x.tag.Equals(GridCellPrefabs[a].tag)).Count();
                    if (count_Clone == EmptyCount * 3 && GridCellPrefabs[a].tag == "Empty")
                    {
                        GridCellPrefabs.RemoveAt(a);
                    }
                    //tạo 1 list nhập thẳng vào để check luôn cho nhanh ko cần cái khác :v
                    else if (count_Clone == Boar * 3 && GridCellPrefabs[a].tag == "Boar")
                    {
                        GridCellPrefabs.Remove(GridCellPrefabs[a]);
                    }
                    else if (count_Clone == Buffalo * 3 && GridCellPrefabs[a].tag == "Buffalo")
                    {
                        GridCellPrefabs.Remove(GridCellPrefabs[a]);
                    }
                    else if (count_Clone == Camel_A * 3 && GridCellPrefabs[a].tag == "Camel_A")
                    {
                        GridCellPrefabs.Remove(GridCellPrefabs[a]);
                    }
                    else if (count_Clone == EmptyCount * 3 && GridCellPrefabs[a].tag == "Flamingo")
                    {
                        GridCellPrefabs.Remove(GridCellPrefabs[a]);
                    }
                    else if (count_Clone == EmptyCount * 3 && GridCellPrefabs[a].tag == "Gorilla")
                    {
                        GridCellPrefabs.Remove(GridCellPrefabs[a]);
                    }
                    else if (count_Clone == EmptyCount * 3 && GridCellPrefabs[a].tag == "Monkey")
                    {
                        GridCellPrefabs.Remove(GridCellPrefabs[a]);
                    }
                }
            }
        }
        for (int i = 0; i < Height; i++)
        {
            for (int j = 0; j < Width; j++)
            {
                if (nodes[j, i] != null)
                {
                    list.Add(nodes[j, i].obj);
                }
            }
        }
    }

    private void CreateObject(int i, int j)
    {
        int random;
        random = Random.Range(0, GridCellPrefabs.Count);
        Vector3 worldPosition = new Vector3(i, j, 0);
        Transform obj = LeanPool.Spawn(GridCellPrefabs[random], worldPosition, Quaternion.identity);
        obj.name = (i + ":" + j).ToString();
        obj.rotation = Quaternion.Euler(new Vector3(0, 120, 0));
        nodes[i, j] = new Node(true, worldPosition, obj);
        list_Obstacle.Add(nodes[i, j].obj);
    }

    public List<int> ReturnSumNumbers()
    {
        int Multi = ((Width * Height) / 3) - EmptyCount;
        int n = GridCellPrefabs.Count - 1;
        int NumberOverload = Multi % n;
        if (Multi % n == 0)//có vấn đề ở đây
        {
            //vòng lặp để nạp vào số chia hết đó
            for (int i = 0; i < n; i++)
            {
                result.Add((Multi / n) * 3);
            }
        }
        else//nếu chia dư được bao nhiêu thì random lại cho tất cả các thành phần khác
        {
            for (int i = 0; i < n; i++)
            {
                result.Add((Multi / n) * 3);
            }
            for (int i = 0; i < NumberOverload; i++)
            {
                result[Random.Range(0, n)] += 3;
            }
            Debug.Log("%n ==1");
        }
        return result;//list này trả về số lượng phần tử = n-1
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

    public void CheckWin(Vector3 first, Vector3 second)
    {
        Obstacle1 = nodes[(int)first.x, (int)first.y].obj;
        nodes[(int)first.x, (int)first.y].obj = nodes[(int)second.x, (int)second.y].obj;
        nodes[(int)second.x, (int)second.y].obj = Obstacle1;
        list = new List<Transform>();
        for (int i = 0; i < Height; i++)
        {
            for (int j = 0; j < Width; j++)
            {
                list.Add(nodes[j, i].obj);
            }
        }
    }
}

public class Node
{
    public bool isPlaceable;
    public Vector3 cellPosition;
    public Transform obj;

    public Node(bool isplace, Vector3 cellposition, Transform obj)
    {
        this.isPlaceable = isplace;
        this.cellPosition = cellposition;
        this.obj = obj;
    }
}
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StartGame : MonoBehaviour
{
    public static StartGame instance { get; private set; }
    public SaveData levelData;
    public SaveData Music_;
    public SaveData Vibrate;
    [SerializeField] private AudioSource audio;
    public int level;
    public int BonusAnimals;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(this);
        }
        else
        {
            Destroy(gameObject);
        }
        level = PlayerPrefs.GetInt("IndexLevel", level);
        BonusAnimals = PlayerPrefs.GetInt("BonusAnimals", BonusAnimals);
        UI_Manager.instance.CheckMusic.isOn = PlayerPrefs.GetInt("IsMusic") == 1 ? true : false;
        UI_Manager.instance.CheckVibrate.isOn = PlayerPrefs.GetInt("IsVibrate") == 1 ? true : false;
    }

    private void Start()
    {
        SceneManager.LoadScene("Home");
        Music();
    }

    public void RestartGame()
    {
        SceneManager.LoadScene(level);
    }

    private void Music()
    {
        audio.Play();
        audio.volume = PlayerPrefs.GetInt("IsMusic");
    }

#if UNITY_EDITOR

    [ContextMenu("SetLevel")]
    private void SetNameLevelData()
    {
        for (int i = 0; i < levelData.list_data.Count; i++)
        {
            levelData.list_data[i].name = "Level" + i;
            if (i <= 50)
            {
                levelData.list_data[i].Time = 120;
                levelData.list_data[i].Count = 39;
            }
            else if (i > 50 && i <= 87)
            {
                levelData.list_data[i].Time = 250;
                levelData.list_data[i].Count = 60;
            }
            else if (i > 87 && i < 100)
            {
                levelData.list_data[i].Time = 350;
                levelData.list_data[i].Count = 70;
            }
            else if (i >= 100 & i < 201)
            {
                levelData.list_data[i].Time = 560;
                levelData.list_data[i].Count = 100;
            }
        }
        AssetDatabase.SaveAssets();
        EditorUtility.FocusProjectWindow();
    }

#endif
}
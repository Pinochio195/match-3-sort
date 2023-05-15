using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Setting : MonoBehaviour
{
    [SerializeField] private Slider SliderMusic;
    [SerializeField] private AudioSource audio;

    // Start is called before the first frame update
    private void Start()
    {
        if (!PlayerPrefs.HasKey("VolumeMusic"))
        {
            PlayerPrefs.SetFloat("VolumeMusic", 1);
            Load();
        }
        else
        {
            Load();
        }
    }

    // Update is called once per frame
    private void Update()
    {
    }

    public void ChangeVolume()
    {
        audio.volume = SliderMusic.value;
        Save();
    }

    private void Load()
    {
        SliderMusic.value = PlayerPrefs.GetFloat("VolumeMusic");
    }

    private void Save()
    {
        PlayerPrefs.SetFloat("VolumeMusic", SliderMusic.value);
    }
}
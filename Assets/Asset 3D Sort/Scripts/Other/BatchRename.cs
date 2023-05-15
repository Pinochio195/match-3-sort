#if UNITY_EDITOR

using UnityEngine;
using UnityEditor;
using System.Collections;

public class BatchRename : MonoBehaviour
{
    [ContextMenu("RenameLevel")]
    public void RenameLevel()
    {
        for (int i = 10; i < 32; i++)
        {
            AssetDatabase.RenameAsset("Assets/Asset 3D Sort/Scenes/Before 31/Level_" + i + ".unity", "Level" + i + ".unity");
        }
        AssetDatabase.SaveAssets();
        EditorUtility.FocusProjectWindow();
    }
}

#endif
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class User : MonoBehaviour
{
    private Renderer meshRenderer;
    private Material material;
    private void Start()
    {
        meshRenderer = GetComponent<Renderer>();
        material = GameObject.Find("Canvas").GetComponent<AgoraEngine>().Material;
        meshRenderer.sharedMaterial = material;
    }
}

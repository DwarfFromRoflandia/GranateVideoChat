using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class LinkGranate : MonoBehaviour, IPointerClickHandler
{
    public void OnPointerClick(PointerEventData eventData) => Application.OpenURL("https://granate.space/");
}

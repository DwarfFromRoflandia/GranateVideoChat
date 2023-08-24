using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;
#if (UNITY_2018_3_OR_NEWER)
using UnityEngine.Android;
#endif

public class ButtonHundler : MonoBehaviour
{
    static AgoraEngine app = null;

    private void Start()
    {
#if (UNITY_2018_3_OR_NEWER)
        if (Permission.HasUserAuthorizedPermission(Permission.Microphone)) //������ �� ���������� ������������� ��������� ��������
        {

        }
        else
        {
            Permission.RequestUserPermission(Permission.Microphone);
        }

        if (Permission.HasUserAuthorizedPermission(Permission.Camera))//������ �� ���������� ������������� ������ ��������
        {

        }
        else
        {
            Permission.RequestUserPermission(Permission.Camera);
        }
#endif
    }

    public void Click()
    {
        Debug.Log("Button Clicked" + name);

        if (name.CompareTo("JoinButton") == 0)//CompareTo() ���������� 0 � ������, ����� ��������� � �������� (ID) ��������� � �������� �������� �������, � �������� ���������� ����� Click()
        {
            //join chat
            OnJoinButtonClicked();
        }
        else if(name.CompareTo("LeaveButton") == 0)
        {
            //leave chat
            OnLeaveButtonClicked();
        }
    }

    private void OnJoinButtonClicked()
    {
        TMP_InputField inputField = GameObject.Find("ChannelName").GetComponent<TMP_InputField>();

        if (ReferenceEquals(app, null))// if app == null
        {
            app = new AgoraEngine();
            app.LoadEngine();
        }

        app.JoinChannel(inputField.text);
        SceneManager.sceneLoaded += OnSceneFinishedLoading;
        SceneManager.LoadScene("Chat", LoadSceneMode.Single);
    }

    private void OnLeaveButtonClicked()
    {
        Debug.Log("Leave button clicked");

        if (!ReferenceEquals(app, null))
        {
            app.LeaveChannel();
            app.UnLoadEngine();
            app = null;
            SceneManager.LoadScene("SampleScene", LoadSceneMode.Single);
        }
    }

    public void OnSceneFinishedLoading (Scene scene, LoadSceneMode mode) //�����, �������������� � �������� ��������� ������ (� �����������) ������ ���, ����� ����� Chat �������� ���� �������� � ������ ����� �����������
    {
        if (scene.name.CompareTo("Chat") == 0)
        {
            if (!ReferenceEquals(app, null)) //if app != null
            {
                app.OnChatSceneLoaded();
            }

            SceneManager.sceneLoaded -= OnSceneFinishedLoading;
        }
    }
}

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
        if (Permission.HasUserAuthorizedPermission(Permission.Microphone)) //запрос на разрешение использования микрофона телефона
        {

        }
        else
        {
            Permission.RequestUserPermission(Permission.Microphone);
        }

        if (Permission.HasUserAuthorizedPermission(Permission.Camera))//запрос на разрешение использования камеры телефона
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

        if (name.CompareTo("JoinButton") == 0)//CompareTo() возвращает 0 в случае, когда выражение в ковычках (ID) свопадает с нзванием игрового объекта, у которого вызывается метод Click()
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

    public void OnSceneFinishedLoading (Scene scene, LoadSceneMode mode) //метод, использующийся в качестве обратного вызова (и срабатывает) всякий раз, когда сцена Chat завершит свою загрузку и готова будет запуститься
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

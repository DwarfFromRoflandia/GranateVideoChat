using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using agora_gaming_rtc;

public class AgoraEngine : MonoBehaviour
{
    [SerializeField] private IRtcEngine RtcEngine;
    private static string appID = "479765b2de884b83b325116c72de3a78";
    public List<GameObject> UsersList = new List<GameObject>();
    public Material Material;
    public void InitializeUser(uint userID)
    {
        GameObject test = GameObject.Find(userID.ToString());
        test.AddComponent<User>();
    }
    private void SwitchUserSize()
    {
        switch (UsersList.Count)
        {
            case 1:
                UsersList[0].transform.position = new Vector3(-0.03f, 0.295f, 0f);
                UsersList[0].transform.localScale = new Vector3(0.59f, 0.2f, 0.5f);
                break;
            case 2:
                UsersList[0].transform.position = new Vector3(-0.04f, 1.48f, 0f);
                UsersList[0].transform.localScale = new Vector3(0.49f, 0.1f, 0.4f);
                UsersList[1].transform.position = new Vector3(-0.03f, -2.72f, 0f);
                UsersList[1].transform.localScale = new Vector3(0.49f, 0.1f, 0.4f);
                break;
        }
    }

    private void ChangeSizeInterlocutors(GameObject gameObject)
    {
        UsersList.Add(gameObject);
        SwitchUserSize();
    }

    public void LoadEngine() //метод дл€ инициализации пол€ RtcEngine и начала работы пакетов SDK
    {
        Debug.Log("initilizing engine");

        if (RtcEngine != null)
        {
            Debug.Log("Engine already exists. Please unload it first!");
            return;
        }

        RtcEngine = IRtcEngine.getEngine(appID); //метод getEngine() инициализирует класс IRtcEngine (вз€то и док.)
        RtcEngine.SetLogFilter(LOG_FILTER.DEBUG);
    }

    public void JoinChannel(string channelName)// метод, срабатывающий по кнопке Join в сцене чата
    {
        Debug.Log($"Joining channel {channelName}");

        if (RtcEngine == null)
        {
            Debug.Log("Engine needs to be initialized brfore joining a channel");
            return;
        }

        RtcEngine.OnUserJoined = OnUserJoined;
        RtcEngine.OnUserOffline = OnUserOffline;


        RtcEngine.EnableVideo();//вызов метода, включающий видео
        RtcEngine.EnableVideoObserver(); //метод, отправл€ющий видеоизображение непосредственно в приложение, а не в традиционное средство визуализации (вз€то из реал.)
        RtcEngine.JoinChannel(channelName, null, 0);//метод, позвол€ющий пользователю присоединитьс€ к каналу (вз€то из реал).
    }

    public void LeaveChannel()// метод, срабатывающий по кнопке Leave в сцене чата
    {
        Debug.Log("Leaving Channel");

        if (RtcEngine == null)
        {
            Debug.Log("Engine to be initialized before leaving a channel");
            return;
        }

        RtcEngine.LeaveChannel();//вызов метода, позвол€ющий пользователю покинуть канал (вз€то из реал).
        RtcEngine.DisableVideoObserver();//метод, отключающий отправку видео непосредственно в приложение (вз€то из реал).
    }

    public void UnLoadEngine()//метод, разгружающий ресурсы, используемые Agora SDK дл€ дургих операций. —рабатывает по кнопке Leave в сцене чата
    {
        Debug.Log("Unloading Agora engine");

        if (RtcEngine != null)
        {
            IRtcEngine.Destroy(); //уничтожает экземпл€р класса RtcEngine и освобождает все ресурсы, используемые Agora SDK дл€ этого экземпл€ра (вз€то и док.)
            RtcEngine = null;
        }
    }


    private void OnUserJoined(uint userID, int elapsed) //метод, создающий объект на сцене, который предназначен дл€ визуального отображени€ пользовател€ при видео звонке. ћетод вызываетс€, когда удалЄнный поток(пользователь) покидает канал св€зи
    {
        Debug.Log($"New user has joined channel with id: {userID}");

        GameObject gameObject = GameObject.CreatePrimitive(PrimitiveType.Plane);
        gameObject.name = userID.ToString();
        ChangeSizeInterlocutors(gameObject);

        VideoSurface videoSurface = gameObject.AddComponent<VideoSurface>(); //добавл€ем компонент видео дл€ созданного выше игрового объекта дл€ рендеренга видео созданного удалЄнного потока(пользовател€)
        videoSurface.SetForUser(userID); //устанавливаем видео дл€ конкретного удалЄнного потока (пользовател€) по его ID.
        videoSurface.SetEnable(true); //включаем видео вещание
        videoSurface.transform.Rotate(-90.0f, 0.0f, 0.0f);

        InitializeUser(userID);
    }

    private void OnUserOffline(uint userId, USER_OFFLINE_REASON reason)//метод, необходимый дл€ уничтожени€ в окне hierarchy объекта того удалЄнного потока (пользовател€), покинувший канал св€зи
    {
        Debug.Log($"User with id: {userId} has left the channel");

        GameObject gameObject = GameObject.Find(userId.ToString());

        if (!ReferenceEquals(gameObject, null))
        {
            Destroy(gameObject);
            UsersList.Remove(gameObject);
            SwitchUserSize();
        }
    }

    public void OnChatSceneLoaded() //вывод в лог NullReferenceExeption в случае если в окне hierarchy не был найден игровой объект, названный Cube
    {
        GameObject gameObject = GameObject.Find("Cube");

        if (ReferenceEquals(gameObject, null))
        {
            Debug.Log("Unable to find Cube game object");
            return;

        }
    }
}

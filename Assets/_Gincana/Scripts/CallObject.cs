using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class CallObject : MonoBehaviour {

    public GameObject objeto;
    public bool enable;

    public void ActiveObject()
    {
        PlayerPrefs.DeleteKey("ExitGincana");
        if (SceneManager.GetSceneByName("Zero").isLoaded)
        {
            if (PlayerPrefs.GetInt("FirstTime") == 0)
            {
                if (enable)
                {
                    Invoke("CallEnable", 2);
                }
                else
                {
                    Invoke("Call", 2);
                }

                PlayerPrefs.SetInt("FirstTime", 1);
            }
            else
            {
                Invoke("CallChangeScene", 2.3f);
            }
        }
        else
        {

            if (enable)
            {
                Invoke("CallEnable", 2);
            }
            else
            {
                Invoke("Call", 2);
            }
        }
    }
    void Call()
    {
        objeto.SetActive(false);
    }

    void CallEnable()
    {
        objeto.SetActive(true);
    }

    void CallChangeScene()
    {
        LoadSceneComponent.LoadMyScene(null, null);
        //GetComponent<StartGame>().load.SetActive(true);
        GetComponent<StartGame>().ChangeScene("Gincana");
    }

   

}

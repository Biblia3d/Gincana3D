using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MaisTemasButton : MonoBehaviour
{
    public bool conected;
    GameObject obj;

    // Use this for initialization
    void Start()
    {
        obj = GameObject.FindWithTag("Baus");
        
    }

    // Update is called once per frame
    void Update()
    {

    }


    public void Zerar()
    {

        if (obj.GetComponent<Question>().conected)
        {
            PlayerPrefs.SetInt("StartDownload", 1);
            GameObject.Find("Baus").GetComponent<Question>().timeToFinish = PlayerPrefs.GetFloat("timeToFinish") + Time.time;
            PlayerPrefs.SetInt("TimerContinue", 0);
            PlayerPrefs.SetInt("Begin", 1);
            PlayerPrefs.SetInt("ContadorBaus", 0);
            for (int i = 0; i < 10; i++)
            {
                PlayerPrefs.SetInt(i + 1.ToString(), 0);
            }

            SceneManager.LoadScene("Gincana");
        }
        else
        {
            obj.GetComponent<Question>().semInternet.SetActive(true);
        }

    }

}

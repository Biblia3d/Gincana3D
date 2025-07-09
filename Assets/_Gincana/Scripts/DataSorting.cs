using UnityEngine;
//using UnityEditor;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine.UI;

public class DataSorting : MonoBehaviour
{
    public string url;
    public string allText;
    public Question quiz;
    public List<string> eachLine;
    int contTema = 0;
    public bool isTema;
    public List<string> listaTema;
    public List<string> perguntas;
    public string temp = null;
    public ArrayList listas = new ArrayList();
    int contForeach = 0;
    //public List<string>;
    

    void ReadData()
    {
        Debug.Log(Application.persistentDataPath);

    }


    void OnEnable()
    {

        StartCoroutine(DownloadData());
    }

    IEnumerator DownloadData()
    {
        WWW www = new WWW(url);
        yield return new WaitUntil(() => www.isDone);
        if (www.isDone)
        {
            allText = www.text;
            eachLine = new List<string>();
            eachLine.AddRange(allText.Split("\n"[0]));
            if(eachLine.Count>0)
            StartCoroutine(Generate());
        }
        //quiz = new Question[eachLine.Count / 7];
    }

    IEnumerator Generate()
    {
        foreach (string item in eachLine)
        {
            contForeach++;
            if (item.Contains("<tema>"))
            {
                isTema = true;
                if (temp != null&&temp != "")
                {
                    perguntas.AddRange(temp.Split("\n"[0]));
                    listas.Add(perguntas);
                    temp = null;
                }
                
            }
            else if (item.Contains("<tema/>"))
            {
                isTema = false;
                temp = null;
                contTema++;
            }
            else
            {
                if (isTema)
                {
                    listaTema.Add(item);
                }
                else
                {
                    if (temp != null)
                    {
                        if(item != "\n")
                        temp += "\n" + item;
                    }
                    else
                    {
                        print("Temp NULL"+contForeach);
                        temp = item;
                    }
                }
            }
            
        }
        perguntas.AddRange(temp.Split("\n"[0]));
        listas.Add(perguntas);
        temp = null;

        if (listaTema != null)
            for (int i = 0; i < listaTema.Count; i++)
            {
                print(listaTema[i]);
            }
        yield return 0;
    }

    void Awake()
    {

        ReadData();
    }


    void Update()
    {

    }

    public void GetTema()
    {

        StartCoroutine(DownloadData());
    }

    public void Unpause()
    {
        Time.timeScale = 1;
    }
}

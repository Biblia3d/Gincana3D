using UnityEngine;
using System.Collections;
using System;
using System.IO;

public class LineReader : MonoBehaviour
{
    protected FileInfo theSourceFile = null;
    protected StreamReader reader = null;
    protected string text = " "; // permite que a primeira linha seja lida
    public string url;
    string fileName;

    void Start()
    {
        theSourceFile = new FileInfo("nome_do_arquivo.txt");
        reader = theSourceFile.OpenText();
    }

    void Update()
    {
        if (text != null)
        {
            text = reader.ReadLine();
            //Console.WriteLine(text);
            print(text);
        }
    }
    string file;
    IEnumerator DownloadData()
    {
        WWW www = new WWW(url);
        yield return www;
        // Check www is right
        this.file = www.text;
        File.WriteAllText(Application.persistentDataPath + "/" + fileName, this.file);
    }
}
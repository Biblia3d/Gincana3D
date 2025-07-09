using UnityEngine;
using System.Collections;
using System.Net;
using System;
using System.ComponentModel;

public class txttest : MonoBehaviour
{


    private void btnDownload_Click(object sender, EventArgs e)
    {
        WebClient webClient = new WebClient();
        webClient.DownloadFileCompleted += new AsyncCompletedEventHandler(Completo);
        webClient.DownloadProgressChanged += new DownloadProgressChangedEventHandler(ProgressoFeito);
        webClient.DownloadFileAsync(new Uri("http://freetexthost.com/wldkcoiy6j"), Application.persistentDataPath+ @"\arquivo.txt");
    }

    private void ProgressoFeito(object sender, DownloadProgressChangedEventArgs e)
    {
        //progressBar.Value = e.ProgressPercentage;
    }

    private void Completo(object sender, AsyncCompletedEventArgs e)
    {
        print("Download efetuado!");
    }
}
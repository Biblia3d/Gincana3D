using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;
using UnityEngine.UI;

public class Publicidade : MonoBehaviour
{

    public string url;
    public Image img;
    public Sprite[] sprite;
    public Text texto, title, txtButton;
    
    // Use this for initialization
    void Start()
    {
        if (PlayerPrefs.GetInt("IndicePublicidade") >= sprite.Length)
        {
            PlayerPrefs.SetInt("IndicePublicidade", 0);
        }
        img.sprite = sprite[PlayerPrefs.GetInt("IndicePublicidade")];

        switch (PlayerPrefs.GetInt("IndicePublicidade"))
        {
            case 0:
                title.text = "Patrocinador FUCTURA Tecnologia.";
                texto.text = "A Fuctura Recife Apoia nosso projeto e colabora para que possamos fazer o melhor para o Reino de Deus.";
                url = "";
                txtButton.text = "Ok";
                PlayerPrefs.SetInt("IndicePublicidade", PlayerPrefs.GetInt("IndicePublicidade")+1);
                break;
            case 1:
                title.text = "Jogo Davi x Golias";
                texto.text = "O jogo Davi x Golias ensina a história,  tem gráficos incríveis, e envia um certificado de conclusão por email. Para jovens a partir de 6 anos.";
                url = "com.Fuctura.Biblia3D.DaviXGolias";
                txtButton.text = "Instalar";
                PlayerPrefs.SetInt("IndicePublicidade", PlayerPrefs.GetInt("IndicePublicidade") + 1);
                break;
            case 2:
                title.text = "App Bíblia 3D com cartões e revista";
                texto.text = "Conheça a única revista em realidade aumentada que oferece um jogo por página e ensina toda a história do rei Davi.";
                url = "com.Fuctura.Biblia3D";
                txtButton.text = "Instalar";
                PlayerPrefs.SetInt("IndicePublicidade", PlayerPrefs.GetInt("IndicePublicidade") + 1);
                break;
            case 3:
                title.text = "Davi Cards - Bíblia 3D";
                texto.text = "Colecione os cartões dos personagens bíblicos em realidade aumentada. Batalhas incríveis! Peça gratuitamente pelo nosso site www.biblia3d.com.br";
                url = "com.Fuctura.BatalhasDeDaviCard";
                txtButton.text = "Instalar";
                PlayerPrefs.SetInt("IndicePublicidade", PlayerPrefs.GetInt("IndicePublicidade") + 1);
                break;
            case 4:
                title.text = "Pergaminhos Sagrados - Quiz de perguntas";
                texto.text = "Jogo é desenvolvido por alunos do curso de games da Bíblia 3D. Baixe agora!";
                url = "com.Fuctura.Biblia3d.Pergaminhos";
                txtButton.text = "Instalar";
                PlayerPrefs.SetInt("IndicePublicidade", PlayerPrefs.GetInt("IndicePublicidade") + 1);
                break;
            case 5:
                title.text = "Curso de Jogos mobile cristão";
                texto.text = "Leve para sua igreja o único curso que ensina a fazer jogos mobile cristão a jovens a partir de 12 anos.";
                url = "http://www.biblia3d.com.br";
                txtButton.text = "Acessar";
                PlayerPrefs.SetInt("IndicePublicidade", PlayerPrefs.GetInt("IndicePublicidade") + 1);
                break;
            case 6:
                title.text = "Peça gratuitamente.";
                texto.text = "Peça gratuitamente os cartões em realidade aumentada. É so acessar o site www.bibli3d.com.br e solicitar os seus!";
                url = "http://www.biblia3d.com.br";
                txtButton.text = "Acessar";
                PlayerPrefs.SetInt("IndicePublicidade", PlayerPrefs.GetInt("IndicePublicidade") + 1);
                break;
            case 7:
                title.text = "Davi x Golias - Batalhas de Davi";
                texto.text = "O jogo Davi x Golias é um sucesso! Obrigado pelos mais de 100.000 downloads. Você já conhece?";
                url = "com.Fuctura.Biblia3D.DaviXGolias";
                txtButton.text = "Instalar";
                PlayerPrefs.SetInt("IndicePublicidade", PlayerPrefs.GetInt("IndicePublicidade") + 1);
                break;
            case 8:
                title.text = "Fale Conosco";
                texto.text = "Entre em contato, será um prazer conversar com você.";
                url = "";
                txtButton.text = "Ok";
                PlayerPrefs.SetInt("IndicePublicidade", PlayerPrefs.GetInt("IndicePublicidade") + 1);
                break;
        }
    }

    public void CallUrl()
    {
        if(url == "")
        {
            SceneManager.LoadScene("Zero");
        }else if (url.Contains("com.Fuctura"))
        {
            launchApp(url);
        }
        else
        {
            CallURL(url);
        }
    }

    public void CallURL(string url)
    {
        Application.OpenURL("http://" + url);
    }
    public void launchApp(string package)
    {
        if (IsAppInstalled(package))
        {
            AndroidJavaClass activityClass;
            AndroidJavaObject activity, packageManager;
            AndroidJavaObject launch;
            activityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
            activity = activityClass.GetStatic<AndroidJavaObject>("currentActivity");
            packageManager = activity.Call<AndroidJavaObject>("getPackageManager");
            launch = packageManager.Call<AndroidJavaObject>("getLaunchIntentForPackage", package);
            activity.Call("startActivity", launch);
        }
        else
        {
            Application.OpenURL("https://play.google.com/store/apps/details?id=" + package);
        }
    }

    public bool IsAppInstalled(string bundleID)
    {
        AndroidJavaClass up = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        AndroidJavaObject ca = up.GetStatic<AndroidJavaObject>("currentActivity");
        AndroidJavaObject packageManager = ca.Call<AndroidJavaObject>("getPackageManager");
        //Debug.Log(" ********LaunchOtherApp ");
        AndroidJavaObject launchIntent = null;
        //if the app is installed, no errors. Else, doesn't get past next line
        try
        {
            launchIntent = packageManager.Call<AndroidJavaObject>("getLaunchIntentForPackage", bundleID);
            //        
            //        ca.Call("startActivity",launchIntent);
        }
        catch
        {
            Debug.Log("Horrible things happened!");
        }
        if (launchIntent == null)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

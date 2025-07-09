using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Termos : MonoBehaviour {
    public Image termos;
    public Button btn;
    public Toggle check;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        Aceitar();
	}

    public void LerTermos()
    {
        Application.OpenURL("http://www.biblia3d.com.br/2018/2015/06/03/politica-privacidade/");
    }

    public void Aceitar()
    {
        if (check.isOn)
        {
            btn.interactable = true;
        }
        else
        {
            btn.interactable = false;
        }
    }

    public void AceitouTermos()
    {
        PlayerPrefs.SetInt("Termos", 1);
    }
}

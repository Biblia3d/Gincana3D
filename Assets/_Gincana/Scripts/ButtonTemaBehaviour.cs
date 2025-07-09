using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonTemaBehaviour : MonoBehaviour {
    public Text tema;
    private AddButtonTema script;
    private Question question;
    public int indice;
	// Use this for initialization
	void Start () {
        tema = GetComponentInChildren<Text>();
        
        script = GameObject.FindWithTag("Content").GetComponent<AddButtonTema>();
        question = GameObject.FindWithTag("Baus").GetComponent<Question>();
        SetTemaButtonTxt();
    }
	
	// Update is called once per frame
	void Update () {
		
	}

    void SetTemaButtonTxt()
    {
        tema.text = question.listaTema[indice];
    }

    public void StartFase()
    {
        GetComponent<PlaySoundObject>().PlaySound("Click");
        question.TemaOnline(indice);
        script.GetComponent<CallObject>().ActiveObject();
        DisableButton();
    }

    void DisableButton()
    {
        
        for (int i = 0; i < script.chld.Length; i++)
        {
            if(i!=indice)
            script.chld[i].GetComponent<Button>().interactable = false; 
        }
    }

    public void DisableCloseButton()
    {
        GameObject close = GameObject.Find("Close");
        if (close != null)
        {
            close.gameObject.SetActive(false);
        }
    }
}

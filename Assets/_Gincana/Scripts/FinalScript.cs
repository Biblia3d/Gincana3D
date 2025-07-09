using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class FinalScript : MonoBehaviour {
	//Publics
	public GameObject info;								//Parte de informaçoes onde mostra os pontos
	public Text scoreTXT,timeTXT;	//Mostra o Score (tem dois pq o texto tem uma sombra que fiz manualmente)
	public AudioSource audio;							//Onde sera tocardo o som
	public AudioClip contSound,inicioSound;							//Som do contador
	public bool cutSound;								//Faz o som nao tocar a cada update
	public int score,cont;								//Guarda a pontuaçao, Auxilia no contador
    public Button voltar;
    public bool pronto;
	// Use this for initialization
	void Start () {
		//Booleans
		cutSound = true;
		//Integers
		score = 0;
		cont=0;
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		//Faz o contador subir ate a pontuaçao do score
		if(score!=0&&cont<score){
			if(cutSound==true){
				cutSound=false;
			audio.PlayOneShot(contSound);
			}else{
				cutSound=true;
			}
			cont+=2;
			scoreTXT.text=""+cont;
            if(cont==score)
            pronto = true;
            

			//if(cont>=1000)
				//PlayGamesServices.UnlockAchievement (GincanaResources.achievement_acertou_10);
		}
		timeTXT.text=PlayerPrefs.GetString ("TimeToWin");
        //if (pronto)
        //{
        //    voltar.interactable = true;
        //}

	}

	public void Open(){
		//Ativa a tela de contagem de Pontos
		audio.PlayOneShot (inicioSound);
		info.SetActive (true);
		scoreTXT.gameObject.SetActive (true);
		Debug.Log (PlayerPrefs.GetInt ("Score"));
		score = PlayerPrefs.GetInt ("Score");
	}

    public void Jump()
    {
        cont = score-2;
    }

    public void Zerar()
    {
        score = 0;
        cont = 0;
        pronto = false;
    }
}

using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class BauCode : MonoBehaviour {
	//Publics
	private Question questions;							//A pergunta que vai conter no bau
	//Privates
	public GameObject quiz,number,question, verso;				//Tela de pergunta, Numero da pergunta, Pergunta, Verso
	public GameObject [] answer;						//Onde ficaram as respostas			
	public AudioSource audioSource;						//Onde o som sera tocado
	public AudioClip openSound,acertoSound,erroSound;							//Som do bau
	public string[] getAnswer;							//Respostas do quiz
	public float cooldown;
	
	void Start(){
		//Question
		questions=GameObject.FindWithTag("Baus").GetComponent<Question>();
		//Chama a geraçao da pergunta	
		cooldown = Time.time;
	}

	//Abre a questao
	void OpenQuestion(){
			
			PlayerPrefs.SetInt (Bau(), 1);
			PlayerPrefs.SetInt ("Open", int.Parse(Bau()));
			PlayerPrefs.SetInt ("quiz", 1);
			quiz.SetActive (true);
		Invoke ("ShowAnswers",1f);
	}

	//Fecha a questao
	public void CloseQuestion(){
		PlayerPrefs.SetInt ("quiz",0);
		quiz.SetActive (false);
		HideAnswers ();
	}

	//Diz que o bau foi acertado
	public void Acertou(){
		quiz.SetActive (false);
		PlayerPrefs.SetInt ("quiz",0);
		PlayerPrefs.SetInt (Bau(),2);
		audioSource.PlayOneShot (acertoSound);
		PlayerPrefs.SetInt ("Score",PlayerPrefs.GetInt("Score")+100);

	}

	//Diz que o bau foi errado
	public void Errou (){
		quiz.SetActive (false);
		PlayerPrefs.SetInt ("quiz",0);
		PlayerPrefs.SetInt (Bau(),3);
		audioSource.PlayOneShot (erroSound);
	}
	//Gera a questao do bau na interface
	public void GenerateQuestion(){
		Debug.Log ("question");
		number.GetComponent<Text>().text="Pergunta "+ int.Parse(Bau());
		question.GetComponent<Text>().text=questions.quiz[int.Parse(Bau()) - 1].question;
        verso.GetComponent<Text>().text = questions.quiz[int.Parse(Bau()) - 1].verso;
        getAnswer = questions.quiz[int.Parse(Bau()) -1].answer;
		for(int i = 0 ; i<answer.Length;i++){
			answer[i].GetComponent<Text>().text=getAnswer[i];
		}
	}
	//Toca o som do bau abrindo
	public void Sound(){
		audioSource.PlayOneShot (openSound);
	}

	public void ShowAnswers(){
			for (int i = 0; i<answer.Length; i++) {
			answer[i].GetComponentInParent<Button>().enabled=true;
		}
	}
	public void HideAnswers(){
		for (int i = 0; i<answer.Length; i++) {
			answer[i].GetComponentInParent<Button>().enabled=false;
		}
	}

	public string Bau() // pega o nome do objeto (baú) e retira o 0 da frente retornando uma string como numero do baú sem o zero a esquerda
	{
        int bau = int.Parse(transform.parent.name);

		return bau.ToString();
    }
}

//Redley Was Here

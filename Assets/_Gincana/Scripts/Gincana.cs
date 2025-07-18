using UnityEngine;
using System.Collections;

public class Gincana : MonoBehaviour {
	//Publics
	public GameObject restartScreen;
	public GameObject focus;
	public GameObject[] baus;					//Cria ou reseta os baus pra zero

	void Awake(){
		if (PlayerPrefs.GetInt ("Begin") == 0||!PlayerPrefs.HasKey("Begin")) {
			//Zerar ();
		} else {
			Restart ();
		}

        //Zerar();

	
	}

	//Zera todos os baus
	public void Zerar(){
		//restartScreen.SetActive (false);
		GameObject.Find ("Baus").GetComponent<Question> ().timeToFinish = PlayerPrefs.GetFloat ("timeToFinish") + Time.time;
		PlayerPrefs.SetInt("TimerContinue",0);
		PlayerPrefs.SetInt ("Begin",1);
		PlayerPrefs.SetInt("ContadorBaus",0);
		for(int i = 0;i<baus.Length;i++){
			PlayerPrefs.SetInt(int.Parse(baus[i].name).ToString(),0);
		}
	}

	public void Restart(){
		restartScreen.SetActive (true);
	}

	public void CloseFocus(){
		focus.SetActive (false);
	}
}

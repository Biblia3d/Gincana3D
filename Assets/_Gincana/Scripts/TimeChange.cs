using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class TimeChange : MonoBehaviour {
	//Publics
	public Text hoursTXT;
	public float hours;

	void Start(){
		hours = 1;
	}

	void Update(){
		//Mostra os minutos
		hoursTXT.text = "" + hours;


	}

	//Aumenta as horas
	public void AumentarHora(){
		if (hours == 1) {
			hours = 5;
		} else {
			hours+= 5;
		}
	}
	//Abaixa as horas
	public void AbaixarHora(){
		if (hours <= 5) {
			hours=1;
		}else{
			hours -= 5;
		}
	}

	//Faz o valor que voce colocou virar o tempo do jogo
	public void StartGame(){
		PlayerPrefs.SetFloat ("timeToFinish",hours*60);
	}
}

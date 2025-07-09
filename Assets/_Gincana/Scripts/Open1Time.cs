using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Open1Time : MonoBehaviour {
	public string name;

	void Awake () {
		if (PlayerPrefs.HasKey (name))
			this.gameObject.SetActive (false);
		else
			PlayerPrefs.SetInt (name,69);
	}

}

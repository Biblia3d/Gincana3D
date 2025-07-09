using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CheckSound : MonoBehaviour {

	// Use this for initialization
	void Start () {
        if (SceneManager.GetSceneByName("Gincana").isLoaded)
        {
            GetComponent<AudioSource>().Stop();
        }
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}

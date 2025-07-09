using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Moeda : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    void DisableObject()
    {
        gameObject.SetActive(false);
    }

    void Enable()
    {
        gameObject.GetComponentInParent<Gincana3DTrackableEventHandler>().enabled = true;
    }

    public void EnableMoeda()
    {
        Invoke("Enable", 4);
    }
}

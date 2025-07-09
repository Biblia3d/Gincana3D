using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Disable_GameObject : MonoBehaviour {
    public float time;
    public bool ivk = false;
	
	void OnEnable () {
        Invoke("Disable", time);
	}
	
	void Disable () {
        gameObject.SetActive(false);
	}

    private void OnDisable()
    {
        if (ivk)
            CancelInvoke("Disable");
    }
}

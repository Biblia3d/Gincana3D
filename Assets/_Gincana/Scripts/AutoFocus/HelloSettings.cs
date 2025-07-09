using UnityEngine;
using System.Collections;

public class HelloSettings : MonoBehaviour {

    public static bool check = false;

	void Start () {
        if (check)
        {
            GetComponent<Canvas>().enabled = false;
        }
	}

}

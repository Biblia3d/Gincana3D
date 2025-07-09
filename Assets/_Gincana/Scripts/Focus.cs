using UnityEngine;
using System.Collections;

public class Focus : MonoBehaviour {
	public GameObject focus;
	// Use this for initialization
	void Start () {
		focus.SetActive (true);
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	public void CloseFocus(){
		focus.SetActive (false);
	}
}

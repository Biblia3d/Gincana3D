using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ResetARCam : MonoBehaviour {
    // Use this for initialization
    public Gincana3DTrackableEventHandler moeda1, moeda3, moeda5;
    public GameObject button;
    public AudioClip clip1;
    public bool changed, changed1;
    public GameObject foco, bau;

	public void ResetCam () {

        if (gameObject.activeSelf)
        {
            gameObject.GetComponent<Vuforia.VuforiaBehaviour>().enabled = false;
            gameObject.GetComponent<Vuforia.VuforiaBehaviour>().enabled = true;
            moeda1.enabled = false;
            moeda3.enabled = false;
            moeda5.enabled = false;
            Invoke("EnableComponentTrack", 2);
        }
        
	}

    void EnableComponentTrack()
    {
        moeda1.enabled = true;
        moeda3.enabled = true;
        moeda5.enabled = true;
    }

    private void Update()
    {
        if (moeda1.isTracking || moeda3.isTracking || moeda5.isTracking)
        {
            button.GetComponent<Button>().enabled = true;
            button.GetComponent<Image>().raycastTarget = true;
            foco.SetActive(false);
            if (!changed)
            {
                //Sound_Manager.Instance.GetComponent<AudioSource>().clip = clip2;
                //Sound_Manager.Instance.GetComponent<AudioSource>().Play();
               // changed = true;
                //changed1 = false;
            }
        }
        else
        {
            button.GetComponent<Button>().enabled = false;
            button.GetComponent<Image>().raycastTarget = false;
            foco.SetActive(true);
            if (!changed1)
            {
                if (!GetComponent<AudioSource>().isPlaying&&bau.activeSelf)
                {
                    Sound_Manager.Instance.GetComponent<AudioSource>().clip = clip1;
                    Sound_Manager.Instance.GetComponent<AudioSource>().Play();
                }
                changed = false;
                changed1 = true;
            }
        }
    }

}

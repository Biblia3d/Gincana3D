using UnityEngine;
using System.Collections.Generic;
using System.Collections;

[System.Serializable]
public class Sounds{
	public string name;
	public AudioClip clip;
	[Range(0,1)]
	public float volume = 1f;
}

public class Sound_Manager : MonoBehaviour {
	public static Sound_Manager Instance;
	public List<Sounds> sounds;
	private AudioSource audioSrc;
	public List<Sounds> matchSounds;
    public GameObject bau;


	private float cooldownMatch;
	[HideInInspector]
	public int matchCount;
	

	void Awake(){
		Instance = this;
		audioSrc = GetComponent<AudioSource> ();
		cooldownMatch = Time.time;
	}

	public void PlayOneShot(string SoundName){

		for(int i = 0; i< sounds.Count ;i++){
			if(sounds[i].name == SoundName)
			{
				audioSrc.PlayOneShot(sounds[i].clip,sounds[i].volume);
				return;
			}

			Debug.LogWarning("There is no Sound Attached on Sound_Manager with the name: "+SoundName+" Please try attach or change the value. Redley Was Here");

		}

	}

	public void MatchCountZero(){
		matchCount = 0;
	}

	public void PlayMatchSound()
	{
			if (matchCount >= 5) {
				audioSrc.PlayOneShot (matchSounds [4].clip,matchSounds[4].volume);
			} else {
				audioSrc.PlayOneShot (matchSounds [matchCount].clip,matchSounds[matchCount].volume);
			}
			matchCount++;

	}

    public void PlayMusic()
    {
        if (bau.activeSelf)
        {
            GetComponent<AudioSource>().Play();
        }
    }
}

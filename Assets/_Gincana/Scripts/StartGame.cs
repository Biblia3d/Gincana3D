using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;
using UnityEngine.UI;

public class StartGame : MonoBehaviour {
	//Publics
	public GameObject load;						//Tela de carregando
	public bool continueCheck = false;
    string sceneName;
    public GameObject termos;

	public void ChangeSceneWithLoading (string scene)
    {
        if (scene.Equals("Zero"))
        {
            PlayerPrefs.SetInt("ExitGincana", 1);
        }
        LoadSceneComponent.LoadMyScene(null, null);
        //load.SetActive (true);
		StartCoroutine (AsyncChange(scene));		
	}
	#region Play Games
	void Start(){

        //PlayGamesServices.UnlockAchievement (GincanaResources.achievement_bem_vindo);
        if (SceneManager.GetSceneByName("Gincana").isLoaded)
        {
            if (PlayerPrefs.GetInt("Tema") > 2)
            {
                //btnContinuar.interactable = false;
            }
        }

        if (PlayerPrefs.GetInt("Termos") < 1)
        {
            termos.SetActive(true);
        }
        else if (GetComponent<CallObject>() != null && !PlayerPrefs.HasKey("ExitGincana"))
        {
            LoadSceneComponent.LoadMyScene(null, null);
            //load.SetActive(true);
            GetComponent<CallObject>().ActiveObject();
        }
        

	}

	public void SaveScore(int time){
	
	//PlayGamesServices.AddScoreLeaderBoards (GincanaResources.leaderboard_tempo, time);
	
	}

	public void ShowAchievements(){
	
		//PlayGamesServices.ShowAchievementsUI ();
	
	}

	public void ShowLeaderBoards (){
	
		//PlayGamesServices.ShowLeaderBoardsUI ();

	}

	#endregion

    public void ChangeSceneNow(string scene)
    {
        sceneName = scene;
        CallScene();
    }

	public void ChangeScene (string scene) {
        sceneName = scene;
        Invoke("CallScene", 2);
	}

	public void CallURL(string url){
		Application.OpenURL ("https://"+url);
	}

    void CallScene()
    {
        SceneManager.LoadScene(sceneName);
    }

	public void launchApp(string package)
	{
		if(IsAppInstalled(package)){
		AndroidJavaClass activityClass;
		AndroidJavaObject activity, packageManager;
		AndroidJavaObject launch;
		activityClass = new AndroidJavaClass ("com.unity3d.player.UnityPlayer");
		activity = activityClass.GetStatic<AndroidJavaObject> ("currentActivity");
		packageManager = activity.Call<AndroidJavaObject> ("getPackageManager");
		launch = packageManager.Call<AndroidJavaObject> ("getLaunchIntentForPackage", package);
		activity.Call ("startActivity", launch);
		}else{
		Application.OpenURL("https://play.google.com/store/apps/details?id="+package);
		}
	}

	public  bool IsAppInstalled(string bundleID){
		AndroidJavaClass up = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaObject ca = up.GetStatic<AndroidJavaObject>("currentActivity");
		AndroidJavaObject packageManager = ca.Call<AndroidJavaObject>("getPackageManager");
		//Debug.Log(" ********LaunchOtherApp ");
		AndroidJavaObject launchIntent = null;
		//if the app is installed, no errors. Else, doesn't get past next line
		try{
			launchIntent = packageManager.Call<AndroidJavaObject>("getLaunchIntentForPackage",bundleID);
			//        
			//        ca.Call("startActivity",launchIntent);
		}catch{
			Debug.Log("Horrible things happened!");
		}
		if(launchIntent == null){
			return false;
	}else{
		return true;
	}
	}

	IEnumerator AsyncChange (string scene)
	{
		//yield return new WaitForSeconds (1);
		AsyncOperation nextScene = SceneManager.LoadSceneAsync (scene);
		nextScene.allowSceneActivation = false;
		while (nextScene.progress<0.9f) {
			yield return null;
		}
		while (!continueCheck) {
			yield return null;
		}

		nextScene.allowSceneActivation = true;



	}
	public void Exit (){
	
		Application.Quit ();
	
	}

    public void AddScene(string scene)
    {
        SceneManager.LoadScene(scene, LoadSceneMode.Additive);
    }

    public void UnloadScene(string scene)
    {
        if (!SceneManager.GetSceneByName("Gincana").isLoaded)
        {
            ChangeScene(scene);
        }
        else
        {
            ChangeScene("Gincana");
           // SceneManager.UnloadSceneAsync("SelectGame");
            
        }
    }

    public void AddLoadScene()
    {
        LoadSceneComponent.LoadMyScene(null, null);

        StartCoroutine(CloseSceneCourotine());
    }

    private IEnumerator CloseSceneCourotine()
    {
        yield return new WaitForSeconds(5.0f);

        UnloadScene("Zero");

        //LoadSceneComponent.CloseMyScene();
    }

}

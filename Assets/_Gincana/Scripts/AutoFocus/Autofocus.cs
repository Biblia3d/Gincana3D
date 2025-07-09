/*============================================================================== 
 * Copyright (c) 2015 Qualcomm Connected Experiences, Inc. All Rights Reserved. 
 * ==============================================================================*/
using UnityEngine;
using System.Collections;
using Vuforia;
using System.IO;
using UnityEngine.UI;

public class Autofocus : MonoBehaviour
{   
    #region MONOBEHAVIOUR_METHODS
    void Start () 
    {
        //VuforiaAbstractBehaviour vuforia = FindObjectOfType<VuforiaAbstractBehaviour>();
        //vuforia.RegisterVuforiaStartedCallback(OnVuforiaStarted);
        //vuforia.RegisterOnPauseCallback(OnPaused);

        Screen.orientation = ScreenOrientation.LandscapeLeft;

       // GameObject.Find("Canvas").GetComponent<Canvas>().enabled = false;

        if (HelloSettings.check) {
            GameObject.Find("Canvas").GetComponent<Canvas>().enabled = true;
        }
    }

    void Update()
    {
        // Trigger an autofocus event on tap
        if (Input.GetMouseButtonUp(0))
        {
            StartCoroutine(TriggerAutofocus());
        }

        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Application.Quit();
        }

//        if ((File.Exists(TakeScreenshot.sourceFile)) && (TakeScreenshot.check))
//        {
//            File.Move(TakeScreenshot.sourceFile, TakeScreenshot.destFile);
//            TakeScreenshot.check = false;
//
//            AndroidJavaClass classPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
//            AndroidJavaObject objActivity = classPlayer.GetStatic<AndroidJavaObject>("currentActivity");
//            AndroidJavaClass classUri = new AndroidJavaClass("android.net.Uri");
//            AndroidJavaObject objIntent;
//            if (GetSDKLevel() > 18)
//            {
//                objIntent = new AndroidJavaObject("android.content.Intent", new object[2] { "android.intent.action.MEDIA_SCANNER_SCAN_FILE", classUri.CallStatic<AndroidJavaObject>("parse", "file://" + TakeScreenshot.destFile) });
//            }
//            else
//            {
//                objIntent = new AndroidJavaObject("android.content.Intent", new object[2] { "android.intent.action.MEDIA_MOUNTED", classUri.CallStatic<AndroidJavaObject>("parse", "file://" + TakeScreenshot.destFile) });
//            }
//            objActivity.Call("sendBroadcast", objIntent);
//            
//            GameObject.Find("onClickButton").GetComponent<Button>().interactable = true;
//        }

    }

    public static int GetSDKLevel()
    {
        var clazz = AndroidJNI.FindClass("android.os.Build$VERSION");
        var fieldID = AndroidJNI.GetStaticFieldID(clazz, "SDK_INT", "I");
        var sdkLevel = AndroidJNI.GetStaticIntField(clazz, fieldID);
        return sdkLevel;
    }

    #endregion // MONOBEHAVIOUR_METHODS


    #region PRIVATE_METHODS
    private void OnVuforiaStarted()
    {
        // Try to enable continuous autofocus mode
        CameraDevice.Instance.SetFocusMode(CameraDevice.FocusMode.FOCUS_MODE_CONTINUOUSAUTO);
    }

    private void OnPaused(bool paused)
    {
        if (!paused) // resumed
        {
            // Set again autofocus mode when app is resumed
            CameraDevice.Instance.SetFocusMode(CameraDevice.FocusMode.FOCUS_MODE_CONTINUOUSAUTO);
        }
    }

    private IEnumerator TriggerAutofocus()
    {
        CameraDevice.Instance.SetFocusMode(CameraDevice.FocusMode.FOCUS_MODE_TRIGGERAUTO);

        // Wait 2 seconds
        yield return new WaitForSeconds(2);

        // Restore continuous autofocus mode
        CameraDevice.Instance.SetFocusMode(CameraDevice.FocusMode.FOCUS_MODE_CONTINUOUSAUTO);
    }
    #endregion // PRIVATE_METHODS

}

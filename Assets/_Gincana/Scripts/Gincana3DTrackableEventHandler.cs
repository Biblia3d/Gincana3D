using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Gincana3DTrackableEventHandler : DefaultTrackableEventHandler
{
    public GameObject foco;
    public GameObject moeda, effect;
    public GameObject tela;
    public bool isTracking;

    protected void OnDisable()
    {
        isTracking = false;
    }

    protected override void OnTrackingFound()
    {
        if (!tela.activeSelf)
        {
            base.OnTrackingFound();
            isTracking = true;
        }
        if (foco != null)
            foco.SetActive(false);
        Debug.Log("Trackable " + mTrackableBehaviour.TrackableName + " found");
        if (moeda != null)
        {
            moeda.SetActive(true);
            effect.SetActive(true);
        }
    }

    protected override void OnTrackingLost()
    {
        base.OnTrackingLost();

        isTracking = false;
        if (foco != null)
            foco.SetActive(true);
        Debug.Log("Trackable " + mTrackableBehaviour.TrackableName + " lost");
        if (moeda != null)
        {
            moeda.SetActive(false);
            effect.SetActive(false);
        }
    }
}

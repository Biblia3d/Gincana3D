using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;



public class AddButtonTema : MonoBehaviour
{
    public GameObject quiz;
    public GridLayoutGroup Grid;
    private Vector3 autoLocalScale;
    public GameObject button, buttonMaisTemas;
    public int top;
    public Scrollbar bar;
    public GameObject[] chld;
    // Use this for initialization
    void Start()
    {
        autoLocalScale = new Vector3(1, 1, 1);
    }

    // Update is called once per frame
    //private void Update()
    //{
    //    GetComponent<GridLayoutGroup>().padding.top = 250 + 100 * quiz.GetComponent<Question>().listaTema.Count;

    //}

    public void AddButton()
    {
        GameObject go = Instantiate(button);
        go.GetComponentInChildren<Text>().color = Color.black;
        go.GetComponentInChildren<Outline>().effectColor = Color.white;
        go.transform.SetParent(Grid.transform);
       // go.transform.SetParent(Grid.transform, false);
        go.transform.localScale = autoLocalScale;
        go.transform.localPosition = Vector3.zero;

    }

    public void AddButtonMaisTemas()
    {
        GameObject go = Instantiate(buttonMaisTemas);
        go.transform.SetParent(Grid.transform);
        // go.transform.SetParent(Grid.transform, false);
        go.transform.localScale = autoLocalScale;
        go.transform.localPosition = Vector3.zero;
        SetPositionButton();

    }

    public void SetPositionButton()
    {
        //GetComponent<GridLayoutGroup>().padding.top = 50+ top * quiz.GetComponent<Question>().listaTema.Count;
        bar.value = 1;
        ChildCount();
    }

    void ChildCount()
    {
        chld = GameObject.FindGameObjectsWithTag("Botao");
        for(int i = 0; i < chld.Length; i++)
        {
            chld[i].GetComponent<ButtonTemaBehaviour>().indice = i;
        }
    }
}

using UnityEngine;
using UnityEngine.Networking;
using System.Collections;

public class JsonLoader : MonoBehaviour
{
    // URL do JSON
    public string jsonUrl = "https://exemplo.com/dados.json";

    void Start()
    {
        StartCoroutine(CarregarJson());
    }

    IEnumerator CarregarJson()
    {
        UnityWebRequest requisicao = UnityWebRequest.Get(jsonUrl);

        yield return requisicao.SendWebRequest();

        if (requisicao.result == UnityWebRequest.Result.Success)
        {
            string json = requisicao.downloadHandler.text;
            Debug.Log("Conteúdo do JSON:\n" + json);
        }
        else
        {
            Debug.LogError("Erro ao carregar JSON: " + requisicao.error);
        }
    }
}
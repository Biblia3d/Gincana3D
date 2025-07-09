using System.Collections;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;

public class JsonDownloader : MonoBehaviour
{
    // URL do JSON
    public string jsonUrl = "https://biblia.fuctura.com.br/controle/funcoes_ajax.php?fn=retornaProjetoLiberado";

    // Nome do arquivo a ser salvo
    public string fileName = "dados.txt";

    void Start()
    {
        StartCoroutine(BaixarESalvarJson());
    }

    IEnumerator BaixarESalvarJson()
    {
        using (UnityWebRequest request = UnityWebRequest.Get(jsonUrl))
        {
            // Envia a requisição
            yield return request.SendWebRequest();

            // Verifica se houve erro
            if (request.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError("Erro ao baixar JSON: " + request.error);
            }
            else
            {
                string json = request.downloadHandler.text;

                // Caminho onde será salvo (pode variar de acordo com plataforma)
                string caminho = Path.Combine(Application.persistentDataPath, fileName);

                // Salva no disco
                File.WriteAllText(caminho, json);

                Debug.Log("JSON salvo em: " + caminho);
            }
        }
    }
}

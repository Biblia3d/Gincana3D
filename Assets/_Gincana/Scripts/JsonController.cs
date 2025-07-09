using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEngine.UI;
using System;

public class JsonController : MonoBehaviour
{

    public string jsonURL;
    int i;
    public List<string> fase;
    public bool endJSON = false;
    JsonDataClass[] jsnData;
    List<List<string>> temp = new List<List<string>>();
    List<List<string>> retorno = new List<List<string>>();
    public int countTema = 0;
    public GameObject erro, aguarde; // arraste o GameObject de texto no Inspector
    // Use this for initialization
    void Start()
    {

        fase = new List<string>();
    }

    public List<string> processJsonData(string url)
    {
        Debug.LogError(url);
        fase.Clear(); // Garante que a lista comece limpa
        temp.Clear();
        retorno.Clear();
        countTema = 0;

        if (string.IsNullOrEmpty(url))
        {
            Debug.LogError("Erro: JSON vazio ou nulo.");
            endJSON = true;
            return fase;
        }

        try
        {
            Debug.Log("URL recebida:\n" + url);

            // Adiciona a chave de agrupamento necessária para o wrapper
            string jsonFormatado = "{\"Items\":" + url + "}";
            jsnData = JsonHelper.FromJson<JsonDataClass>(jsonFormatado);

            if (jsnData == null || jsnData.Length == 0)
            {
                Debug.LogError("Erro: JSON formatado corretamente, mas nenhum dado foi encontrado.");
                erro.SetActive(true);
                aguarde.SetActive(false);
                endJSON = true;
                return fase;
            }

            for (i = 0; i < jsnData.Length; i++)
            {
                foreach (Fases f in jsnData[i].fases)
                {
                    // Verifica se o bloco está completo
                    if (!string.IsNullOrEmpty(f.resp01) &&
                        !string.IsNullOrEmpty(f.resp02) &&
                        !string.IsNullOrEmpty(f.resp03) &&
                        !string.IsNullOrEmpty(f.resp04) &&
                        !string.IsNullOrEmpty(f.resposta))
                    {
                        List<string> faseAtual = new List<string>();

                        faseAtual.Add(f.jogoFase);
                        faseAtual.Add(f.resp01);
                        faseAtual.Add(f.resp02);
                        faseAtual.Add(f.resp03);
                        faseAtual.Add(f.resp04);
                        faseAtual.Add(f.resposta);
                        faseAtual.Add("\n");

                        fase.AddRange(faseAtual);   // adiciona o conteúdo válido à lista geral
                        temp.Add(faseAtual);        // registra para controle de quantidade
                    }
                    else
                    {
                        Debug.LogWarning("Bloco ignorado: dados incompletos encontrados.");
                    }
                }

                if (temp.Count == 10)
                {
                    fase.Insert(countTema, "<tema>");
                    fase.Insert(countTema + 1, jsnData[i].tema);
                    fase.Insert(countTema + 2, "<tema/>");

                    countTema += 73;
                    temp.Clear();
                }
            }

            endJSON = false;
        }
        catch (Exception e)
        {
            string mErro = "Erro ao processar JSON: " + e.Message;
            Debug.LogError(mErro);
            if (erro != null) erro.SetActive(true);
            endJSON = true;
            return fase; // <- Interrompe o processo aqui
        }

        Debug.Log("Total de entradas em 'fase': " + fase.Count);
        return fase;
    }


    public static class JsonHelper
    {
        public static T[] FromJson<T>(string json)
        {
            Wrapper<T> wrapper = JsonUtility.FromJson<Wrapper<T>>(json);
            return wrapper.Items;
        }

        public static string ToJson<T>(T[] array)
        {
            Wrapper<T> wrapper = new Wrapper<T>();
            wrapper.Items = array;
            return JsonUtility.ToJson(wrapper);
        }

        public static string ToJson<T>(T[] array, bool prettyPrint)
        {
            Wrapper<T> wrapper = new Wrapper<T>();
            wrapper.Items = array;
            return JsonUtility.ToJson(wrapper, prettyPrint);
        }

        [Serializable]
        private class Wrapper<T>
        {
            public T[] Items;
        }
    }
}



using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Pergunta
{

    //string questao;
    //string aternativa1;
    //string aternativa2;
    //string aternativa3;
    //string aternativa4;
    //string resposta;

    string idEndereco;
    string cep;
    string endereco;
    string idBairro;
    string bairro;
    string idCidade;
    string cidade;
    string cidadeCep;
    string idEstado;
    string estado;
    string sigla;

public static Pergunta CreateFromJSON(string jsonString)
    {
        return JsonUtility.FromJson<Pergunta>(jsonString);
    }
}

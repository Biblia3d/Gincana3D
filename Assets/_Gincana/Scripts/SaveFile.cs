using UnityEngine;
using System.Collections;
using System.IO;

// Padrão de nossos arquivos !

// Tela Cheia : Linha 1.
// Graficos : Linha 2.
// Resolução X : Linha 3.
// Resolucao Y : Linha 4.

public class SaveFile : MonoBehaviour
{
    public string[] CFG; // Declaramos nossa variavel que irá conter as configurações do usuario.
    private string linha; // Aqui declaramos uma variavel que irá receber o valor de cada linha do arquivo
    private StreamReader sr; // Aqui declaramos um leitor de arquivos para ser usado em todas funções
    private StreamWriter sw; // Aqui declaramos um escritor de arquivos para ser usado em todas funções

    void Reset()
    {
        CFG = new string[4]; // Declarando o tamanho da Array, aqui deve ser colocado o tamanho de configurações que seu arquivo deve ter. No caso deste exemplo é 4.
    }
    void Start()
    {
        if (!File.Exists(Application.dataPath + "/CFG.txt")) CriarArquivoDeCFG(); // Se o arquivo de configuração não existir você CHAMA A FUNÇÃO que irá criar ele e ja escrever valores padroes.
        LerArquivoDeCFG(); // Iremos ler e salvar as configuracoes do arquivo
        MostrarValoresDeCFG(); // Iremos mostrar em um log essas configuracoes
        UtilizarValoresDeCFG(); // Iremos usar algumas destas configuracoes
                                //Debug.Log("Pronto!");
    }
    public void CriarArquivoDeCFG()
    {
        //File.Create (Application.dataPath + "/CFG.ini");
        StreamWriter sw = new StreamWriter(Application.dataPath + "/CFG.txt"); // Iremos declarar qual arquivo queremos criar (escrever)
        sw.WriteLine("true"); // Linha 1. Aqui é bem simples, apenas chamamos a funcao WriteLine. Ela irá escrever linhas embaixo de linhas. Então o arquivo será escrito na ordem que voce quiser.
        sw.WriteLine("1"); // Linha 2. Valores padrão!
        sw.WriteLine("1024"); // Linha 3
        sw.WriteLine("768"); // Linha 4
        sw.Close(); // Fechamos o arquivo (o salvando). Ja poderemos encontrar o arquivo na pasta do jogo
    }
    public void LerArquivoDeCFG()
    {
        StreamReader sr = new StreamReader(Application.dataPath + "/CFG.txt"); // Declaramos qual arquivo queremos ler.
        int t = 0; // Declaramos um index para ser usado no while.
        while ((linha = sr.ReadLine()) != null)
        { // Enquanto linha for diferente de null ou seja a linha existe  iremos 
            CFG[t] = linha; //  Setamos os valores em nossa array.
            t++; // Aumentamos o indice em 1.
        }
        sr.Close(); // Fechamos o arquivo.
    }
    public void MostrarValoresDeCFG()
    {
        Debug.Log("Tela Cheia: " + CFG[0] + ". Graficos: " + CFG[1] + ". Resolução: " + CFG[2] + "x" + CFG[3] + ".");
    }
    public void UtilizarValoresDeCFG()
    {
        bool tlcheia = (CFG[0] == "true"); // Verificamos se a variavel de tela cheia está true no arquivo
        Screen.SetResolution(int.Parse(CFG[2]), int.Parse(CFG[3]), tlcheia); // Setamos a resolucao e se tem tela cheia ou não.
    }
}
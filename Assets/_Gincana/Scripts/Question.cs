using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;
using System.IO;
using System.Collections.Generic;
using UnityEngine.UI;
using System;


public class Question : MonoBehaviour
{
    //Publics
    public GameObject load, info, tempo, finalGame, themeSelect, semInternet, themeOnlineSelect;         //Tela de carregando, Tela de informaçao do proximo bau, Mostra o tempo, Tela de FinalGame, tela de selecao de tema, aviso sem internet
    public Question[] quiz;                                 //Todas as Perguntas do Jogo
    public AudioSource audioSource;
    public TextAsset txt;                                   //Arquivo das perguntas
    public TextAsset[] temas;
    public bool begin;                                      //Verificar se o jogo começou
    public int correctAnswer, cont, bau;                    //Resposta certa, Contador de baus, Nome do bau atual
    public float timeToFinish;                              //Tempo para acabar
    public string question;									//Pergunta
    public string verso;
    public string[] answer;								//Respostas
    public bool ok, server;
    public GameObject[] pergaminho;
    public Text bauAtual;
    public AudioClip alegria;
    public string url;
    public string allText; //closeEachLine = Adiciona um "\n" para adicionar a última linha do EachLine
    string closeEachLine = "\n";
    //Privates
    public List<string> eachLine;                          //Ler o TXT
    private bool finishTime;                                //Se ja terminou o tempo
    private float timer;                                    //Contador do relogio

    int contTema = 0;
    public bool isTema, conected;
    public List<string> listaTema;
    public List<string> perguntas;
    public string temp = null;
    int contForeach = 0;
    public List<List<string>> colecaoDeListaDePerguntas;
    public QuizQuestions quest;
    public GameObject buttonTema;
    public Button onlineThemes;
    public Text onlineThemeButtonText; //Texto do botão Temas Online
    public GameObject aguarde;
    public JsonController jsonController; //Recebe Game Object Json Controller que contém o script com de mesmo nome
    public int cont1 = 1;
    CoroutineWithData cd;
    public Text textoCount;
    public List<string> onlineEachLine;
    public List<List<string>> listEachLine = new List<List<string>>();
    public int countThemasLoaded = 0;
    //public int limitOnlineThemes;
    public AudioSource mainMusic;


    [Serializable]
    public class QuizQuestions
    {
        public List<List<string>> questoes;
    }

    //Parametros do Objeto Question
    public Question(string questionPar, string[] answerPar, int correctAnswerPar, string verso)
    {
        question = questionPar;
        answer = answerPar;
        correctAnswer = correctAnswerPar;
        this.verso = verso;
    }

    private void Awake()
    {
        StartCoroutine(VerifyConnection());

    }

    void Start()
    {
        //PlayerPrefs.DeleteKey("Contador");
        PlayerPrefs.SetInt("Botoes", 0);
        if (!PlayerPrefs.HasKey("Contador") || PlayerPrefs.GetInt("Contador") < 19)
        {
            PlayerPrefs.SetInt("Contador", 19);

            if (Debug.isDebugBuild)
                Debug.Log("Nao existe ou 0");
        }

        //Booleans
        finishTime = false;
        begin = false;
        //Floats
        timer = Time.time;
        cont = PlayerPrefs.GetInt("ContadorBaus");
        quest = new QuizQuestions();
        colecaoDeListaDePerguntas = new List<List<string>>();
        perguntas = new List<string>();
        //StartCoroutine(VerifyConnection());

        aguarde.active = PlayerPrefs.HasKey("StartDownload");
        if (PlayerPrefs.HasKey("StartDownload"))
        {
            StartCoroutine(DownloadData(jsonController, url)); //Chama a rotina para ler o JSON na Web
        } else {
            AddButtonTema();
        }


    }

    public void StartTheme(int text)
    {
        if (mainMusic != null) { 
            mainMusic.volume = 0.2f;
            Debug.Log("Baixou o som");
        }

        PlayerPrefs.SetInt("Tema", text);
        if (text < 3)// ******************************* Se o tema não for Online
        {
            server = false;
            txt = temas[text];
            //Le o TXT
            Read();
            //Gera todas as perguntas
            Generate();
            //Altera a ordem das perguntas
            //ChangePlaces();

            //foreach (GameObject i in GameObject.FindGameObjectsWithTag("Bau"))
            //{
            //    if (i.GetComponent<BauCode>())
            //        i.GetComponent<BauCode>().GenerateQuestion();
            //}
        }
        else //************************ Se o tema for Online
        {
            server = true;
            Read();
        }
        //Le o TXT

        print("LEU PERGUNTAS");
        //while
        //Gera todas as perguntas


    }
    void Update()
    {
        //Verifica se ja acabou o tempo
        if (finishTime == true)
        {
            tempo.GetComponent<Text>().text = "perdeu";
            PlayerPrefs.SetInt("Time", 1);
            Invoke("FinalGame", 1.5f);
        }
        else
        {
            if (begin == true)
            {
                tempo.GetComponent<Text>().text = FormatSeconds(Time.time);
            }
        }

        onlineThemes.interactable = conected;
        if (conected)
        {
            onlineThemeButtonText.text = "Mais Temas (Online)";
            if (themeOnlineSelect.activeSelf)
            {

            }
        }
        else
        {
            onlineThemeButtonText.text = "Conecte à Internet";
            if (themeOnlineSelect.activeSelf)
            {
                for (int i = 0; i < buttonTema.GetComponent<AddButtonTema>().chld.Length; i++)
                {
                    if (buttonTema.GetComponent<AddButtonTema>().chld.Length < 1)
                        semInternet.SetActive(true);
                }

            }
        }

        End();
    }

    //Conta os baus que sao abertos
    public void Contador()
    {
        cont++;
        PlayerPrefs.SetInt("ContadorBaus", cont);
        if (cont >= 10)
        {
            FinalGame();
        }
    }

    //Mostra a  tela Final
    public void FinalGame()
    {
        //PlayGamesServices.UnlockAchievement (GincanaResources.achievement_terminou);

        //if((PlayerPrefs.GetInt("timeToFinish")-PlayerPrefs.GetInt("TimerContinue"))*-1<300)
        //	PlayGamesServices.UnlockAchievement (GincanaResources.achievement_terminou_rapido);

        //if((PlayerPrefs.GetInt("timeToFinish")-PlayerPrefs.GetInt("TimerContinue"))*-1<120)
        //	PlayGamesServices.UnlockAchievement (GincanaResources.achievement_terminou_muito_rpido);



        PlayerPrefs.SetInt("Begin", 0);
        begin = false;
        //int aux=0;
        int minutes = (PlayerPrefs.GetInt("timeToFinish") - PlayerPrefs.GetInt("TimerContinue")) * -1 / (60 * 100);
        int seconds = (PlayerPrefs.GetInt("timeToFinish") - (PlayerPrefs.GetInt("TimerContinue")) * -1 % (60 * 100)) / 100;
        string timetoWin = string.Format("{00:00}:{1:00}", minutes, seconds);
        /*for(int i=0;i<quiz.Length;i++){
			if(PlayerPrefs.GetInt(""+(i+1))==2){
				aux+=100;
			}
		}*/
        Debug.Log(timetoWin);
        PlayerPrefs.SetInt("ContadorBaus", 0);
        PlayerPrefs.SetString("TimeToWin", timetoWin);
        //PlayerPrefs.SetInt ("Score",aux);
        if (!ok)
        {
            Invoke("Final", 3);
            ok = true;
        }
        pergaminho[PlayerPrefs.GetInt("Open") - 1].SetActive(false);
    }

    void Final()
    {
        finalGame.SetActive(true);
        Sound_Manager.Instance.GetComponent<AudioSource>().clip = alegria;
        Sound_Manager.Instance.GetComponent<AudioSource>().Play();
    }
    //Le o arquivo TXT
    public void Read()
    {
        if (!server) //Tema Offline
        {
            string allText = txt.text;
            eachLine = new List<string>();
            eachLine.AddRange(allText.Split("\n"[0]));
            quiz = new Question[eachLine.Count / 7];
        }
        else //Tema Online
        {
            StartCoroutine(DownloadData(jsonController, url)); //Chama a rotina para ler o JSON na Web
        }

    }

    //Gera todas as perguntas
    public void Generate()
    {
        int atualPos = 0;
        for (int i = 0; i < 10; i++)
        {
            string questionGen;
            string[] answerGen = new string[4];
            questionGen = eachLine[atualPos];
            atualPos += 1;
            answerGen[0] = eachLine[atualPos];
            atualPos += 1;
            answerGen[1] = eachLine[atualPos];
            atualPos += 1;
            answerGen[2] = eachLine[atualPos];
            atualPos += 1;
            answerGen[3] = eachLine[atualPos];
            atualPos += 1;
            int correctAnswerGen = int.Parse(eachLine[atualPos]);
            atualPos += 1;
            string verso = eachLine[atualPos];
            atualPos++;
            quiz[i] = new Question(questionGen, answerGen, correctAnswerGen, verso);
        }

        ChangePlaces();

    }

    //Altera a ordem das perguntas
    public void ChangePlaces()
    {
        //correctAnswer = new string[quiz.Length];
        for (int i = 0; i < quiz.Length; i++)
        {
            Question aux;
            int nextPos = UnityEngine.Random.Range(0, quiz.Length);
            aux = quiz[nextPos];
            quiz[nextPos] = quiz[i];
            quiz[i] = aux;

        }

        foreach (GameObject i in GameObject.FindGameObjectsWithTag("Bau"))
        {
            if (i.GetComponent<BauCode>())
                i.GetComponent<BauCode>().GenerateQuestion();
        }


    }

    //Checa se a resposta esta correta
    public void CheckAnswer(string name)
    {
        Contador();
        /*for(int i=0;i<quiz.Length;i++){
			if(PlayerPrefs.GetInt(""+(i+1))==1){
				bau=i;
				break;
			}
		}*/
        bau = PlayerPrefs.GetInt("Open") - 1;
        if (name == "0" + (bau + 1) + "0" + quiz[bau].correctAnswer || name == (bau + 1) + "0" + quiz[bau].correctAnswer)
        {
            GameObject.Find("0" + (bau + 1)).GetComponentInChildren<BauCode>().Acertou();
            info.gameObject.SetActive(true);
            if ((bau + 2) <= 10)
            {
                PlayerPrefs.SetInt("" + (bau + 2), 1);
                info.gameObject.SetActive(true);
                info.GetComponentInChildren<Text>().text = "Você acertou e ganhou mais 100 Pontos!! Vá para o baú " + (bau + 2);
                bauAtual.text = "Procurando Bau " + (bau + 2).ToString();
                Invoke("CloseInfo", 3f);
            }
            else
            {
                PlayerPrefs.SetInt("1", 1);
                info.gameObject.SetActive(true);
                info.GetComponentInChildren<Text>().text = "Você acertou e ganhou mais 100 Pontos!! Vá para o baú " + ("" + 1);
                bauAtual.text = "Procurando Bau " + (1).ToString();
                Invoke("CloseInfo", 3f);
            }

        }
        else
        {
            GameObject.Find("0" + (bau + 1)).GetComponentInChildren<BauCode>().Errou();
            info.gameObject.SetActive(true);
            if ((bau + 2) <= 10)
            {
                PlayerPrefs.SetInt("" + (bau + 2), 1);
                info.gameObject.SetActive(true);
                info.GetComponentInChildren<Text>().text = "Você errou e não ganhou ponto!! Vá para o baú " + (bau + 2);
                bauAtual.text = "Procurando Bau " + (bau + 2).ToString();
                Invoke("CloseInfo", 3f);
            }
            else
            {
                PlayerPrefs.SetInt("1", 1);
                info.gameObject.SetActive(true);
                info.GetComponentInChildren<Text>().text = "Você errou e não ganhou ponto!! Vá para o baú " + ("" + 1);
                bauAtual.text = "Procurando Bau 1" /*+ (bau + 2).ToString()*/;
                Invoke("CloseInfo", 3f);
            }
        }
        
    }

    //Faz o calculo do contador
    string FormatSeconds(float elapsed)
    {
        int d = (int)(elapsed * 100.0f);
        d = Mathf.FloorToInt(timeToFinish * 100) - d;
        PlayerPrefs.SetInt("TimerContinue", d);
        if (d <= 0)
        {
            finishTime = true;
        }
        int minutes = d / (60 * 100);
        int seconds = (d % (60 * 100)) / 100;
        //print(d);
        return string.Format("{00:00}:{1:00}", minutes, seconds);
    }

    //Começa o jogo
    public void BeginGame()
    {

        GameObject.Find("Baus").GetComponent<Gincana>().Zerar();
        begin = true;
        audioSource.Stop();
        PlayerPrefs.SetInt("Score", 0);
    }

    public void RestartGame()
    {
        begin = true;
        timeToFinish = PlayerPrefs.GetInt("TimerContinue") / 50 / 2 + Time.time;
        audioSource.Stop();
        StartTheme(PlayerPrefs.GetInt("Tema"));

    }

    public void Restart()
    {
        load.SetActive(true);
        SceneManager.LoadScene("Gincana");
    }

    //Sai do jogo e volta para cena 1
    public void Exit()
    {

        Application.Quit();
    }

    public void CloseInfo()
    {
        info.SetActive(false);
    }

    static WWW WaitDownload(WWW www, string url)
    {
        www = new WWW(url);
        WaitForSeconds w;
        Debug.Log("tamanho do arquivo " + www.bytesDownloaded.ToString());
        while (www.progress != 1)
        {
            w = new WaitForSeconds(0.1f);
            Debug.Log("PROGRESSO " + www.progress);
        }
        if (www.progress == 1)
        {
            Debug.Log("CARREGOU " + www.progress);
        }
        return www;

    }

    IEnumerator DownloadData(JsonController json, string url) //Utiliza o JSON para crar os Temas Online
    {

        WWW www = new WWW(url);//instancia um objeto tipo WWW
                               //yield return www;
        //TODO Ajuste de tempo
        yield return new WaitForSecondsRealtime(3);
        //aguarde.SetActive(false);
        eachLine = new List<string>();//Cria uma lista de Strings (cada linha um Item da Lista)
        perguntas = new List<string>();//Cria uma Coleção de Perguntas
        if (www.error == null)
        {
            Debug.LogError("Conteudo da url: "+ www.text);
            eachLine = json.processJsonData(www.text);//Chama o método que cria o Objeto contido no JSON
            foreach (string item in eachLine)
            {
                if (closeEachLine != null)
                    closeEachLine = closeEachLine + item + "\n";
                else
                    closeEachLine = item + "\n";
            }
            StartCoroutine(Generate1());


            Invoke("Aguarde", 2);

        }
        else
        {
            Debug.Log(www.error);
            AddButtonTema();
            Invoke("Aguarde", 2);
        }

        PlayerPrefs.DeleteKey("StartDownload");

        //StartCoroutine(LoadThemesButton());
        yield return 0;


        //eachLine.AddRange(allText.Split("\n"[0]));

    }

    IEnumerator Generate1()
    {
        foreach (string item in eachLine)
        {
            contForeach++;
            if (item.Contains("<tema>"))
            {
                isTema = true;
                if (temp != null && temp != "")
                {
                    perguntas.AddRange(temp.Split("\n"[0]));
                    colecaoDeListaDePerguntas.Add((List<string>)ClonarObjeto(perguntas));
                    foreach (List<string> sitem in colecaoDeListaDePerguntas)
                    {
                        Debug.Log(sitem[0].ToString());
                    }
                    perguntas.Clear();
                    print("SALVOU PERGUNTAS" + (contTema - 1));
                    temp = null;
                }

            }
            else if (item.Contains("<tema/>"))
            {
                isTema = false;
                temp = null;
                contTema++;
            }
            else
            {
                if (isTema)
                {
                    listaTema.Add(item);
                }
                else
                {
                    if (temp != null)
                    {
                        if (item != "\n")
                            temp += "\n" + item;
                    }
                    else
                    {
                        print("Temp NULL" + contForeach);
                        temp = item;
                    }
                }
            }

        }
        perguntas.Clear();
        perguntas.AddRange(temp.Split("\n"[0]));
        colecaoDeListaDePerguntas.Add((List<string>)ClonarObjeto(perguntas));

        print("SALVOU PERGUNTAS" + (contTema - 1));
        temp = null;

        if (listaTema != null)
        {
            for (int i = 0; i < listaTema.Count; i++)
            {
                AddButton();
            }
            
            AddButtonTema();
            Sound_Manager.Instance.PlayOneShot("Moeda");

        }
        yield return 0;
    }

    void AddButton()
    {
        buttonTema.GetComponent<AddButtonTema>().AddButton();
        buttonTema.GetComponent<AddButtonTema>().SetPositionButton();
    }

    void AddButtonTema()
    {
        if (!GameObject.FindWithTag("ButonTema"))
        {
            buttonTema.GetComponent<AddButtonTema>().AddButtonMaisTemas();
        }
    }

    //IEnumerator Recall(CoroutineWithData cd)
    //{
    //    cd = new CoroutineWithData(this, Generate1());
    //    //yield return cd.coroutine;
    //    Debug.Log("&&&&&&&&&&&&result is " + cd.result);  //  'success' or 'fail'
    //    Debug.Log("Recall " + cont1++);
    //    if (cd.result==1 && (!jsonController.endJSON))
    //    {
    //        countThemasLoaded++;
    //        Invoke("CallMethod", 2);
    //    }


    //    yield return 0;
    //}

    void CallMethod()
    {
        Debug.Log("CALLMETHOD");
        StartCoroutine(DownloadData(jsonController, url));
    }

    public void TemaOnline(int i)
    {
        List<string> temp = new List<string>();
        temp = colecaoDeListaDePerguntas[i];
        onlineEachLine = new List<string>();
        int c = 0;
        foreach (string item in temp)
        {
            onlineEachLine.Add(item);
            c++;
            if (c % 6 == 0)
                onlineEachLine.Add("\n");
        }

        eachLine = onlineEachLine;
        quiz = new Question[eachLine.Count / 7];
        Generate();
    }

    public static object ClonarObjeto(object objRecebido)
    {
        using (var ms = new MemoryStream())
        {
            var bf = new System.Runtime.Serialization.Formatters.Binary.BinaryFormatter();

            bf.Serialize(ms, objRecebido);
            ms.Position = 0;

            object obj = bf.Deserialize(ms);
            ms.Close();

            return obj;
        }

    }

    IEnumerator VerifyConnection()
    {
        StartCoroutine(SendEmail());
        yield return new WaitForSecondsRealtime(0.3f);
        StartCoroutine(VerifyConnection());

    }
    IEnumerator SendEmail()
    {

        WWW www = new WWW("https://www.google.com");
        
        if (Debug.isDebugBuild)
            Debug.Log("Testando Conexão");

        yield return www;

        conected = (www.isDone && www.bytesDownloaded > 0);
        
        print(www.error);
    }

    void Aguarde()
    {
        aguarde.SetActive(false);
        print("AGUARDE");
    }

    class CoroutineWithData
    {
        public Coroutine coroutine { get; private set; }
        public int result;
        private IEnumerator target;
        public CoroutineWithData(MonoBehaviour owner, IEnumerator target)
        {
            this.target = target;
            this.coroutine = owner.StartCoroutine(Run());

        }

        private IEnumerator Run()
        {
            while (target.MoveNext())
            {
                result = (int)target.Current;
                yield return result;
            }
        }


    }

    void End()
    {
        if ((jsonController.endJSON) && colecaoDeListaDePerguntas.Count == listaTema.Count && PlayerPrefs.GetInt("Botoes") == 0)
        {
            //StartCoroutine(LoadThemesButton());
            PlayerPrefs.SetInt("Botoes", 1);
        }

        if (colecaoDeListaDePerguntas.Count > 0)
            LerTexto();
    }

    void LerTexto()
    {
        //foreach (List<string> l in colecaoDeListaDePerguntas)
        //{
        //    foreach(string s in listaTema)
        //    {
        //        Debug.Log(s);
        //    }
        //    foreach (string s in l)
        //    {
        //        Debug.Log(s);
        //    }
        //}
    }

}

//Redley Was Here
//Herbert Also

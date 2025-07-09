using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

/**
 * Serve para poder inicializar a cena com as devidas informacoes
 */
public class LoadSceneComponent : MonoBehaviour {

    /**
     * Para trabalhar alterando os dados da requisicao
     */
    private static LoadSceneRequest loadSceneRequest = null;

    [Header("Informacoes basicas")]
    /**
     * Informacoes da requisicao da cena
     */
    public LoadSceneRequest request = null;

    [Header("Informacoes fixas")]
    /**
     * Imagem de fundo
     */
    public GameObject backgroundImage;

    /**
     * Imagem de propaganda
     */
    public GameObject propagandaImage;

    /**
     * Mensagem que sera exibida
     */
    public GameObject messageGameObject;

    /**
     * Mensagem que sera exibida
     */
    public Text messageText;

    /**
     * Dica a ser exibida
     */
    public GameObject tipGameObject;

    /**
     * Mensagem da dica para ser exibida
     */
    public Text tipText;

    /**
     * Titulo da propaganda
     */
    public GameObject titleGameObject;

    /**
     * Titulo da propaganda
     */
    public Text titleText;

    /**
     * Informacoes que serao carregadas pela primeira vez
     */
    private LoadScriptableObject loadScriptableObject;

    public static void LoadMyScene(LoadSceneRequest request, System.Action<LoadSceneResponse> callback)
    {
        loadSceneRequest = request;
        if (request != null) request.callback = callback;
        SceneManager.LoadSceneAsync("Load", LoadSceneMode.Additive);
    }

    public static void CloseMyScene()
    {
        SceneManager.UnloadSceneAsync("Load");
    }

    public void CloseScene()
    {
        StartCoroutine(CloseSceneCourotine());
    }

    private IEnumerator CloseSceneCourotine()
    {
        yield return new WaitForSeconds(request.waitForSeconds);

        SceneManager.UnloadSceneAsync("Load");
    }

    public void Awake()
    {
        if (loadSceneRequest != null) request = loadSceneRequest;
        loadSceneRequest = null; // the register has served its purpose, clear the state
    }

    public void EndScene(LoadSceneResponse outcome)
    {
        if (request.callback != null) request.callback(outcome);
        request.callback = null; // Protect against double calling;
    }

    // Use this for initialization
    void Start ()
    {
        if (request != null)
        {
            loadScriptableObject = request.GetRandomLoadScriptableObject();
        }

        UpdateByRequest();
    }
	
	// Update is called once per frame
	void Update ()
    {
        UpdateByRequest();
    }

    /**
     * Atualiza os dados com base nas informacoes da requisicao, mas as
     * o loadScriptableObject precisa ser recebido como parametro para
     * permitir que os dados do mesmo sejam carregados apenas uma unica vez
     */
    private void UpdateByRequest()
    {
        if (request != null)
        {
            if (backgroundImage != null)
            {
                backgroundImage.SetActive(request.showBackgroundImage);

                if (loadScriptableObject != null) backgroundImage.GetComponent<Image>().sprite = loadScriptableObject.backgroundImage;
            }
            if (propagandaImage != null)
            {
                propagandaImage.SetActive(request.showPropagandaImage);

                if (loadScriptableObject != null) propagandaImage.GetComponent<Image>().sprite = loadScriptableObject.propagandaImage;
            }
            if (messageGameObject != null)
            {
                messageGameObject.SetActive(request.showMessage);

                if (messageText != null && loadScriptableObject != null) messageText.text = loadScriptableObject.message;
            }
            if (tipGameObject != null)
            {
                tipGameObject.SetActive(request.showTip);

                if (tipText != null && loadSceneRequest != null) tipText.text = loadScriptableObject.tip;
            }

            if (titleGameObject != null)
            {
                titleGameObject.SetActive(request.showTitle);

                if (loadScriptableObject != null && (loadScriptableObject.title == null || loadScriptableObject.title == "")) titleGameObject.SetActive(false);

                if (titleText != null && loadScriptableObject != null) titleText.text = loadScriptableObject.title; 
            }
        }
    }

    /**
     * Informacoes de requisicao para poder ser usada no sistema
     */
    [System.Serializable]
    public class LoadSceneRequest
    {
        /**
         * Retorno da requisicao
         */
        public System.Action<LoadSceneResponse> callback;

        [Header("Quais campos deseja manter visivel ao carregar")]
        public bool showBackgroundImage = true;
        public bool showPropagandaImage = true;
        public bool showMessage = true;
        public bool showTip = true;
        public bool showTitle = true;

        [Header("Informacoes gerais")]
        public float waitForSeconds = 0.5F;

        [Header("Informacoes para serem carregadas com base na aleatoriedade")]
        public LoadScriptableObject[] loadScriptableObjects;

        public LoadScriptableObject GetRandomLoadScriptableObject()
        {
            if (loadScriptableObjects != null)
            {
                int next = Random.Range(0, loadScriptableObjects.Length);

                return loadScriptableObjects[next];
            }

            return null;
        }
    }

    public class LoadSceneResponse
    {

    }
}

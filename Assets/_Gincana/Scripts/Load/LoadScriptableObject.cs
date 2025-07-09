using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/**
 * Serve para organizar as propagandas para serem exibidas de forma customizada e permitindo
 * ter as informacoes e devidas customizacoes
 */
[CreateAssetMenu(fileName ="LoadData", menuName ="Load/Data")]
public class LoadScriptableObject : ScriptableObject {

    [Header("Informacoes basicas")]

    /**
     * Imagem de fundo para ser exibida
     */
    public Sprite backgroundImage;

    /**
     * Imagem opcional de propaganda
     */
    public Sprite propagandaImage;

    /**
     * Mensagem da propaganda
     */
    public string message;

    /**
     * Dica opcional para explicar
     */
    public string tip = "Você pode escolher qualquer baú para começar";

    /**
     * Titulo da propaganda
     */
    public string title;
}

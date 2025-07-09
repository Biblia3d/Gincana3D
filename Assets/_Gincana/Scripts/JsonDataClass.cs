using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

[Serializable]
public class JsonDataClass
{
	//public string idProjeto;
	//public string dataCadastro;
	//public string projeto;
	//public string dataInicio;
	//public string qtdFases;
	//public string musica;
	//public string ideias;*/
	public string tema;
	//public string observacoes;
	//public string ativo;
	//public string idAnotador;
	//public string idTurma;
	//public string turma;
	//public string dataAbertura;
	public string idJogoTipo;
	//public string jogoTipo;
	//public string imagem;
 //   public Turma turmaObj = new Turma();
 //   public List<string> alunos = new List<string>();
 //   public JogoTipo jogoTipoObj;
 //   public string anotador;
    public List<Fases> fases = new List<Fases>();
	

    //public string resp01;
    //public string resp02;
    //public string resp03;
    //public string resp04;
    //public string bairro;
    //public string idCidade;
    //public string cidade;
    //public string cidadeCep;
    //public string idEstado;
    //public string estado;
    //public string sigla;
}

[Serializable]
public class Turma
{
    public string idTurma;
	public string dataCadastro;
	public string turma;
    public string dataAbertura;
    public string observacoes;
	public string imagem;
	public string ativo;
	public string idAnotador;
	public string idProfessor;
	public string professor;
	public string email;
    public Professor professorObj;
    
}



[Serializable]
public class Professor
{
   
    public string idProfessor;
	public string dataCadastro;
	public string professor;
	public string email;
	public string telefone;
	public string endereco;
	public string bairro;
	public string cidade;
	public string estado;
	public string cep;
	public string denominacao;
	public string observacoes;
	public string imagem;
	public string ativo;
	public string idAnotador;
	public string idUsuario;
	public string idCliente;
	public string cliente;
    public Usuario usuario;
}
[Serializable]
public class Usuario
{
    public string idUsuario;
    public string dataCadastro;
    public string nome;
    public string email;
    public string imagem;
    public string celular;
    public string cpf;
    public string senha;
    public string acessos;
    public string dataAcesso;
    public string ipAcesso;
    public string ativo;
    public string idAnotador;
    public string idPerfil;
    public string perfil;
}

[Serializable]
public class Cliente
{
    
    public string idCliente;
    public string dataCadastro;
	public string cliente;
	public string email;
	public string telefone;
	public string endereco;
	public string bairro;
	public string cidade;
	public string estado;
	public string cep;
	public string denominacao;
	public string observacoes;
	public string imagem;
	public string ativo;
	public string idAnotador;
	public string idUsuario;
	public Usuario usuario;
    
}

[Serializable]
public class JogoTipo
{
    public string idJogoTipo;
    public string dataCadastro;
    public string jogoTipo;
    public string observacoes;
    public string maximoFases;
    public string imagem;
    public string frase01;
    public string frase02;
    public string frase03;
    public string ativo;
    public string idAnotador;
}

[Serializable]
public class Fases
{
    public string idJogoFase;
    public string dataCadastro;
    public string jogoFase;
    public string numero;
    public string tipo;
    public string tipoTela;
    public string imagem;
    public string frase01;
    public string frase02;
    public string frase03;
    public string resposta;
    public string resp01;
    public string resp02;
    public string resp03;
    public string resp04;
    public string ativo;
    public string idAnotador;
    public string idProjeto;
    public string idJogoTela;
    public string jogoTela;
    public string quantidade;
}
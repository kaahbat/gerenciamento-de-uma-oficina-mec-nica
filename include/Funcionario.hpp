#pragma once
#include <iostream>
#include <vector>
#include "../include/Clientes.hpp"
#include "../include/OrdemServico.hpp"

using namespace std;

//Classe base Funcionario que representa um funcionário no sistema
class Funcionario {
protected:
    string login;               //Login do funcionário
    string senha;               //Senha do funcionário
    vector<Clientes*> clientes; //Vetor de ponteiros para Clientes associados ao funcionário
    vector<OrdemServico*> servicos; //Vetor de ponteiros para Ordens de Serviço associadas ao funcionário

private:
    int id;                     //Identificador único do funcionário
    string nome;                //Nome do funcionário
    string cpf;                 //CPF do funcionário
    string telefone;            //Telefone do funcionário
    string email;               //Email do funcionário

public:
    //Construtor que inicializa os atributos do funcionário
    Funcionario(
        const string& login,
        const string& senha,
        int id,
        string nome,
        string cpf,
        string telefone,
        string email
    );

    //Destrutor
    ~Funcionario();

    //Método virtual para autenticar o funcionário, comparando login e senha
    virtual bool autenticar(string& login, string& senha);

    //Método virtual puro que retorna o tipo de funcionário
    virtual string getTipo() const = 0;

    //Setters e Getters para os atributos do funcionário
    void setLogin(string login);
    string getLogin();
    void setSenha(string senha);
    string getSenha();
    void setId(int id);
    int getId();
    void setNome(string nome);
    string getNome();
    void setCpf(string cpf);
    string getCpf();
    void setTelefone(string telefone);
    string getTelefone();
    void setEmail(string email);
    string getEmail();

    //Método que imprime os dados do funcionário no console
    void print();
};

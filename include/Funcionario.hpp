#pragma once
#include <iostream>
#include <vector>
#include "../include/Clientes.hpp"
#include "../include/OrdemServico.hpp"


using namespace std;

class Funcionario {

protected:
    string login;
    string senha;
    vector<Clientes> clientes;
    vector<OrdemServico> servicos;   
    
private:
    int id;
    string nome;
    string cpf;
    string telefone;
    string email;

    
public:
    Funcionario(
        const string& login,
        const string& senha,
        int id,
        string nome,
        string cpf,
        string telefone,
        string email
    );
    ~Funcionario();
    virtual bool autenticar(string& login, string& senha); 
    virtual string getTipo() const = 0;
    
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

    
        
    void print();


};
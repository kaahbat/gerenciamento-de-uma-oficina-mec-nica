#pragma once
#include <iostream>
#include "../include/Clientes.hpp"
#include "../include/OrdemServico.hpp"
#include <string>
#include <vector>
using namespace std;


class Funcionario {

protected:
    string login;
    string senha;
    vector<Clientes*> clientes; 
    vector<OrdemServico*> ordemServicos;   
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
    virtual void addCliente(Clientes cliente) ;

    virtual vector<Clientes*> getClientes();
    
    virtual void addOrdemServico(OrdemServico* ordemServico) ;
    virtual vector<OrdemServico*> getOrdemServico();
    virtual void removeCliente(int id);
    virtual int getQuantosClientes() ;

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
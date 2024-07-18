#pragma once
#include <iostream>
using namespace std;

class Funcionario {

private:

    int id;
    string nome;
    string cpf;
    string telefone;
    string email;

    
public:
    Funcionario();
    ~Funcionario(); 
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
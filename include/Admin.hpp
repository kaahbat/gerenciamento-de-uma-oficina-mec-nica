#pragma once
#include "Funcionario.hpp"

using namespace std;

//Definição da classe Admin, que herda de Funcionario
class Admin : public Funcionario {

public:
    //Construtor da classe Admin, inicializa com login, senha, id, nome, cpf, telefone e email
    Admin(
        const string& login,
        const string& senha,       
        int id,
        string nome,
        string cpf,
        string telefone,
        string email
    );

    //Destrutor da classe Admin
    ~Admin();

    //Método sobrescrito que retorna o tipo de funcionário (Admin)
    string getTipo() const override;

    
};
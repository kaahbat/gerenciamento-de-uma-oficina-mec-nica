#pragma once
#include "Funcionario.hpp"


using namespace std;
class Admin : public Funcionario{

public:
    Admin(
        const string& login,
        const string& senha,       
        int id,
        string nome,
        string cpf,
        string telefone,
        string email
    );
    ~Admin();
    string getTipo() const override;
    void gerenciarSistema() const;
};
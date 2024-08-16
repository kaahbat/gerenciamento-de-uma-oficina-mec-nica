#pragma once
#include "Funcionario.hpp"
#include "OrdemServico.hpp"


class Mecanicos : public Funcionario {

private:
    

public:
    Mecanicos(
        const string& login,
        const string& senha,
        int id,
        string nome,
        string cpf,
        string telefone,
        string email
    );
    ~Mecanicos();
    string getTipo() const override;
    vector<OrdemServico*> getOrdemServico();
    int getQuantosOrdemServico();
    
    
};

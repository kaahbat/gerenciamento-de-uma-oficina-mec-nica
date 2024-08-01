#pragma once
#include "Funcionario.hpp"
#include "OrdemServico.hpp"


class Mecanicos : public Funcionario {

private:
    

public:
    Mecanicos(
        int id,
        string nome,
        string cpf,
        string telefone,
        string email
    );
    ~Mecanicos();
    
    
    
};

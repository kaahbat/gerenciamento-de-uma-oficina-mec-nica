#pragma once
#include "Funcionario.hpp"

class Mecanicos : public Funcionario {

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

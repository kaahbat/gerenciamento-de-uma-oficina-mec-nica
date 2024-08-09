#pragma once
#include <vector>
#include "Funcionario.hpp"
class SistemaLogin {
private:
    vector<Funcionario*> usuarios;
    
public:
    SistemaLogin();
    void addUsuario(Funcionario* usuario);
    Funcionario* autenticar(string& login, string& senha) const;
    ~SistemaLogin();
};
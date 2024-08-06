#pragma once
#include <vector>
#include "Funcionario.hpp"
class SistemaLogin {
private:
    vector<Funcionario*> usuarios;
    
public:
    SistemaLogin();
    void addUsuario(Funcionario* usuario);
    void removeUsuario(string login);
    Funcionario* autenticar(const string login, const string senha) const;
    ~SistemaLogin();
};
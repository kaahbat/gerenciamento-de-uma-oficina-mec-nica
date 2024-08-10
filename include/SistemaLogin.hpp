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
    Funcionario* getUsuario(int id) const;
    vector<Funcionario*> getUsuarios() const;
    vector<Funcionario*> getMecanicos() const;
    vector<Funcionario*> getVendedores() const;
    void setUsuario(int id, Funcionario* usuario);
    int getQuantosVendedores();
    int getQuantosMecanicos();
    ~SistemaLogin();

};
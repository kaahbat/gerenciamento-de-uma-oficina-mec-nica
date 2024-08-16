#pragma once
#include <vector>
#include "Funcionario.hpp"
class SistemaLogin {
private:
    vector<Funcionario*> usuarios;
    vector<Clientes*> clientes;
    vector<OrdemServico*> servicos;   
    
public:
    SistemaLogin();
    void addUsuario(Funcionario* usuario);
    Funcionario* autenticar(string& login, string& senha) const;
    //Funcionario* getUsuario(int id) const;
    vector<Funcionario*> getUsuarios() const;
    vector<Funcionario*> getMecanicos() const;
    vector<Funcionario*> getVendedores() const;
    void setUsuario(int id, Funcionario* usuarioEditado);
    int getQuantosVendedores();
    int getQuantosMecanicos();
    int getQuantosUsuarios();
    void removeUsuario(int id);
    ~SistemaLogin();
    

};
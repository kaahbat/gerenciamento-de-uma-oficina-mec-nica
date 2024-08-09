#include "SistemaLogin.hpp"

SistemaLogin::SistemaLogin() {

}

void SistemaLogin::addUsuario(Funcionario *usuario)
{
    usuarios.push_back(usuario);
}

Funcionario *SistemaLogin::autenticar(string& login, string& senha) const 
{
    for (const auto& u : usuarios) {
        if (u->autenticar(login, senha)) {
            return u;
        }
    }
    return nullptr;
}


SistemaLogin::~SistemaLogin() {
    
}


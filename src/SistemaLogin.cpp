#include "SistemaLogin.hpp"

SistemaLogin::SistemaLogin() {

}

void SistemaLogin::addUsuario(Funcionario *usuario)
{
    usuarios.push_back(usuario);
}

void SistemaLogin::removeUsuario(string login)
{
    
}

Funcionario *SistemaLogin::autenticar(const string& login, const string& senha) const
{
    for (const auto& u : usuarios) {
        if (u->autenticar(login, senha)) {
            return u;
        }
    }
    return nullptr;
}

SistemaLogin::~SistemaLogin() {
    for (auto& u : usuarios) {
        delete u;
    }
    usuarios.clear();
}


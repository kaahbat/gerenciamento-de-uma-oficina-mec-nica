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
/*
Funcionario *SistemaLogin::getUsuario(int id) const
{
    for (const auto& u : usuarios) {
        if (u->getId() == id) {
            return u;
        }
    }
    return nullptr;
}*/

SistemaLogin::~SistemaLogin() {
    
}

vector<Funcionario *> SistemaLogin::getUsuarios() const
{
    return usuarios;
}

vector<Funcionario *> SistemaLogin::getMecanicos() const
{
    vector<Funcionario *> mecanicos;
    for (const auto& u : usuarios) {
        if (u->getTipo() == "Mecanico") {
            mecanicos.push_back(u);
        }
    }
    return mecanicos;
}

vector<Funcionario *> SistemaLogin::getVendedores() const
{
    vector<Funcionario *> vendedores;
    for (const auto& u : usuarios) {
        if (u->getTipo() == "Vendedor") {
            vendedores.push_back(u);
        }
    }
    return vendedores;
}



/// tirar essa funçao
void SistemaLogin::setUsuario(int id, Funcionario *usuarioEditado)
{
    for(auto& usuario : usuarios) {
        if(usuario->getId() == id) {
            printf("Usuario encontrado\n");
            printf("Usuario editado: %s\n", usuarioEditado->getNome().c_str());
            printf("Usuario original: %s\n", usuario->getNome().c_str());
            printf("Usuario original: %s\n", usuario->getTipo().c_str());
            printf("Usuario editado: %s\n", usuarioEditado->getTipo().c_str());
            usuario = usuarioEditado;
        }
    }
}


int SistemaLogin::getQuantosVendedores()
{
    int cont = 0;
    for (const auto& u : usuarios) {
        if (u->getTipo() == "Vendedor") {
            cont++;
        }
    }
    return cont;
}

int SistemaLogin::getQuantosMecanicos()
{
    int cont = 0;
    for (const auto& u : usuarios) {
        if (u->getTipo() == "Mecanico") {
            cont++;
        }
    }
    return cont;
}

int SistemaLogin::getQuantosUsuarios()
{
    

    return usuarios.size();
}

void SistemaLogin::removeUsuario(int id)
{
    for (auto it = usuarios.begin(); it != usuarios.end(); it++) {
        if ((*it)->getId() == id) {
            usuarios.erase(it);
            break;
        }
    }
}

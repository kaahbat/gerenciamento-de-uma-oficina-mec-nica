#include "SistemaLogin.hpp"

//Construtor padrão, inicializa a lista de usuários
SistemaLogin::SistemaLogin() {
}

//Adiciona um novo usuário ao sistema
void SistemaLogin::addUsuario(Funcionario* usuario) {
    usuarios.push_back(usuario);
}

//Tenta autenticar um usuário com base no login e senha fornecidos
Funcionario* SistemaLogin::autenticar(string& login, string& senha) const {
    for (const auto& u : usuarios) {
        if (u->autenticar(login, senha)) {
            return u;
        }
    }
    return nullptr; //Retorna nullptr se a autenticação falhar
}

//Destrutor
SistemaLogin::~SistemaLogin() {}

//Retorna a lista completa de usuários no sistema
vector<Funcionario*> SistemaLogin::getUsuarios() const {
    return usuarios;
}

//Retorna uma lista com todos os usuários do tipo "Mecanico"
vector<Funcionario*> SistemaLogin::getMecanicos() const {
    vector<Funcionario*> mecanicos;
    for (const auto& u : usuarios) {
        if (u->getTipo() == "Mecanico") {
            mecanicos.push_back(u);
        }
    }
    return mecanicos;
}

//Retorna uma lista com todos os usuários do tipo "Vendedor"
vector<Funcionario*> SistemaLogin::getVendedores() const {
    vector<Funcionario*> vendedores;
    for (const auto& u : usuarios) {
        if (u->getTipo() == "Vendedor") {
            vendedores.push_back(u);
        }
    }
    return vendedores;
}

//Atualiza as informações de um usuário com base no ID fornecido
void SistemaLogin::setUsuario(int id, Funcionario* usuarioEditado) {
    for (auto& usuario : usuarios) {
        if (usuario->getId() == id) {
            usuario = usuarioEditado;
        }
    }
}

//Retorna o número de usuários do tipo "Vendedor" no sistema
int SistemaLogin::getQuantosVendedores() {
    int cont = 0;
    for (const auto& u : usuarios) {
        if (u->getTipo() == "Vendedor") {
            cont++;
        }
    }
    return cont;
}

//Retorna o número de usuários do tipo "Mecanico" no sistema
int SistemaLogin::getQuantosMecanicos() {
    int cont = 0;
    for (const auto& u : usuarios) {
        if (u->getTipo() == "Mecanico") {
            cont++;
        }
    }
    return cont;
}

//Retorna o número total de usuários no sistema
int SistemaLogin::getQuantosUsuarios() {
    return usuarios.size();
}

//Remove um usuário do sistema com base no ID fornecido
void SistemaLogin::removeUsuario(int id) {
    for (auto it = usuarios.begin(); it != usuarios.end(); it++) {
        if ((*it)->getId() == id) {
            usuarios.erase(it);
            break;
        }
    }
}
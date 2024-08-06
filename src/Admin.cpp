#include "Admin.hpp"

Admin::Admin(const string& login,const string& senha ,int id, string nome, string cpf, string telefone, string email): Funcionario(login,senha,id, nome, cpf, telefone, email){
}

Admin::~Admin()
{
}

string Admin::getTipo() const {
    return "Admin";
}

void Admin::gerenciarSistema() const {
    std::cout << "Admin gerenciando o sistema." << std::endl;
}
#include "Admin.hpp"

//Construtor que utiliza o construtor da classe base Funcionario para inicializar os atributos
Admin::Admin(const string& login,const string& senha ,int id, string nome, string cpf, string telefone, string email)
    : Funcionario(login, senha, id, nome, cpf, telefone, email) {
}

//Destrutor da classe Admin, aqui ele é implementado mas não realiza nenhuma operação específica
Admin::~Admin() {
}

//Método que retorna a string "Admin", identificando o tipo do funcionário
string Admin::getTipo() const {
    return "Admin";
}


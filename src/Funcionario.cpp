#include "Funcionario.hpp"

//Construtor que inicializa os atributos de login, senha, e outros dados do funcionário
Funcionario::Funcionario(const string& login, const string& senha, int id, string nome, string cpf, string telefone, string email) 
    : login(login), senha(senha)
{  
    this->id = id;
    this->nome = nome;
    this->cpf = cpf;
    this->telefone = telefone;
    this->email = email;
}

//Método que verifica se o login e senha fornecidos correspondem aos do funcionário
bool Funcionario::autenticar(string &login, string &senha) {
    return (this->login == login && this->senha == senha);
}

//Destrutor da classe Funcionario, atualmente não realiza nenhuma operação específica
Funcionario::~Funcionario() {
}

//Implementação dos setters e getters
void Funcionario::setLogin(string login) {
    this->login = login;
}

string Funcionario::getLogin() {
    return login;
}

void Funcionario::setSenha(string senha) {
    this->senha = senha;
}

string Funcionario::getSenha() {
    return senha;
}

void Funcionario::setId(int id) {
    this->id = id;
}

int Funcionario::getId() {
    return id;
}

void Funcionario::setNome(string nome) {
    this->nome = nome;
}

string Funcionario::getNome() {
    return nome;
}

void Funcionario::setCpf(string cpf) {
    this->cpf = cpf;
}

string Funcionario::getCpf() {
    return cpf;
}

void Funcionario::setTelefone(string telefone) {
    this->telefone = telefone;
}

string Funcionario::getTelefone() {
    return telefone;
}

void Funcionario::setEmail(string email) {
    this->email = email;
}

string Funcionario::getEmail() {
    return email;
}

//Método que imprime os dados do funcionário no console
void Funcionario::print() {
    cout << "ID: " << id << endl;
    cout << "Nome: " << nome << endl;
    cout << "CPF: " << cpf << endl;
    cout << "Telefone: " << telefone << endl;
    cout << "Email: " << email << endl;  
}
#include "Funcionario.hpp"

Funcionario::Funcionario() {

}

Funcionario::~Funcionario() {

}

void Funcionario::setId(int id)
{
    this->id = id;
}

int Funcionario::getId()
{
    return 0;
}

void Funcionario::setNome(string nome)
{
    this->nome = nome;
}

string Funcionario::getNome()
{
    return string();
}

void Funcionario::setCpf(string cpf)
{
    this->cpf = cpf;
}

string Funcionario::getCpf()
{
    return string();
}

void Funcionario::setTelefone(string telefone)
{
    this->telefone = telefone;
}

string Funcionario::getTelefone()
{
    return string();
}

void Funcionario::setEmail(string email)
{
    this->email = email;
}

string Funcionario::getEmail()
{
    return string();
}

void Funcionario::print()
{
    cout << "ID: " << id << endl;
    cout << "Nome: " << nome << endl;
    cout << "CPF: " << cpf << endl;
    cout << "Telefone: " << telefone << endl;
    cout << "Email: " << email << endl;  
}

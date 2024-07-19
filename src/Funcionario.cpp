#include "Funcionario.hpp"

Funcionario::Funcionario(int id, string nome, string cpf, string telefone, string email)
{
    this->id = id;
    this->nome = nome;
    this->cpf = cpf;
    this->telefone = telefone;
    this->email = email;
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

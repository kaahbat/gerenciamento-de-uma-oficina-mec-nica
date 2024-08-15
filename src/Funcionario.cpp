#include "Funcionario.hpp"

Funcionario::Funcionario(const string& login,const string& senha ,int id, string nome, string cpf, string telefone, string email) : login(login),senha(senha)
{  
    this->id = id;
    this->nome = nome;
    this->cpf = cpf;
    this->telefone = telefone;
    this->email = email;
}


bool Funcionario::autenticar(string &login, string &senha)
{
    return (this->login == login && this->senha == senha);
}

void Funcionario::addCliente(Clientes cliente)
{
}

vector<Clientes *> Funcionario::getClientes()
{
    
}

void Funcionario::addOrdemServico(OrdemServico *ordemServico)
{
}

Funcionario::~Funcionario() {
    
}



void Funcionario::setLogin(string login)
{
    this->login = login;
}

string Funcionario::getLogin()
{
    return login;
}

void Funcionario::setSenha(string senha)
{
    this->senha = senha;
}

string Funcionario::getSenha()
{
    return senha;
}


void Funcionario::setId(int id)
{
    this->id = id;
}

int Funcionario::getId()
{
    return id;
}

void Funcionario::setNome(string nome)
{
    this->nome = nome;
}

string Funcionario::getNome()
{
    return nome;
}

void Funcionario::setCpf(string cpf)
{
    this->cpf = cpf;
}

string Funcionario::getCpf()
{
    return cpf;
}

void Funcionario::setTelefone(string telefone)
{
    this->telefone = telefone;
}

string Funcionario::getTelefone()
{
    return telefone;
}

void Funcionario::setEmail(string email)
{
    this->email = email;
}

string Funcionario::getEmail()
{    
    return email;
}

void Funcionario::print()
{
    cout << "ID: " << id << endl;
    cout << "Nome: " << nome << endl;
    cout << "CPF: " << cpf << endl;
    cout << "Telefone: " << telefone << endl;
    cout << "Email: " << email << endl;  
}

#include "Mecanicos.hpp"


Mecanicos::Mecanicos(const string& login,const string& senha, int id, string nome, string cpf, string telefone, string email) : Funcionario(login,senha,id, nome, cpf, telefone, email)
{
}

string Mecanicos::getTipo() const
{
     return "Mecanico";
}

Mecanicos::~Mecanicos()
{
}

#include "Vendedores.hpp"


Vendedores::Vendedores(const string& login,const string& senha,int id, string nome, string cpf, string telefone, string email): Funcionario(login, senha, id, nome, cpf, telefone, email){

}

Vendedores::~Vendedores() {

}

void Vendedores::addCliente(const Clientes & cliente)
{
    clientes.push_back(cliente);
}

void Vendedores::addOrdemServico(const OrdemServico & ordemServico)
{
    servicos.push_back(ordemServico);
}


vector<Clientes> Vendedores::getClientes()
{
    return vector<Clientes>();
}

vector<OrdemServico> Vendedores::getOrdemServico()
{
    return vector<OrdemServico>();
}

int Vendedores::getQuantasOrdens()
{
    return ordemServicos.size();
}

void Vendedores::removeCliente(int id)
{
    clientes.erase(clientes.begin() + id);
}

void Vendedores::removeOrdemServico(int id)
{
    servicos.erase(servicos.begin() + id);
}

string Vendedores::getTipo() const
{
    return "Vendedor";
}

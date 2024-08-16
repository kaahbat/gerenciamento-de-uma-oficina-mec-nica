#include "Vendedores.hpp"


Vendedores::Vendedores(const string& login,const string& senha,int id, string nome, string cpf, string telefone, string email): Funcionario(login, senha, id, nome, cpf, telefone, email){

}

Vendedores::~Vendedores() {

}



int Vendedores::getQuantosClientes()
{
    return clientes.size();
}

int Vendedores::getQuantosOrdemServico()
{
    return servicos.size();
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

void Vendedores::addCliente(Clientes *cliente)
{
    clientes.push_back(cliente);
}

void Vendedores::addOrdemServico(OrdemServico *ordem)
{
    servicos.push_back(ordem);
}

vector<Clientes *> Vendedores::getClientes()
{
    return clientes;
}

vector<OrdemServico *> Vendedores::getOrdemServico()
{
    return servicos;
}





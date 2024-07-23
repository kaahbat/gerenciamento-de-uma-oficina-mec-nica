#include "Vendedores.hpp"


Vendedores::Vendedores(int id, string nome, string cpf, string telefone, string email): Funcionario(id, nome, cpf, telefone, email){

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

void Vendedores::removeCliente(int id)
{
    clientes.erase(clientes.begin() + id);
}

void Vendedores::removeOrdemServico(int id)
{
    servicos.erase(servicos.begin() + id);
}

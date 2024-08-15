#include "Vendedores.hpp"



Vendedores::Vendedores(const string& login,const string& senha,int id, string nome, string cpf, string telefone, string email): Funcionario(login, senha, id, nome, cpf, telefone, email){

}

Vendedores::~Vendedores() {

}




string Vendedores::getTipo() const
{
    return "Vendedor";
}

void Vendedores::addCliente(Clientes cliente)
{
    clientes.push_back(&cliente);
}

vector<Clientes *> Vendedores::getClientes()
{
    return clientes;
}

void Vendedores::addOrdemServico(OrdemServico *ordemServico)
{
    ordemServicos.push_back(ordemServico);
}

vector<OrdemServico *> Vendedores::getOrdemServico()
{
    return ordemServicos;
}

void Vendedores::removeCliente(int id)
{
    for (auto it = clientes.begin(); it != clientes.end(); it++) {
        if ((*it)->getId() == id) {
            clientes.erase(it);
            break;
        }
    }
}

int Vendedores::getQuantosClientes()
{
    return clientes.size();
}


#include "Vendedores.hpp"


Vendedores::Vendedores(int id, string nome, string cpf, string telefone, string email): Funcionario(id, nome, cpf, telefone, email){

}

Vendedores::~Vendedores() {


}

void Vendedores::addCliente(const Clientes & cliente)
{
}

void Vendedores::addServico(const Servicos & servico)
{
}

vector<Clientes> Vendedores::getClientes()
{
return vector<Clientes>();
}

vector<Servicos> Vendedores::getServicos()
{
return vector<Servicos>();
}

void Vendedores::removeCliente(int id)
{
}

void Vendedores::removeServico(int id)
{
}

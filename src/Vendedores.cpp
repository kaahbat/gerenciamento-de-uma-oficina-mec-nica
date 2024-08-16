#include "Vendedores.hpp"

//Implementação do construtor da classe Vendedores
Vendedores::Vendedores(const string& login, const string& senha, int id, string nome, string cpf, string telefone, string email)
    : Funcionario(login, senha, id, nome, cpf, telefone, email) {
}

//Implementação do destrutor da classe Vendedores
Vendedores::~Vendedores() {
    //Não há necessidade de lógica adicional no destrutor
}

//Retorna o número de clientes associados ao vendedor
int Vendedores::getQuantosClientes() {
    return clientes.size();
}

//Retorna o número de ordens de serviço associadas ao vendedor
int Vendedores::getQuantosOrdemServico() {
    return servicos.size();
}

//Remove um cliente pelo índice (ID) no vetor
void Vendedores::removeCliente(int id) {
    clientes.erase(clientes.begin() + id);
}

//Remove uma ordem de serviço pelo índice (ID) no vetor
void Vendedores::removeOrdemServico(int id) {
    servicos.erase(servicos.begin() + id);
}

//Retorna o tipo do funcionário, neste caso, "Vendedor"
string Vendedores::getTipo() const {
    return "Vendedor";
}

//Adiciona um cliente ao vetor de clientes
void Vendedores::addCliente(Clientes *cliente) {
    clientes.push_back(cliente);
}

//Adiciona uma ordem de serviço ao vetor de ordens de serviço
void Vendedores::addOrdemServico(OrdemServico *ordem) {
    servicos.push_back(ordem);
}

//Retorna o vetor de clientes associados ao vendedor
vector<Clientes *> Vendedores::getClientes() {
    return clientes;
}

//Retorna o vetor de ordens de serviço associadas ao vendedor
vector<OrdemServico *> Vendedores::getOrdemServico() {
    return servicos;
}
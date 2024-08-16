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
int Vendedores::getQuantosClientes( SistemaLogin& sistema) {
    return sistema.clientes.size();
}

//Retorna o número de ordens de serviço associadas ao vendedor
int Vendedores::getQuantosOrdemServico( SistemaLogin& sistema) {
    return sistema.servicos.size();
}

//Remove um cliente pelo índice (ID) no vetor
void Vendedores::removeCliente(int id, SistemaLogin& sistema) {
    sistema.clientes.erase(sistema.clientes.begin() + id);
}

//Remove uma ordem de serviço pelo índice (ID) no vetor
void Vendedores::removeOrdemServico(int id ,SistemaLogin& sistema) {
    sistema.servicos.erase(sistema.servicos.begin() + id);
}


//Retorna o tipo do funcionário, neste caso, "Vendedor"
string Vendedores::getTipo() const {
    return "Vendedor";
}

//Adiciona um cliente ao vetor de clientes
void Vendedores::addCliente(Clientes *cliente, SistemaLogin& sistema) {
    sistema.clientes.push_back(cliente);
}

//Adiciona uma ordem de serviço ao vetor de ordens de serviço
void Vendedores::addOrdemServico(OrdemServico *ordem ,SistemaLogin& sistema) {
    sistema.servicos.push_back(ordem);
}

//Retorna o vetor de clientes associados ao vendedor
vector<Clientes *> Vendedores::getClientes( SistemaLogin& sistema) {
    return sistema.clientes;
}

//Retorna o vetor de ordens de serviço associadas ao vendedor
vector<OrdemServico *> Vendedores::getOrdemServico( SistemaLogin& sistema) {
    return sistema.servicos;
}
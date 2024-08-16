#include "Mecanicos.hpp"

//Construtor que inicializa os atributos do mecânico utilizando o construtor da classe base Funcionario
Mecanicos::Mecanicos(const string& login, const string& senha, int id, string nome, string cpf, string telefone, string email) 
    : Funcionario(login, senha, id, nome, cpf, telefone, email) {}

//Método que retorna o tipo de funcionário como "Mecanico"
string Mecanicos::getTipo() const {
    return "Mecanico";
}

//Método que retorna o vetor de Ordens de Serviço associadas ao mecânico
vector<OrdemServico*> Mecanicos::getOrdemServico(SistemaLogin& sistema) {
    return sistema.servicos;
}

//Método que retorna o número de Ordens de Serviço associadas ao mecânico
int Mecanicos::getQuantosOrdemServico(SistemaLogin& sistema) {
    return sistema.servicos.size();
}

//Destrutor da classe Mecanicos, atualmente não realiza nenhuma operação específica
Mecanicos::~Mecanicos() {}
#include "OrdemServico.hpp"

//Construtor que inicializa os atributos da ordem de serviço
OrdemServico::OrdemServico(int id, string data, string descricao, string status, string valor, string veiculo, string cliente) {
    this->id = id;
    this->data = data;
    this->descricao = descricao;
    this->status = status;
    this->valor = valor;
    this->veiculo = veiculo;
    this->cliente = cliente;
}

//Destrutor da classe OrdemServico, atualmente não realiza nenhuma operação específica
OrdemServico::~OrdemServico() {}

//Implementação dos getters
int OrdemServico::getId() {
    return this->id;
}

string OrdemServico::getData() {
    return this->data;
}

string OrdemServico::getDescricao() {
    return this->descricao;
}

string OrdemServico::getStatus() {
    return this->status;
}

string OrdemServico::getValor() {
    return this->valor;
}

string OrdemServico::getVeiculo() {
    return this->veiculo;
}

string OrdemServico::getCliente() {
    return this->cliente;
}

//Implementação dos setters
void OrdemServico::setId(int id) {
    this->id = id;
}

void OrdemServico::setData(string data) {
    this->data = data;
}

void OrdemServico::setDescricao(string descricao) {
    this->descricao = descricao;
}

void OrdemServico::setStatus(string status) {
    this->status = status;
}

void OrdemServico::setValor(string valor) {
    this->valor = valor;
}

void OrdemServico::setVeiculo(string veiculo) {
    this->veiculo = veiculo;
}

void OrdemServico::setCliente(string cliente) {
    this->cliente = cliente;
}

//Adiciona uma nova peça à lista de peças da ordem de serviço
void OrdemServico::addPeca(string peca) {
    this->pecas.push_back(peca);
}

//Adiciona um novo serviço à lista de serviços da ordem de serviço
void OrdemServico::addServico(string servico) {
    this->servicos.push_back(servico);
}
#include "Servicos.hpp"

Servicos::Servicos( int id, string descricao, float valor, string data, string status) {
    this->id = id;
    this->descricao = descricao;
    this->valor = valor;
    this->data = data;
    this->status = status;

}

Servicos::~Servicos() {

}

void Servicos::setId(int id) {
    this->id = id;
}

void Servicos::setDescricao(string descricao) {
    this->descricao = descricao;
}

void Servicos::setValor(float valor) {
    this->valor = valor;
}

void Servicos::setData(string data) {
    this->data = data;
}

void Servicos::setStatus(string status) {
    this->status = status;
}

int Servicos::getId() {
    return this->id;
}

string Servicos::getDescricao() {
    return this->descricao;
}

float Servicos::getValor() {
    return this->valor;
}

string Servicos::getData() {
    return this->data;
}

string Servicos::getStatus() {
    return this->status;
}

void Servicos::execultarServico()
{
    cout << "Servico executado" << endl;
    setStatus("Executado");

}

void Servicos::finalizarServico()
{
    cout << "Servico finalizado" << endl;
    setStatus("Finalizado");
}

void Servicos::cancelarServico()
{
    cout << "Servico cancelado" << endl;
    setStatus("Cancelado");
}

void Servicos::print()
{
    cout << "ID: " << this->id << endl;
    cout << "Descricao: " << this->descricao << endl;
    cout << "Valor: " << this->valor << endl;
    cout << "Data: " << this->data << endl;
    cout << "Status: " << this->status << endl;
}

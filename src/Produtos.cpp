#include "Produtos.hpp"

Produtos::Produtos( int id, string nome, string descricao, float valor, int quantidade) {
    this->id = id;
    this->nome = nome;
    this->descricao = descricao;
    this->valor = valor;
    this->quantidade = quantidade;
}

Produtos::~Produtos() {

}

void Produtos::setId(int id)
{
    this->id = id;
}

int Produtos::getId()
{
    return 0;
}

void Produtos::setNome(string nome)
{   
    this->nome = nome;  
}

string Produtos::getNome()
{
    return string();
}

void Produtos::setDescricao(string descricao)
{
    this->descricao = descricao;
}

string Produtos::getDescricao()
{
    return string();
}

void Produtos::setValor(float valor)
{
    this->valor = valor;
}

float Produtos::getValor()
{
    return 0.0f;
}

void Produtos::setQuantidade(int quantidade)
{
    this->quantidade = quantidade;
}

int Produtos::getQuantidade()
{
    return 0;
}

void Produtos::print()
{
    cout << "ID: " << id << endl;
    cout << "Nome: " << nome << endl;
    cout << "Descrição: " << descricao << endl;
    cout << "Valor: " << valor << endl;
    cout << "Quantidade: " << quantidade << endl;
}

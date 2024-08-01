#pragma once

#include <string>
#include <iostream>
using namespace std;
class Produtos {

private:
    
    int id;
    string nome;
    string descricao;
    float valor;
    int quantidade;

public:
    Produtos(
        int id,
        string nome,
        string descricao,
        float valor,
        int quantidade
    );
    ~Produtos();

    void setId(int id);
    int getId();
    void setNome(string nome);
    string getNome();
    void setDescricao(string descricao);
    string getDescricao();
    void setValor(float valor);
    float getValor();
    void setQuantidade(int quantidade);
    int getQuantidade();
    void print();


};
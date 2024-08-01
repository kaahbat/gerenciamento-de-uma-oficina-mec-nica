#pragma once
#include <string>
#include <iostream>
using namespace std;



class Servicos {

private:
    int id;
    string descricao;
    float valor;
    string data;
    string status;

public:
    Servicos(
        int id,
        string descricao,
        float valor,
        string data,
        string status
    );
    ~Servicos();
    void setId(int id);
    void setDescricao(string descricao);
    void setValor(float valor);
    void setData(string data);
    void setStatus(string status);
    int getId();
    string getDescricao();
    float getValor();
    string getData();
    string getStatus();

    void execultarServico();
    void finalizarServico();
    void cancelarServico();

    void print();

};
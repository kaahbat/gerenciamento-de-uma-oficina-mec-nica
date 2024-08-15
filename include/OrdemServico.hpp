#pragma once
#include <iostream>
#include <string>
#include "../include/Servicos.hpp"

#include <vector>
using namespace std;


class OrdemServico {
    private:
        int id;
        string data;
        string descricao;
        vector<Servicos> servicos;
public:
    OrdemServico(
        int id,
        string data,
        string descricao
       
    );
    void addServico(const Servicos& servico);
    void removeServico(int id);
    vector<Servicos> getServicos();
    bool execultarOrdemServico();
    bool finalizarOrdemServico();
    bool cancelarOrdemServico();

    void print();


    ~OrdemServico();
};
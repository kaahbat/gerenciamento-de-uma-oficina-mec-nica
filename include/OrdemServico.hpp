#pragma once
#include <iostream>
#include <string>
#include "mecanicos.hpp"
#include "produtos.hpp"
#include "clientes.hpp"
#include "servicos.hpp"

class OrdemServico {
    private:
        int id;
        string data;
        string descricao;
        string status;
        string cliente;
        string veiculo;
        string valorTotal;
        vector<Servicos> servicos;
public:
    OrdemServico(
        int id,
        string data,
        string descricao,
        string status,
        string cliente,
        string veiculo

       
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
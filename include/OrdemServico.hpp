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
        vector<Servicos> servicos;
public:
    OrdemServico(
        int id,
        string data,
        string descricao
       
    );
    ~OrdemServico();
};
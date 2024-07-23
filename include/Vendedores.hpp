#pragma once
#include "Funcionario.hpp"
#include "Clientes.hpp"
#include "Veiculos.hpp"
#include "OrdemServico.hpp"
#include <iostream>
#include <string>
#include <vector>
class Vendedores : public Funcionario {

private:
    vector<Clientes> clientes;
    vector<OrdemServico> servicos;
    

public:
    Vendedores(int id, string nome, string cpf, string telefone, string email);
    ~Vendedores();
    void addCliente(const Clientes& cliente);
    void addOrdemServico(const OrdemServico& ordemServico);
    vector<Clientes> getClientes();
    vector<OrdemServico> getOrdemServico();
    void removeCliente(int id);
    void removeOrdemServico(int id);
    


    
};
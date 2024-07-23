#pragma once
#include "Funcionario.hpp"
#include "Clientes.hpp"
#include "Veiculos.hpp"
#include "Servicos.hpp"
#include <iostream>
#include <string>
#include <vector>
class Vendedores : public Funcionario {

private:
    vector<Clientes> clientes;
    vector<Servicos> servicos;
    

public:
    Vendedores(int id, string nome, string cpf, string telefone, string email);
    ~Vendedores();
    void addCliente(const Clientes& cliente);
    void addServico(const Servicos& servico);
    vector<Clientes> getClientes();
    vector<Servicos> getServicos();
    void removeCliente(int id);
    void removeServico(int id);
    


    
};
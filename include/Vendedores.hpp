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
    
    

public:
    Vendedores(
        const string& login,
        const string& senha,
        int id, 
        string nome, 
        string cpf, 
        string telefone, 
        string email
    );
    ~Vendedores();
    string getTipo() const override;
    
    void addCliente(const Clientes& cliente);
    void addOrdemServico(const OrdemServico& ordemServico);
    vector<Clientes> getClientes();
    vector<OrdemServico> getOrdemServico();
    void removeCliente(int id);
    void removeOrdemServico(int id);
    


    
};
#pragma once
#include "../include/Funcionario.hpp"
#include "../include/Clientes.hpp"
#include "../include/OrdemServico.hpp"

// Add the include for OrdemServico.hpp
#include "../include/OrdemServico.hpp"




#include <iostream>
#include <string>
#include <vector>
class Vendedores : public Funcionario {


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
    
    void addCliente(Clientes cliente);
    vector<Clientes*> getClientes();
    void addOrdemServico(OrdemServico* ordemServico);
    vector<OrdemServico*> getOrdemServico();
    int getQuantasOrdens();
    void removeCliente(int id);
    int getQuantosClientes();
    

    


    
};
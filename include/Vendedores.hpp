#pragma once
#include "Funcionario.hpp"
#include "Clientes.hpp"
#include "Veiculos.hpp"
#include "OrdemServico.hpp"
#include <iostream>
#include <string>
#include <vector>

class Vendedores : public Funcionario {

public:
    //Construtor da classe Vendedores, inicializa a classe base Funcionario
    Vendedores(
        const string& login,
        const string& senha,
        int id, 
        string nome, 
        string cpf, 
        string telefone, 
        string email
    );

    //Destrutor da classe Vendedores
    ~Vendedores();

    //Método sobrescrito para retornar o tipo do funcionário
    string getTipo() const override;

    //Métodos para adicionar clientes e ordens de serviço
    void addCliente(Clientes* cliente);
    void addOrdemServico(OrdemServico* ordem);

    //Métodos para obter os clientes e ordens de serviço associados ao vendedor
    vector<Clientes*> getClientes();
    vector<OrdemServico*> getOrdemServico();

    //Métodos para obter a quantidade de clientes e ordens de serviço
    int getQuantosClientes();
    int getQuantosOrdemServico();

    //Métodos para remover clientes e ordens de serviço por ID
    void removeCliente(int id);
    void removeOrdemServico(int id);
};

#pragma once
#include "Funcionario.hpp"
#include "SistemaLogin.hpp"
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
    void addCliente(Clientes* cliente,SistemaLogin& sistema);
    void addOrdemServico(OrdemServico* ordem,SistemaLogin& sistema);

    //Métodos para obter os clientes e ordens de serviço associados ao vendedor
    vector<Clientes*> getClientes(SistemaLogin& sistema);
    vector<OrdemServico*> getOrdemServico(SistemaLogin& sistema);

    //Métodos para obter a quantidade de clientes e ordens de serviço
    int getQuantosClientes(SistemaLogin& sistema);
    int getQuantosOrdemServico( SistemaLogin& sistema);

    //Métodos para remover clientes e ordens de serviço por ID
    void removeCliente(int id,SistemaLogin& sistema);
    void removeOrdemServico(int id,SistemaLogin& sistema);


};

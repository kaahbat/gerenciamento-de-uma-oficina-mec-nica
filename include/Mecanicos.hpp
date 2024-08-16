#pragma once
#include "Funcionario.hpp"
#include "OrdemServico.hpp"

//Classe Mecanicos que herda de Funcionario e representa um mecânico no sistema
class Mecanicos : public Funcionario {

public:
    //Construtor que inicializa os atributos do mecânico
    Mecanicos(
        const string& login,
        const string& senha,
        int id,
        string nome,
        string cpf,
        string telefone,
        string email
    );

    //Destrutor
    ~Mecanicos();

    //Retorna o tipo de funcionário como "Mecanico"
    string getTipo() const override;

    //Retorna o vetor de Ordens de Serviço associadas ao mecânico
    vector<OrdemServico*> getOrdemServico();

    //Retorna o número de Ordens de Serviço associadas ao mecânico
    int getQuantosOrdemServico();
};

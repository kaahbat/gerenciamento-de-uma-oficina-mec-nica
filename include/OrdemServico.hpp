#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Classe OrdemServico que representa uma ordem de serviço no sistema
class OrdemServico {
private:
    int id;                   //Identificador único da ordem de serviço
    string data;              //Data da criação da ordem de serviço
    string descricao;         //Descrição dos serviços a serem realizados
    string status;            //Status atual da ordem de serviço (ex: "Em andamento", "Concluído")
    string valor;             //Valor total da ordem de serviço
    string veiculo;           //Identificação do veículo associado à ordem de serviço
    string cliente;           //Nome ou identificação do cliente associado à ordem de serviço
    vector<string> pecas;     //Lista de peças associadas à ordem de serviço
    vector<string> servicos;  //Lista de serviços realizados na ordem de serviço

public:
    //Construtor que inicializa os atributos da ordem de serviço
    OrdemServico(
        int id,
        string data,
        string descricao,
        string status,
        string valor,
        string veiculo,
        string cliente
    );

    //Destrutor
    ~OrdemServico();

    //Getters para acessar os atributos da ordem de serviço
    int getId();
    string getData();
    string getDescricao();
    string getStatus();
    string getValor();
    string getVeiculo();
    string getCliente();

    //Setters para modificar os atributos da ordem de serviço
    void setId(int id);
    void setData(string data);
    void setDescricao(string descricao);
    void setStatus(string status);
    void setValor(string valor);
    void setVeiculo(string veiculo);
    void setCliente(string cliente);

    //Adiciona uma peça à lista de peças da ordem de serviço
    void addPeca(string peca);

    //Adiciona um serviço à lista de serviços da ordem de serviço
    void addServico(string servico);
};

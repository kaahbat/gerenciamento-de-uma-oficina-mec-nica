#pragma once
#include <iostream>
#include <string>


#include <vector>
using namespace std;


class OrdemServico {
    private:
        int id;
        string data;
        string descricao;
        string status;
        string valor;
        string veiculo;
        string cliente;
        vector<string> pecas;
        vector<string> servicos;

        
public:
    OrdemServico(
        int id,
        string data,
        string descricao,
        string status,
        string valor,
        string veiculo,
        string cliente
       
    );
    
    int getId();
    string getData();
    string getDescricao();
    string getStatus();
    string getValor();
    string getVeiculo();
    string getCliente();
    void setId(int id);
    void setData(string data);
    void setDescricao(string descricao);
    void setStatus(string status);
    void setValor(string valor);
    void setVeiculo(string veiculo);
    void setCliente(string cliente);

    void addPeca(string peca);
    void addServico(string servico);
    ~OrdemServico();
    

    

    


    
};
#pragma once
#include "Veiculos.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Classe que representa os clientes do sistema
class Clientes {
private:
    int id;                 //Identificador único do cliente
    string nome;            //Nome do cliente
    string cpf;             //CPF do cliente
    string telefone;        //Telefone do cliente
    string email;           //Email do cliente
    string rua;             //Endereço: rua do cliente
    string bairro;          //Endereço: bairro do cliente
    string cidade;          //Endereço: cidade do cliente
    string estado;          //Endereço: estado do cliente
    string cep;             //Endereço: CEP do cliente
    string numero;          //Endereço: número da casa do cliente
    vector<Veiculos*> veiculos; //Relacionamento com veículos: um cliente pode ter vários veículos

public:
    //Construtor que inicializa todos os atributos do cliente
    Clientes(
        int id,
        const string& nome,
        const string& cpf,
        const string& telefone,
        const string& email,
        const string& rua,
        const string& bairro,
        const string& cidade,
        const string& estado,
        const string& cep,
        const string& numero
    );
    
    //Destrutor
    ~Clientes();

    //Setters: métodos para definir os atributos do cliente
    void setId(int id);
    void setNome(const string& nome);
    void setCpf(const string& cpf);
    void setTelefone(const string& telefone);
    void setEmail(const string& email);
    void setRua(const string& rua);
    void setBairro(const string& bairro);
    void setCidade(const string& cidade);
    void setEstado(const string& estado);
    void setCep(const string& cep);
    void setNumero(const string& numero);
    void addVeiculo(Veiculos* veiculo); //Adiciona um veículo à lista de veículos do cliente

    //Getters: métodos para acessar os atributos do cliente
    int getId() const;
    string getNome() const;
    string getCpf() const;
    string getTelefone() const;
    string getEmail() const;
    string getRua() const;
    string getBairro() const;
    string getCidade() const;
    string getEstado() const;
    string getCep() const;
    string getNumero() const;
    vector<Veiculos*> getVeiculos() const; //Retorna a lista de veículos do cliente
    int getQuantosVeiculos(); //Retorna a quantidade de veículos do cliente

    //Método que imprime os dados do cliente no console
    void print();
};
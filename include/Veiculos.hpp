#pragma once
#include <string>
#include <iostream>

using namespace std;

class Veiculos {

private:
    // Atributos privados do veículo
    int id;
    string placa;
    string marca;
    string modelo;
    string cor;
    string ano;
    int km;
    string combustivel;

public:
    // Construtor da classe Veiculos
    Veiculos(
        int id,
        string placa,
        string marca,
        string modelo,
        string cor,
        string ano,
        int km,
        string combustivel
    );

    // Destrutor da classe Veiculos
    ~Veiculos();

    // Métodos setters para alterar os atributos do veículo
    void setId(int id);
    void setPlaca(string placa);
    void setMarca(string marca);
    void setModelo(string modelo);
    void setCor(string cor);
    void setAno(string ano);
    void setKm(int km);
    void setCombustivel(string combustivel);

    // Métodos getters para acessar os atributos do veículo
    int getId();
    string getPlaca();
    string getMarca();
    string getModelo();
    string getCor();
    string getAno();
    int getKm();
    string getCombustivel();

    // Método para imprimir as informações do veículo
    void print();
};
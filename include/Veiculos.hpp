#pragma once
#include <string>
#include <iostream>

using namespace std;

class Veiculos  {

private:
    int id;
    string placa;
    string marca;
    string modelo;
    string cor;
    string ano;
    int km;
    string combustivel;
    string status;

public:
    Veiculos(
        int id,
        string placa,
        string marca,
        string modelo,
        string cor,
        string ano,
        int km,
        string combustivel,
        string status
    );
    ~Veiculos();
    void setId(int id);
    void setPlaca(string placa);
    void setMarca(string marca);
    void setModelo(string modelo);
    void setCor(string cor);
    void setAno(string ano);
    void setKm(int km);
    void setCombustivel(string combustivel);
    void setStatus(string status);
    int getId();
    string getPlaca();
    string getMarca();
    string getModelo();
    string getCor();
    string getAno();
    int getKm();
    string getCombustivel();
    string getStatus();
    void print();

};
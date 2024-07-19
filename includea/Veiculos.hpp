#pragma once
#include <string>
#include <iostream>

using namespace std;

class Veiculos  {

private:
    string placa;
    string marca;
    string modelo;
    string cor;
    string ano;
    int km;
    string combustivel;
    string status;

public:
    Veiculos();
    ~Veiculos();
    void setPlaca(string placa);
    void setMarca(string marca);
    void setModelo(string modelo);
    void setCor(string cor);
    void setAno(string ano);
    void setKm(int km);
    void setCombustivel(string combustivel);
    void setStatus(string status);
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
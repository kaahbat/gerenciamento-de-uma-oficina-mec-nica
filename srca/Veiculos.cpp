#include "Veiculos.hpp"


Veiculos::Veiculos() {

}

Veiculos::~Veiculos() {

}

void Veiculos::setPlaca(string placa)
{
    this->placa = placa;
}

void Veiculos::setMarca(string marca)
{
    this->marca = marca;
}

void Veiculos::setModelo(string modelo)
{
    this->modelo = modelo;
}

void Veiculos::setCor(string cor)
{
    this->cor = cor;
}

void Veiculos::setAno(string ano)
{
    this->ano = ano;
}

void Veiculos::setKm(int km)
{
    this->km = km;
}

void Veiculos::setCombustivel(string combustivel)
{
    this->combustivel = combustivel;
}

void Veiculos::setStatus(string status)
{
    this->status = status;
}

string Veiculos::getPlaca()
{
    return placa;
}

string Veiculos::getMarca()
{
    return marca;
}

string Veiculos::getModelo()
{
    return modelo;
}

string Veiculos::getCor()
{
    return cor;
}

string Veiculos::getAno()
{
    return ano;
}

int Veiculos::getKm()
{
    return km;
}

string Veiculos::getCombustivel()
{
    return combustivel;
}

string Veiculos::getStatus()
{
    return status;
}

void Veiculos::print()
{
    cout << "Placa: " << placa << endl;
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Cor: " << cor << endl;
    cout << "Ano: " << ano << endl;
    cout << "Km: " << km << endl;
    cout << "Combustivel: " << combustivel << endl;
    cout << "Status: " << status << endl;
}
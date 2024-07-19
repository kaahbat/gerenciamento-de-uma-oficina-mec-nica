#include "Veiculos.hpp"


Veiculos::Veiculos(int id, string placa, string marca, string modelo, string cor, string ano, int km, string combustivel, string status)
{   
    this->id = id;
    this->placa = placa;
    this->marca = marca;
    this->modelo = modelo;
    this->cor = cor;
    this->ano = ano;
    this->km = km;
    this->combustivel = combustivel;
    this->status = status;
}

Veiculos::~Veiculos() {

}

void Veiculos::setId(int id)
{   
    this->id = id;
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

int Veiculos::getId()
{
    return id;
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
    cout << "Veiculo: " << id << endl;
    cout << "Placa: " << placa << endl;
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Cor: " << cor << endl;
    cout << "Ano: " << ano << endl;
    cout << "Km: " << km << endl;
    cout << "Combustivel: " << combustivel << endl;
    cout << "Status: " << status << endl;
}
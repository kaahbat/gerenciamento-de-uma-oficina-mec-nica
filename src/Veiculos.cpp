#include "Veiculos.hpp"

//Implementação do construtor da classe Veiculos
Veiculos::Veiculos(int id, string placa, string marca, string modelo, string cor, string ano, int km, string combustivel) {
    //Inicializa os atributos com os valores passados como parâmetro
    this->id = id;
    this->placa = placa;
    this->marca = marca;
    this->modelo = modelo;
    this->cor = cor;
    this->ano = ano;
    this->km = km;
    this->combustivel = combustivel;
}

//Implementação do destrutor da classe Veiculos
//Não há necessidade de lógica adicional no destrutor
Veiculos::~Veiculos() {}

//Implementações dos métodos setters
void Veiculos::setId(int id) {
    this->id = id;
}

void Veiculos::setPlaca(string placa) {
    this->placa = placa;
}

void Veiculos::setMarca(string marca) {
    this->marca = marca;
}

void Veiculos::setModelo(string modelo) {
    this->modelo = modelo;
}

void Veiculos::setCor(string cor) {
    this->cor = cor;
}

void Veiculos::setAno(string ano) {
    this->ano = ano;
}

void Veiculos::setKm(int km) {
    this->km = km;
}

void Veiculos::setCombustivel(string combustivel) {
    this->combustivel = combustivel;
}

//Implementações dos métodos getters
int Veiculos::getId() {
    return id;
}

string Veiculos::getPlaca() {
    return placa;
}

string Veiculos::getMarca() {
    return marca;
}

string Veiculos::getModelo() {
    return modelo;
}

string Veiculos::getCor() {
    return cor;
}

string Veiculos::getAno() {
    return ano;
}

int Veiculos::getKm() {
    return km;
}

string Veiculos::getCombustivel() {
    return combustivel;
}

//Implementação do método para imprimir as informações do veículo
void Veiculos::print() {
    cout << "Veiculo: " << id << endl;
    cout << "Placa: " << placa << endl;
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Cor: " << cor << endl;
    cout << "Ano: " << ano << endl;
    cout << "Km: " << km << endl;
    cout << "Combustivel: " << combustivel << endl;
}
#include <iostream>
#include "../include/Clientes.hpp"
#include "../include/Veiculos.hpp"



int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    Clientes cliente1 = Clientes(1, "João", "123.456.789-00", "1234-5678","aaaa", "rua 1", "bairro 1", "cidade 1", "estado 1", "cep 1", "numero 1");
    cliente1.addVeiculo(Veiculos(1,"aaa-1234", "Chevrolet", "Onix", "Branco", "2018", 10000, "Gasolina", "Disponível"));
    cliente1.addVeiculo(Veiculos(2,"bbb-1234", "Fiat", "Uno", "Preto", "2019", 20000, "Gasolina", "Disponível"));
    cliente1.addVeiculo(Veiculos(3,"ccc-1234", "Ford", "Ka", "Vermelho", "2020", 30000, "Gasolina", "Disponível"));
    Clientes cliente2 = Clientes(2, "Maria", "987.654.321-00", "8765-4321","bbbb", "rua 2", "bairro 2", "cidade 2", "estado 2", "cep 2", "numero 2");
    cliente2.addVeiculo(Veiculos(1,"ddd-1234", "Chevrolet", "Onix", "Branco", "2018", 10000, "Gasolina", "Disponível"));
    cliente2.addVeiculo(Veiculos(2,"eee-1234", "Fiat", "Uno", "Preto", "2019", 20000, "Gasolina", "Disponível"));
    cliente2.addVeiculo(Veiculos(3,"fff-1234", "Ford", "Ka", "Vermelho", "2020", 30000, "Gasolina", "Disponível"));
    cliente1.print();
    cliente1.printVeiculos();
    cliente2.print();
    cliente2.printVeiculos();


    
    
    return 0;
    
}
#include <iostream>
#include "../include/Clientes.hpp"
#include "../include/Veiculos.hpp"



int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    Clientes cliente;
    cliente.setId(1);   
    cliente.setNome("João");
    cliente.setCpf("123.456.789-00");
    cliente.setTelefone("(11) 99999-9999");
    cliente.setEmail("vvv");
    cliente.setRua("Rua 1");
    cliente.setBairro("Bairro 1");
    cliente.setCidade("Cidade 1");
    cliente.setEstado("SP");
    cliente.setCep("12345-678");
    cliente.setNumero("123");
    cliente.print();
    Veiculos veiculo;
    veiculo.setMarca("Fiat");
    veiculo.setModelo("Uno");
    veiculo.setAno("2020");
    veiculo.setPlaca("ABC-1234");
    veiculo.setCor("Vermelho");
    veiculo.setKm(1000);
    veiculo.setCombustivel("Gasolina");
    cliente.addVeiculo(veiculo);
    cliente.print();
    return 0;
    
}
#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "../include/Funcionario.hpp"
#include "../include/Admin.hpp"
#include "../include/Mecanicos.hpp"
#include "../include/Vendedores.hpp"
#include "../include/SistemaLogin.hpp"
#include "../include/OrdemServico.hpp"


class Telas {
private:
SistemaLogin *sistema = new SistemaLogin();


public:
    Telas();
    ~Telas();
    void menuPrincipal();
    void menuClientes();
    void menuVeiculos();
    void menuFuncionarios();
    void menuMecanicos();
    void menuVendedores( SistemaLogin* sistema, Funcionario* vendedor);
    void menuAdmin(SistemaLogin* sistema);
    void menuLogin();



};
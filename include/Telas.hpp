#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <limits>
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
    void menuMecanicos( Mecanicos* mecanico);
    void menuVendedores(Vendedores* vendedor);
    void menuAdmin(SistemaLogin* sistema);
    void menuLogin();
    string lerString();



};
#pragma once
#include <iostream>
using namespace std;
#include <iostream>
#include <string>
#include <vector>
#include "../include/Funcionario.hpp"
#include "../include/Admin.hpp"
#include "../include/Mecanicos.hpp"
#include "../include/Vendedores.hpp"
#include "../include/SistemaLogin.hpp"


class Telas {

public:
    Telas();
    ~Telas();
    void menuPrincipal();
    void menuClientes();
    void menuVeiculos();
    void menuFuncionarios();
    void menuMecanicos();
    void menuVendedores();
    void menuAdmin();
    void menuLogin();



};
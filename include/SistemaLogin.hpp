#pragma once
#include <vector>
#include "Funcionario.hpp"

class SistemaLogin {
private:
    vector<Funcionario*> usuarios;  //Lista de usuários (mecânicos, vendedores, etc.)
    vector<Clientes*> clientes;     //Lista de clientes (não implementada totalmente aqui)
    vector<OrdemServico*> servicos; //Lista de ordens de serviço (não implementada totalmente aqui)
    friend class Vendedores;   //Permite a classe Vendedores acessar os atributos privados
    friend class Mecanicos;     //Permite a classe Mecanicos acessar os atributos privados
public:
    //Construtor default
    SistemaLogin();
    
    //Destrutor
    ~SistemaLogin();

    //Adiciona um novo usuário ao sistema
    void addUsuario(Funcionario* usuario);

    //Autentica um usuário pelo login e senha, retornando o ponteiro para o usuário se autenticado
    Funcionario* autenticar(string& login, string& senha) const;

    //Retorna a lista completa de usuários
    vector<Funcionario*> getUsuarios() const;

    //Retorna a lista de mecânicos
    vector<Funcionario*> getMecanicos() const;

    //Retorna a lista de vendedores
    vector<Funcionario*> getVendedores() const;

    //Atualiza um usuário específico pelo id
    void setUsuario(int id, Funcionario* usuarioEditado);

    //Retorna o número de vendedores cadastrados
    int getQuantosVendedores();

    //Retorna o número de mecânicos cadastrados
    int getQuantosMecanicos();

    //Retorna o número total de usuários cadastrados
    int getQuantosUsuarios();

    //Remove um usuário do sistema pelo id
    void removeUsuario(int id);

    //Adiciona um cliente ao sistema 
    void preenccherClientesOrdem();
};
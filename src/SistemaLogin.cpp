#include "SistemaLogin.hpp"

//Construtor padrão, inicializa a lista de usuários
SistemaLogin::SistemaLogin() {
}

//Adiciona um novo usuário ao sistema
void SistemaLogin::addUsuario(Funcionario* usuario) {
    usuarios.push_back(usuario);
}

//Tenta autenticar um usuário com base no login e senha fornecidos
Funcionario* SistemaLogin::autenticar(string& login, string& senha) const {
    for (const auto& u : usuarios) {
        if (u->autenticar(login, senha)) {
            return u;
        }
    }
    return nullptr; //Retorna nullptr se a autenticação falhar
}

//Destrutor
SistemaLogin::~SistemaLogin() {
    
    for (auto& clientes : clientes) {//Deleta todos os clientes
        delete clientes;
    }
    for (auto& servicos : servicos) {//Deleta todos os serviços
        delete servicos;
    }
    servicos.clear();//Limpa o vetor de serviços

}

//Retorna a lista completa de usuários no sistema
vector<Funcionario*> SistemaLogin::getUsuarios() const {
    return usuarios;
}

//Retorna uma lista com todos os usuários do tipo "Mecanico"
vector<Funcionario*> SistemaLogin::getMecanicos() const {
    vector<Funcionario*> mecanicos;
    for (const auto& u : usuarios) {
        if (u->getTipo() == "Mecanico") {
            mecanicos.push_back(u);
        }
    }
    return mecanicos;
}

//Retorna uma lista com todos os usuários do tipo "Vendedor"
vector<Funcionario*> SistemaLogin::getVendedores() const {
    vector<Funcionario*> vendedores;
    for (const auto& u : usuarios) {
        if (u->getTipo() == "Vendedor") {
            vendedores.push_back(u);
        }
    }
    return vendedores;
}

//Atualiza as informações de um usuário com base no ID fornecido
void SistemaLogin::setUsuario(int id, Funcionario* usuarioEditado) {
    for (auto& usuario : usuarios) {
        if (usuario->getId() == id) {
            usuario = usuarioEditado;
        }
    }
}

//Retorna o número de usuários do tipo "Vendedor" no sistema
int SistemaLogin::getQuantosVendedores() {
    int cont = 0;
    for (const auto& u : usuarios) {
        if (u->getTipo() == "Vendedor") {
            cont++;
        }
    }
    return cont;
}

//Retorna o número de usuários do tipo "Mecanico" no sistema
int SistemaLogin::getQuantosMecanicos() {
    int cont = 0;
    for (const auto& u : usuarios) {
        if (u->getTipo() == "Mecanico") {
            cont++;
        }
    }
    return cont;
}

//Retorna o número total de usuários no sistema
int SistemaLogin::getQuantosUsuarios() {
    return usuarios.size();
}

//Remove um usuário do sistema com base no ID fornecido
void SistemaLogin::removeUsuario(int id) {
    for (auto it = usuarios.begin(); it != usuarios.end(); it++) {
        if ((*it)->getId() == id) {
            usuarios.erase(it);
            
            break;
        }
    }
}

void SistemaLogin::preenccherClientesOrdem()
{
    //Criação de clientes
    Clientes* cliente1 = new Clientes(1,"João","123.456.789-10","(11) 99999-9999","gmail","123","123","123","123","123","123");
    Clientes* cliente2 = new Clientes(2,"Maria","123.456.789-10","(11) 99999-9999","gmail","123","123","123","123","123","123");
    Clientes* cliente3 = new Clientes(3,"José","123.456.789-10","(11) 99999-9999","gmail","123","123","123","123","123","123");
    Clientes* cliente4 = new Clientes(4,"Ana","123.456.789-10","(11) 99999-9999","gmail","123","123","123","123","123","123");
    
    clientes.push_back(cliente1);
    clientes.push_back(cliente2);
    clientes.push_back(cliente3);
    clientes.push_back(cliente4);

    cliente1->addVeiculo(new Veiculos(1,"11111","Fiat","Uno","preta","2009",12000,"alcool"));
    cliente2->addVeiculo(new Veiculos(2,"22222","Fiat","Uno","preta","2009",12000,"alcool"));
    cliente3->addVeiculo(new Veiculos(3,"33333","Fiat","Uno","preta","2009",12000,"alcool"));
    cliente4->addVeiculo(new Veiculos(4,"44444","Fiat","Uno","preta","2009",12000,"alcool"));
    
    OrdemServico *ordem1 = new OrdemServico(1, "2022-01-01", "Reparo no motor", "Pendente", "00", "11111", "João");
    OrdemServico *ordem2 = new OrdemServico(2, "2022-01-01", "Reparo no motor", "Pendente", "00", "22222", "Maria");
    OrdemServico *ordem3 = new OrdemServico(3, "2022-01-01", "Reparo no motor", "Pendente", "00", "33333", "José");
    OrdemServico *ordem4 = new OrdemServico(4, "2022-01-01", "Reparo no motor", "Pendente", "00", "44444", "Ana");

    
    servicos.push_back(ordem1);
    servicos.push_back(ordem2);
    servicos.push_back(ordem3);
    servicos.push_back(ordem4);

    delete cliente1;
    delete cliente2;
    delete cliente3;
    delete cliente4;
    delete ordem1;
    delete ordem2;
    delete ordem3;
    delete ordem4;
    


}

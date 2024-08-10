
#include "../include/Telas.hpp"
using namespace std;


int main() {
    /*std::cout << "Hello Easy C++ project!" << std::endl;
    SistemaLogin sistema;
    sistema.addUsuario(new Admin("admin", "admin" , 1, "lucas", "11111111111", "31999999999", "admin@1"));
    sistema.addUsuario(new Mecanicos("mecanico", "mecanico" , 2, "carlos", "22222222222", "31999999998", "mecanico@1"));
    sistema.addUsuario(new Vendedores("vendedor", "vendedor" , 3, "joao", "33333333333", "31999999997", "vendedor@1"));

    string login, senha;
    cout << "Digite o login: ";
    cin >> login;
    cout << "Digite a senha: ";
    cin >> senha;
    Funcionario *usuarioAutenticado = sistema.autenticar(login, senha);
    if (usuarioAutenticado) {
        cout << "Usuario autenticado com sucesso!" << endl;
        cout << "Bem vindo " << usuarioAutenticado->getNome() << endl;
        cout << "Seu tipo de usuario é: " << usuarioAutenticado->getTipo() << endl;
         if (usuarioAutenticado->getTipo() == "Admin") {
            static_cast<Admin*>(usuarioAutenticado)->gerenciarSistema();//chama a função gerenciarSistema da classe Admin que é uma subclasse de Funcionario que é uma superclasse de Admin     
        } else if (usuarioAutenticado->getTipo() == "Mecanico") {
            static_cast<Mecanicos*>(usuarioAutenticado)->getTipo();
            
        } else if (usuarioAutenticado->getTipo() == "Vendedor") {
            Clientes cliente1(1, "lucas", "11111111111", "31999999999", "lucas@1", "rua 1", "bairro 1", "cidade 1", "estado 1", "cep 1", "numero 1");
            static_cast<Vendedores*>(usuarioAutenticado)->addCliente( cliente1);
            Veiculos veiculo1(1,"aaa-1234","fiat","uno","branco","2010",1000,"alcool","ativo");
            cliente1.addVeiculo(veiculo1);
            cliente1.print();
            cliente1.printVeiculos();
            
        }
    } else {
        std::cout << "Usuário ou senha incorretos." << std::endl;
    }*/

    Telas tela;
    tela.menuPrincipal();

    


    
    
    return 0;
    
}
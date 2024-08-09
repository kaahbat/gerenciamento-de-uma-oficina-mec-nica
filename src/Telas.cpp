#include "Telas.hpp"

Telas::Telas() {

}

Telas::~Telas() {

}

void Telas::menuPrincipal()
{   
    int opcao;
    do {
        cout << "----- MENU PRINCIPAL -----" << endl;
        cout << "1. Login" << endl;
        cout << "2. Sair do sistema" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                menuLogin();
                break;
            case 2:
                cout << "Saindo do sistema..." << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
                break;
        }
    } while (opcao != 2);
}

void Telas::menuLogin()
{  
    string login, senha;
    cout<<"A qualquer momento digite 0 para voltar" << endl;
    cout << "----- LOGIN -----" << endl;
    cout << "Login: ";
    cin >> login;
    if(login == "0")
    {
        return;
    }    
    cout << "Senha: ";
    cin >> senha;
    if(senha == "0")
    {   
        return;
    }
    SistemaLogin sistema;
    Funcionario *usuarioAutenticado = sistema.autenticar(login, senha);
    if(usuarioAutenticado!=nullptr)
    {   
        cout << "Usuario autenticado com sucesso!" << endl;
        cout << "Bem vindo " << usuarioAutenticado->getNome() << endl;
        cout << "Seu tipo de usuario é: " << usuarioAutenticado->getTipo() << endl;
        if (usuarioAutenticado->getTipo() == "Admin") {
            menuAdmin();
        } else if (usuarioAutenticado->getTipo() == "Mecanico") {
            menuMecanicos();
        } else if (usuarioAutenticado->getTipo() == "Vendedor") {
            menuClientes();
        }
    } else {
        cout << "Usuário ou senha incorretos." << endl;
        
    }

    

}
void Telas::menuClientes()
{
}

void Telas::menuVeiculos()
{
}

void Telas::menuFuncionarios()
{
    
}

void Telas::menuMecanicos()
{
    printf("mecanico\n");
}

void Telas::menuVendedores()
{
    printf("vendedor\n");
}

void Telas::menuAdmin()
{
    printf("admin\n");
}



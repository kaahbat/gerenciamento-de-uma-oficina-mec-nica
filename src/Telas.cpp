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
    SistemaLogin *sistema = new SistemaLogin();
    sistema->addUsuario(new Admin("admin", "admin" , 1, "lucas", "11111111111", "31999999999", "admin@1"));
    sistema->addUsuario(new Mecanicos("mecanico1", "mecanico1" , 2, "carlos", "22222222222", "31999999998", "mecanico@1"));
    sistema->addUsuario(new Mecanicos("mecanico2", "mecanico2" , 3, "carlos", "22222222222", "31999999998", "mecanico@1"));
    sistema->addUsuario(new Vendedores("vendedor", "vendedor" , 4, "joao", "33333333333", "31999999997", "vendedor@1"));
    sistema->addUsuario(new Vendedores("vendedor2", "vendedor2" , 5, "joao", "33333333333", "31999999997", "vendedor@1"));
    sistema->addUsuario(new Vendedores("vendedor3", "vendedor3" , 6, "joao", "33333333333", "31999999997", "vendedor@1"));
    Funcionario *usuarioAutenticado = sistema->autenticar(login, senha);
    if(usuarioAutenticado!=nullptr)
    {   
        cout << "Usuario autenticado com sucesso!" << endl;
        cout << "Bem vindo " << usuarioAutenticado->getNome() << endl;
        cout << "Seu tipo de usuario é: " << usuarioAutenticado->getTipo() << endl;
        if (usuarioAutenticado->getTipo() == "Admin") {
            menuAdmin(sistema);
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

void Telas::menuAdmin(SistemaLogin* sistema)
{
    int opcaoEditarVouF;
    do {
        cout << "----- MENU ADMINISTRADOR -----" << endl;
        cout << "Para voltar digite 0" << endl;
        cout << "1. Editar dados de Vendedores" << endl;
        cout << "2. Editar dados de Mecânicos" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcaoEditarVouF;

        switch (opcaoEditarVouF) {
            case 1:
                int opcaoEditarV;
                for (int i = 0; i < sistema->getQuantosVendedores(); i++) {
                    cout << i+1 << ". " << sistema->getVendedores()[i]->getNome() << endl;
                }
                cout << "Escolha um vendedor para editar: ";
                cin >> opcaoEditarV;
                if (opcaoEditarV > 0 && opcaoEditarV <= sistema->getQuantosVendedores()) {
                    int opcaoEditarDados;
                    do {
                        
                        cout << "1. Editar nome" << endl;
                        cout << "2. Editar CPF" << endl;
                        cout << "3. Editar telefone" << endl;
                        cout << "4. Editar email" << endl;
                        cout << "5. Editar usuario" << endl;
                        cout << "6. Editar senha" << endl;

                        cout << "Escolha uma opção: ";
                        cin >> opcaoEditarDados;
                        if (opcaoEditarDados > 0 && opcaoEditarDados <=6 ){
                            string nome,cpf,telefone,email,login,senha;
                            switch (opcaoEditarDados) {
                                case 1:
                                    cout << "Digite o novo nome: ";
                                    cin >> nome;
                                    sistema->getVendedores()[opcaoEditarV-1]->setNome(nome);
                                    break;
                                case 2:
                                    cout << "Digite o novo CPF: ";
                                    cin >> cpf;
                                    sistema->getVendedores()[opcaoEditarV-1]->setCpf(cpf);
                                    break;
                                case 3:
                                    cout << "Digite o novo telefone: ";
                                    cin >> telefone;
                                    sistema->getVendedores()[opcaoEditarV-1]->setTelefone(telefone);
                                    break;
                                case 4:
                                    cout << "Digite o novo email: ";
                                    cin >> email;
                                    sistema->getVendedores()[opcaoEditarV-1]->setEmail(email);
                                    break;
                                case 5:
                                    cout << "Digite o novo login: ";
                                    cin >> login;
                                    sistema->getVendedores()[opcaoEditarV-1]->setLogin(login);
                                    break;
                                case 6:
                                    cout << "Digite a nova senha: ";
                                    cin >> senha;
                                    sistema->getVendedores()[opcaoEditarV-1]->setSenha(senha);
                                    break;
                            }
                            int opcaoSalvar;
                            cout << "Deseja salvar o dado ou continuar editando?" << endl;
                            cout << "1. Salvar" << endl;
                            cout << "2. Continuar editando" << endl;
                            cout << "Escolha uma opção: ";
                            
                            cin >> opcaoSalvar;
                            if (opcaoSalvar == 1) {
                                

                                sistema->setUsuario(
                                    (sistema->getVendedores()[opcaoEditarV-1]->getId()),
                                    (sistema->getVendedores()[opcaoEditarV-1])
                                );
                                opcaoEditarDados = 0;

                            }else{
                                cout << "Opção inválida. Tente novamente." << endl;
                            }
                        }else{
                            cout << "Opção inválida. Tente novamente." << endl;
                        }                    

                    }while(opcaoEditarDados!=0);



                    /*
                    if (opcao > 0 && opcao <= 6) {
                        string novoDado;
                        cout << "Digite o novo dado: ";
                        cin.ignore();
                        getline(cin, novoDado);
                        cout << "Deseja salvar o dado ou continuar editando?" << endl;
                        cout << "1. Salvar" << endl;
                        cout << "2. Continuar editando" << endl;
                        cout << "Escolha uma opção: ";
                        cin >> opcao;
                        if (opcao == 1) {
                            sistema->setUsuario(
                                sistema->getVendedores()[opcao-1]->getId(),
                                new Vendedores(
                                    sistema->getVendedores()[opcao-1]->getLogin(),
                                    sistema->getVendedores()[opcao-1]->getSenha(),
                                    sistema->getVendedores()[opcao-1]->getId(),
                                    novoDado,
                                    sistema->getVendedores()[opcao-1]->getCpf(),
                                    sistema->getVendedores()[opcao-1]->getTelefone(),
                                    sistema->getVendedores()[opcao-1]->getEmail()
                                )
                            );
                        }


                        switch (opcao) {
                            case 1:
                                sistema->setUsuario(
                                    sistema->getVendedores()[opcao-1]->getId(),
                                    new Vendedores(
                                        sistema->getVendedores()[opcao-1]->getLogin(),
                                        sistema->getVendedores()[opcao-1]->getSenha(),
                                        sistema->getVendedores()[opcao-1]->getId(),
                                        novoDado,
                                        sistema->getVendedores()[opcao-1]->getCpf(),
                                        sistema->getVendedores()[opcao-1]->getTelefone(),
                                        sistema->getVendedores()[opcao-1]->getEmail()
                                    )
                                );
                                break;
                            case 2:
                                

                                break;
                            case 3:
                                sistema->getVendedores()[opcao-1]->setTelefone(novoDado);
                                break;
                            case 4:
                                sistema->getVendedores()[opcao-1]->setEmail(novoDado);
                                break;
                            case 5:
                                sistema->getVendedores()[opcao-1]->setLogin(novoDado);
                                break;
                            case 6:
                                sistema->getVendedores()[opcao-1]->setSenha(novoDado);
                                break;
                            
                        }
                    } else {
                        cout << "Opção inválida. Tente novamente." << endl;
                    }
                    */
                } else {
                    cout << "Opção inválida. Tente novamente." << endl;
                }

                
                break;
            case 2:
                int opcaoEditarM;
                for (int i = 0; i < sistema->getQuantosMecanicos(); i++) {
                    cout << i+1 << ". " << sistema->getMecanicos()[i]->getNome() << endl;
                }
                cout << "Escolha um mecânico para editar: ";
                cin >> opcaoEditarM;
                if (opcaoEditarM > 0 && opcaoEditarM <= sistema->getQuantosMecanicos()) {
                    int opcaoEditarDados;
                    do {
                        cout << "1. Editar nome" << endl;
                        cout << "2. Editar CPF" << endl;
                        cout << "3. Editar telefone" << endl;
                        cout << "4. Editar email" << endl;
                        cout << "5. Editar usuario" << endl;
                        cout << "6. Editar senha" << endl;
                        cout << "Escolha uma opção: ";
                        cin >> opcaoEditarDados;
                        if (opcaoEditarDados > 0 && opcaoEditarDados <=6 ){
                            string nome,cpf,telefone,email,login,senha;
                            switch (opcaoEditarDados) {
                                case 1:
                                    cout << "Digite o novo nome: ";
                                    cin >> nome;
                                    sistema->getMecanicos()[opcaoEditarM-1]->setNome(nome);
                                    break;
                                case 2:
                                    cout << "Digite o novo CPF: ";
                                    cin >> cpf;
                                    sistema->getMecanicos()[opcaoEditarM-1]->setCpf(cpf);
                                    break;
                                case 3:
                                    cout << "Digite o novo telefone: ";
                                    cin >> telefone;
                                    sistema->getMecanicos()[opcaoEditarM-1]->setTelefone(telefone);
                                    break;
                                case 4:
                                    cout << "Digite o novo email: ";
                                    cin >> email;
                                    sistema->getMecanicos()[opcaoEditarM-1]->setEmail(email);
                                    break;
                                case 5:
                                    cout << "Digite o novo login: ";
                                    cin >> login;
                                    sistema->getMecanicos()[opcaoEditarM-1]->setLogin(login);
                                    break;
                                case 6:
                                    cout << "Digite a nova senha: ";
                                    cin >> senha;
                                    sistema->getMecanicos()[opcaoEditarM-1]->setSenha(senha);
                                    break;
                            }
                            int opcaoSalvar;
                            cout << "Deseja salvar o dado ou continuar editando?" << endl;
                            cout << "1. Salvar" << endl;
                            cout << "2. Continuar editando" << endl;
                            cout << "Escolha uma opção ";
                            cin >> opcaoSalvar;
                            if (opcaoSalvar == 1) {
                                sistema->setUsuario(
                                    (sistema->getMecanicos()[opcaoEditarM-1]->getId()),
                                    (sistema->getMecanicos()[opcaoEditarM-1])
                                );
                                opcaoEditarDados = 0;
                            }else{
                                cout << "Opção inválida. Tente novamente." << endl;
                            }
                        }else{
                            cout << "Opção inválida. Tente novamente." << endl;
                        }
                    }while(opcaoEditarDados!=0);
                } else {
                    cout << "Opção inválida. Tente novamente." << endl;
                }
                               
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
                break;
        }
    } while (opcaoEditarVouF != 0);
}


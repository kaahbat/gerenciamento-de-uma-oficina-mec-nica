#include "Telas.hpp"

Telas::Telas() {

}

Telas::~Telas() {

}

void Telas::menuPrincipal()
{   
    
    sistema->addUsuario(new Admin("admin", "admin" , 1, "lucas", "11111111111", "31999999999", "admin@1"));
    sistema->addUsuario(new Mecanicos("mecanico1", "mecanico1" , 2, "carlos", "22222222222", "31999999998", "mecanico@1"));
    sistema->addUsuario(new Mecanicos("mecanico2", "mecanico2" , 3, "carlos", "22222222222", "31999999998", "mecanico@1"));
    sistema->addUsuario(new Vendedores("vendedor", "vendedor" , 4, "joao", "33333333333", "31999999997", "vendedor@1"));
    sistema->addUsuario(new Vendedores("vendedor2", "vendedor2" , 5, "joao", "33333333333", "31999999997", "vendedor@1"));
    sistema->addUsuario(new Vendedores("vendedor3", "vendedor3" , 6, "joao", "33333333333", "31999999997", "vendedor@1"));
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
            menuVendedores(sistema,(Vendedores*)usuarioAutenticado);
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

void Telas::menuVendedores(SistemaLogin* sistema, Vendedores* vendedor)
{
    printf("vendedor\n");
}

void Telas::menuAdmin(SistemaLogin* sistema)
{
    int opcaoEditarVouF;
    string loginV, senhaV, nomeV, cpfV, telefoneV, emailV;
    string loginM, senhaM, nomeM, cpfM, telefoneM, emailM;

    do {
        cout << "----- MENU ADMINISTRADOR -----" << endl;
        cout << "Para voltar digite 0" << endl;
        cout << "1. Editar dados de Vendedores" << endl;
        cout << "2. Editar dados de Mecânicos" << endl;
        cout << "3. Adicionar Vendedor" << endl;
        cout << "4. Adicionar Mecânico" << endl;
        cout << "5. Remover Vendedor" << endl;
        cout << "6. Remover Mecânico" << endl;
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
                        cout << "----- EDITAR DADOS -----" << endl;
                        cout << "Para voltar digite 0" << endl;
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
                                    cout << "Nome alterado com sucesso!" << endl;
                                    break;
                                case 2:
                                    cout << "Digite o novo CPF: ";
                                    cin >> cpf;
                                    sistema->getVendedores()[opcaoEditarV-1]->setCpf(cpf);
                                    cout << "CPF alterado com sucesso!" << endl;
                                    break;
                                case 3:
                                    cout << "Digite o novo telefone: ";
                                    cin >> telefone;
                                    sistema->getVendedores()[opcaoEditarV-1]->setTelefone(telefone);
                                    cout << "Telefone alterado com sucesso!" << endl;
                                    break;
                                case 4:
                                    cout << "Digite o novo email: ";
                                    cin >> email;
                                    sistema->getVendedores()[opcaoEditarV-1]->setEmail(email);
                                    cout << "Email alterado com sucesso!" << endl;
                                    break;
                                case 5:
                                    cout << "Digite o novo login: ";
                                    cin >> login;
                                    sistema->getVendedores()[opcaoEditarV-1]->setLogin(login);
                                    cout << "Login alterado com sucesso!" << endl;
                                    break;
                                case 6:
                                    cout << "Digite a nova senha: ";
                                    cin >> senha;
                                    sistema->getVendedores()[opcaoEditarV-1]->setSenha(senha);
                                    cout << "Senha alterada com sucesso!" << endl;
                                    break;
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
                        cout << "----- EDITAR DADOS -----" << endl;
                        cout << "Para voltar digite 0" << endl;
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
                                    cout << "Nome alterado com sucesso!" << endl;
                                    break;
                                case 2:
                                    cout << "Digite o novo CPF: ";
                                    cin >> cpf;
                                    sistema->getMecanicos()[opcaoEditarM-1]->setCpf(cpf);
                                    cout << "CPF alterado com sucesso!" << endl;
                                    break;
                                case 3:
                                    cout << "Digite o novo telefone: ";
                                    cin >> telefone;
                                    sistema->getMecanicos()[opcaoEditarM-1]->setTelefone(telefone);
                                    cout << "Telefone alterado com sucesso!" << endl;
                                    break;
                                case 4:
                                    cout << "Digite o novo email: ";
                                    cin >> email;
                                    sistema->getMecanicos()[opcaoEditarM-1]->setEmail(email);
                                    cout << "Email alterado com sucesso!" << endl;
                                    break;
                                case 5:
                                    cout << "Digite o novo login: ";
                                    cin >> login;
                                    sistema->getMecanicos()[opcaoEditarM-1]->setLogin(login);
                                    cout << "Login alterado com sucesso!" << endl;
                                    break;
                                case 6:
                                    cout << "Digite a nova senha: ";
                                    cin >> senha;
                                    sistema->getMecanicos()[opcaoEditarM-1]->setSenha(senha);
                                    cout << "Senha alterada com sucesso!" << endl;
                                    break;
                            }
                            
                        }else{
                            cout << "Opção inválida. Tente novamente." << endl;
                        }
                    }while(opcaoEditarDados!=0);
                } else {
                    cout << "Opção inválida. Tente novamente." << endl;
                }
                               
                break;
            case 3:
                //string loginV, senhaV, nomeV, cpfV, telefoneV, emailV;
                cout << "Digite o nome do vendedor: ";
                cin >> nomeV;
                cout << "Digite o CPF do vendedor: ";
                cin >> cpfV;
                cout << "Digite o telefone do vendedor: ";
                cin >> telefoneV;
                cout << "Digite o email do vendedor: ";
                cin >> emailV;
                cout << "Digite o login do vendedor: ";
                cin >> loginV;
                cout << "Digite a senha do vendedor: ";
                cin >> senhaV;
                sistema->addUsuario(new Vendedores(loginV, senhaV, sistema->getQuantosUsuarios()+1, nomeV, cpfV, telefoneV, emailV));
                cout << "Vendedor adicionado com sucesso!" << endl;
                break;
            case 4:
                //string loginM, senhaM, nomeM, cpfM, telefoneM, emailM;
                cout << "Digite o nome do mecânico: ";
                cin >> nomeM;
                cout << "Digite o CPF do mecânico: ";
                cin >> cpfM;
                cout << "Digite o telefone do mecânico: ";
                cin >> telefoneM;
                cout << "Digite o email do mecânico: ";
                cin >> emailM;
                cout << "Digite o login do mecânico: ";
                cin >> loginM;
                cout << "Digite a senha do mecânico: ";
                cin >> senhaM;
                sistema->addUsuario(new Mecanicos(loginM, senhaM, sistema->getQuantosUsuarios()+1, nomeM, cpfM, telefoneM, emailM));
                cout << "Mecânico adicionado com sucesso!" << endl;
                break;
            case 5:
                int opcaoRemoverV;
                for (int i = 0; i < sistema->getQuantosVendedores(); i++) {
                    cout << i+1 << ". " << sistema->getVendedores()[i]->getNome() << endl;
                }
                cout << "Escolha um vendedor para remover: ";
                cin >> opcaoRemoverV;
                if (opcaoRemoverV > 0 && opcaoRemoverV <= sistema->getQuantosVendedores()) {
                    sistema->removeUsuario(sistema->getVendedores()[opcaoRemoverV-1]->getId());
                    cout << "Vendedor removido com sucesso!" << endl;
                } else {
                    cout << "Opção inválida. Tente novamente." << endl;
                }
                break;
            case 6:
                int opcaoRemoverM;
                for (int i = 0; i < sistema->getQuantosMecanicos(); i++) {
                    cout << i+1 << ". " << sistema->getMecanicos()[i]->getNome() << endl;
                }
                cout << "Escolha um mecânico para remover: ";
                cin >> opcaoRemoverM;
                if (opcaoRemoverM > 0 && opcaoRemoverM <= sistema->getQuantosMecanicos()) {
                    sistema->removeUsuario(sistema->getMecanicos()[opcaoRemoverM-1]->getId());
                    cout << "Mecânico removido com sucesso!" << endl;
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


#include "Telas.hpp"

Telas::Telas()
{
    // Construtor padrão da classe Telas, sem lógica adicional
}

Telas::~Telas()
{
    // Destrutor da classe Telas, sem lógica adicional
}

// Função que exibe o menu principal do sistema
void Telas::menuPrincipal()
{
    // Adiciona usuários ao sistema na inicialização do menu principal
    sistema->addUsuario(new Admin("admin", "admin", 1, "lucas", "11111111111", "31999999999", "admin@1"));
    sistema->addUsuario(new Mecanicos("mecanico", "mecanico", 2, "carlos", "22222222222", "31999999998", "mecanico@1"));
    sistema->addUsuario(new Mecanicos("mecanico1", "mecanico1", 3, "carlos", "22222222222", "31999999998", "mecanico@1"));
    sistema->addUsuario(new Vendedores("vendedor", "vendedor", 4, "joao", "33333333333", "31999999997", "vendedor@1"));
    sistema->addUsuario(new Vendedores("vendedor1", "vendedor1", 5, "joao", "33333333333", "31999999997", "vendedor@1"));
    sistema->addUsuario(new Vendedores("vendedor1", "vendedor1", 6, "joao", "33333333333", "31999999997", "vendedor@1"));

    int opcao;
    do
    {
        // Exibe o menu principal para o usuário
        cout << "----- MENU PRINCIPAL -----" << endl;
        cout << "1. Login" << endl;
        cout << "2. Sair do sistema" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            // Chama o método de login
            menuLogin();
            break;
        case 2:
            // Sai do sistema
            cout << "Saindo do sistema..." << endl;
            break;
        default:
            // Exibe uma mensagem de erro se a opção for inválida
            cout << "Opção inválida. Tente novamente." << endl;
            break;
        }
    } while (opcao != 2); // Continua exibindo o menu até que o usuário escolha sair

    // Deleta o objeto sistema ao final da execução
    delete sistema;
}

// Função que exibe a tela de login
void Telas::menuLogin()
{
    string login, senha;
    cout << "A qualquer momento digite 0 para voltar" << endl;
    cout << "----- LOGIN -----" << endl;
    cout << "Login: ";
    cin >> login;
    if (login == "0")
    {
        return;
    }
    cout << "Senha: ";
    cin >> senha;
    if (senha == "0")
    {
        return;
    }
    // Autentica o usuário com base no login e senha fornecidos
    Funcionario *usuarioAutenticado = sistema->autenticar(login, senha);
    if (usuarioAutenticado != nullptr)
    {
        cout << "Usuario autenticado com sucesso!" << endl;
        cout << "Bem vindo " << usuarioAutenticado->getNome() << endl;
        cout << "Seu tipo de usuario é: " << usuarioAutenticado->getTipo() << endl;
        if (usuarioAutenticado->getTipo() == "Admin")
        {
            menuAdmin(sistema);
        }
        else if (usuarioAutenticado->getTipo() == "Mecanico")
        {
            menuMecanicos((Mecanicos *)usuarioAutenticado, sistema);
        }
        else if (usuarioAutenticado->getTipo() == "Vendedor")
        {
            menuVendedores((Vendedores *)usuarioAutenticado, sistema);
        }
    }
    else
    {
        cout << "Usuário ou senha incorretos." << endl;
    }
}

// Função que lê uma string do usuário de forma segura
string Telas::lerString()
{
    string str;
    // Ignora o buffer de entrada anterior para evitar problemas de leitura com getline
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Lê a linha completa de entrada do usuário e armazena na string 'str'
    getline(cin, str);

    // Retorna a string lida
    return str;
}

// Função que exibe o menu específico para mecânicos
void Telas::menuMecanicos(Mecanicos *mecanico, SistemaLogin *sistema)
{
    int opcao;
    do
    {
        cout << "----- MENU MECÂNICO -----" << endl;
        cout << "1. Visualizar ordens de serviço abertas." << endl;
        cout << "2. Visualizar ordens de serviço pendentes para atualizar o valor total do servico e pecas." << endl;
        cout << "3. Cadastrar serviços executados e peças utilizadas." << endl;

        cout << "Escolha uma opção: ";
        cin >> opcao;
        switch (opcao)
        {
        case 1:
        {
            // Exibe as ordens de serviço abertas
            cout << "--- ORDENS DE SERVIÇO ABERTAS ---" << endl;
            if (mecanico->getQuantosOrdemServico(*sistema) == 0)
            {
                cout << "Nenhuma ordem de serviço aberta." << endl;
            }

            for (int j = 0; j < mecanico->getQuantosOrdemServico(*sistema); j++)
            {
                if (mecanico->getOrdemServico(*sistema)[j]->getStatus() == "Aprovada" || mecanico->getOrdemServico(*sistema)[j]->getStatus() == "Pendente")
                {

                    cout << "Ordem de Serviço " << j + 1 << endl;
                    cout << "Status: " << mecanico->getOrdemServico(*sistema)[j]->getStatus() << endl;
                    cout << "Data: " << mecanico->getOrdemServico(*sistema)[j]->getData() << endl;
                    cout << "Descrição: " << mecanico->getOrdemServico(*sistema)[j]->getDescricao() << endl;
                    cout << "Valor: R$ " << mecanico->getOrdemServico(*sistema)[j]->getValor() << endl;
                    cout << "Veículo: " << mecanico->getOrdemServico(*sistema)[j]->getVeiculo() << endl;
                    cout << "Cliente: " << mecanico->getOrdemServico(*sistema)[j]->getCliente() << endl;
                    cout << "----------------------------------------" << endl;
                }
            }
        }
        break;

        case 2:
        {   
            // Exibe as ordens de serviço pendentes
            cout << "--- ORDENS DE SERVIÇO ABERTAS ---" << endl;
            if (mecanico->getQuantosOrdemServico(*sistema) == 0)
            {
                cout << "Nenhuma ordem de serviço aberta." << endl;
            }

            for (int j = 0; j < mecanico->getQuantosOrdemServico(*sistema); j++)
            {
                if (mecanico->getOrdemServico(*sistema)[j]->getStatus() == "Pendente")
                {

                    cout << "Ordem de Serviço " << j + 1 << endl;
                    cout << "Status: " << mecanico->getOrdemServico(*sistema)[j]->getStatus() << endl;
                    cout << "Data: " << mecanico->getOrdemServico(*sistema)[j]->getData() << endl;
                    cout << "Descrição: " << mecanico->getOrdemServico(*sistema)[j]->getDescricao() << endl;
                    cout << "Valor: R$ " << mecanico->getOrdemServico(*sistema)[j]->getValor() << endl;
                    cout << "Veículo: " << mecanico->getOrdemServico(*sistema)[j]->getVeiculo() << endl;
                    cout << "Cliente: " << mecanico->getOrdemServico(*sistema)[j]->getCliente() << endl;
                    cout << "----------------------------------------" << endl;
                }
            }
            int opcaoServico;
            cout << "Escolha uma ordem de servico para passar o orçamento: ";
            cin >> opcaoServico;
            if (opcaoServico > 0 && opcaoServico <= sistema->getQuantosUsuarios())
            {
                int opcaoMaisPecasServicos;
                do
                {
                    // Atualização do valor total do serviço e peças
                    string servico, peca, valorservico, valorpeca;
                    cout << "Digite o serviço a ser executado: ";
                    servico = lerString();
                    cout << "Digite o valor do servico: com ponto para separar os centavos: ";
                    cin >> valorservico;
                    cout << "Digite a peça a ser utilizada: ";
                    peca = lerString();
                    cout << "Digite o valor da peça: com ponto para separar os centavos: ";
                    cin >> valorpeca;
                    float valorservicoTotal = stof(valorservico) + stof(valorpeca) + stof(mecanico->getOrdemServico(*sistema)[opcaoServico - 1]->getValor());
                    ostringstream oss;
                    oss << fixed << setprecision(2) << valorservicoTotal;
                    string valorservicoF = oss.str();
                    mecanico->getOrdemServico(*sistema)[opcaoServico - 1]->setValor(valorservicoF);
                    mecanico->getOrdemServico(*sistema)[opcaoServico - 1]->addServico(servico);
                    mecanico->getOrdemServico(*sistema)[opcaoServico - 1]->addPeca(peca);
                    cout << "Serviço e peça cadastrados com sucesso e valor do servico atualizados!" << endl;
                    cout << "Valor total do servico: R$ " << valorservicoF << endl;
                    cout << "Deseja adicionar mais serviços e peças?" << endl;
                    cout << "1. Sim" << endl;
                    cout << "0. Não" << endl;
                    cout << "Escolha uma opção: ";
                    cin >> opcaoMaisPecasServicos;

                } while (opcaoMaisPecasServicos != 0);
            }
            else
            {
                cout << "Opção inválida. Tente novamente." << endl;
            }
        }
        break;
        case 3:
        {
            // Exibe as ordens de serviço executadas
            cout << "--- ORDENS DE SERVIÇO ABERTAS ---" << endl;
            
            if (mecanico->getQuantosOrdemServico(*sistema) == 0)
            {
                cout << "Nenhuma ordem de serviço aberta." << endl;
            }
            for (int j = 0; j < mecanico->getQuantosOrdemServico(*sistema); j++)
            {
                if (mecanico->getOrdemServico(*sistema)[j]->getStatus() == "Aprovada")
                {
                    cout << "Ordem de Serviço " << j + 1 << endl;
                    cout << "Data: " << mecanico->getOrdemServico(*sistema)[j]->getData() << endl;
                    cout << "Descrição: " << mecanico->getOrdemServico(*sistema)[j]->getDescricao() << endl;
                    cout << "Valor: R$ " << mecanico->getOrdemServico(*sistema)[j]->getValor() << endl;
                    cout << "Veículo: " << mecanico->getOrdemServico(*sistema)[j]->getVeiculo() << endl;
                    cout << "Cliente: " << mecanico->getOrdemServico(*sistema)[j]->getCliente() << endl;
                    cout << "----------------------------------------" << endl;
                }
            }
            int opcaoServico;
            cout << "Escolha uma ordem de servico para executar o serviço: ";
            cin >> opcaoServico;
            if (opcaoServico > 0 && opcaoServico <= sistema->getQuantosUsuarios())
            {
                int opcaoMaisPecasServicos;
                do
                {   
                    // Cadastro de serviços executados e peças utilizadas
                    string servico, peca, valorservico, valorpeca;
                    cout << "Digite o serviço a ser executado: ";
                    servico = lerString();
                    cout << "Digite o valor do servico: com ponto para separar os centavos: ";
                    cin >> valorservico;
                    cout << "Digite a peça a ser utilizada: ";
                    peca = lerString();
                    cout << "Digite o valor da peça: com ponto para separar os centavos: ";
                    cin >> valorpeca;
                    float valorservicoTotal = stof(valorservico) + stof(valorpeca) + stof(mecanico->getOrdemServico(*sistema)[opcaoServico - 1]->getValor());
                    ostringstream oss;
                    oss << fixed << setprecision(2) << valorservicoTotal;
                    string valorservicoF = oss.str();
                    mecanico->getOrdemServico(*sistema)[opcaoServico - 1]->setValor(valorservicoF);
                    mecanico->getOrdemServico(*sistema)[opcaoServico - 1]->addServico(servico);
                    mecanico->getOrdemServico(*sistema)[opcaoServico - 1]->addPeca(peca);
                    mecanico->getOrdemServico(*sistema)[opcaoServico - 1]->setStatus("Executada");
                    cout << "Serviço e peça cadastrados com sucesso" << endl;
                    cout << "Seviço executado com sucesso!" << endl;
                    cout << "Valor total do servico: R$ " << valorservicoF << endl;
                    cout << "Deseja execultar mais serviços ?" << endl;
                    cout << "1. Sim" << endl;
                    cout << "0. Não" << endl;
                    cout << "Escolha uma opção: ";
                    cin >> opcaoMaisPecasServicos;

                } while (opcaoMaisPecasServicos != 0);
            }
            else
            {
                cout << "Opção inválida. Tente novamente." << endl;
            }
        }
        break;
        default:
            cout << "Opção inválida. Tente novamente." << endl;
            break;
        }
    } while (opcao != 0);
}

// Função que exibe o menu específico para vendedores
void Telas::menuVendedores(Vendedores *vendedor, SistemaLogin *sistema)
{
    int opcao;
    do
    {
        // Exibe o menu específico para vendedores
        cout << "----- MENU VENDEDOR -----" << endl;
        cout << "1. Cadastrar cliente e veículo" << endl;
        cout << "2. Gerar ordem de serviço" << endl;
        cout << "3. Visualizar ordens de serviço de orçamento pendentes de aprovação do cliente e marcar como aprovadas" << endl;
        cout << "4. Visualizar ordens de serviço executadas e realizar o fechamento" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
        {
            //sistema->preenccherClientesOrdem(); // preenche a lista de clientes e ordens de serviço para nao precisar fazer manualmente toda vez que o programa é iniciado

            
                // Cadastro de cliente e veículo
                string nome, cpf, telefone, email, rua, bairro, cidade, estado, cep, numero;
                string marca, modelo, ano, placa, cor, combustivel;
                int km;
                cout << "--- CADASTRO DE CLIENTE ---" << endl;
                cout << "Digite o nome do cliente: ";
                cin >> nome;
                cout << "Digite o CPF do cliente: ";
                cin >> cpf;
                cout << "Digite o telefone do cliente: ";
                cin >> telefone;
                cout << "Digite o email do cliente: ";
                cin >> email;
                cout << "Digite a rua do cliente: ";
                cin >> rua;
                cout << "Digite o bairro do cliente: ";
                cin >> bairro;
                cout << "Digite a cidade do cliente: ";
                cin >> cidade;
                cout << "Digite o estado do cliente: ";
                cin >> estado;
                cout << "Digite o CEP do cliente: ";
                cin >> cep;
                cout << "Digite o número do cliente: ";
                cin >> numero;

                // Criação do objeto Cliente e adição à lista de clientes do vendedor
                Clientes *cliente = new Clientes(vendedor->getQuantosClientes(*sistema) + 1, nome, cpf, telefone, email, rua, bairro, cidade, estado, cep, numero);
                vendedor->addCliente(cliente, *sistema);
                cout << "Cliente cadastrado com sucesso!" << endl;

                int opcaoVeiculo;
                do
                {
                    // Cadastro de veículo
                    cout << "--- CADASTRO DE VEÍCULO ---" << endl;
                    cout << "Digite a marca do veículo: ";
                    cin >> marca;
                    cout << "Digite o modelo do veículo: ";
                    cin >> modelo;
                    cout << "Digite o ano do veículo: ";
                    cin >> ano;
                    cout << "Digite a placa do veículo: ";
                    cin >> placa;
                    cout << "Digite a cor do veículo: ";
                    cin >> cor;
                    cout << "Digite o combustível do veículo: ";
                    cin >> combustivel;
                    cout << "Digite a quilometragem do veículo: ";
                    cin >> km;

                    // Criação do objeto Veículo e adição à lista de veículos do cliente
                    Veiculos *veiculo = new Veiculos(vendedor->getQuantosClientes(*sistema) + 1, placa, marca, modelo, cor, ano, km, combustivel);
                    cliente->addVeiculo(veiculo);
                    cout << "Veículo cadastrado com sucesso!" << endl;

                    cout << "Deseja cadastrar outro veículo?" << endl;
                    cout << "1. Sim" << endl;
                    cout << "0. Não" << endl;
                    cout << "Escolha uma opção: ";
                    cin >> opcaoVeiculo;
                    delete veiculo;

                } while (opcaoVeiculo != 0);
                delete cliente;
        }
        break;

        case 2:
        {
            int continua = 1;
            do
            {
                // Geração de ordem de serviço
                int opcaoCliente;
                for (int i = 0; i < vendedor->getQuantosClientes(*sistema); i++)
                {
                    // Exibe a lista de clientes para seleção
                    cout << i + 1 << ". " << vendedor->getClientes(*sistema)[i]->getNome() << endl;
                }
                cout << "Escolha um cliente para gerar a ordem de serviço: ";
                cout << "Para voltar digite 0" << endl;
                cin >> opcaoCliente;
                if (opcaoCliente==0)
                {
                    continua = 0;
                }

                if (opcaoCliente > 0 && opcaoCliente <= vendedor->getQuantosClientes(*sistema))
                {
                    int opcaoVeiculo;
                    for (int i = 0; i < vendedor->getClientes(*sistema)[opcaoCliente - 1]->getQuantosVeiculos(); i++)
                    {
                        // Exibe a lista de veículos do cliente selecionado
                        cout << i + 1 << ". " << vendedor->getClientes(*sistema)[opcaoCliente - 1]->getVeiculos()[i]->getPlaca() << endl;
                    }
                    cout << "Escolha um veículo para gerar a ordem de serviço: ";
                    cin >> opcaoVeiculo;
                    if(opcaoVeiculo==0)
                    {
                        continua = 0;
                    }

                    if (opcaoVeiculo > 0 && opcaoVeiculo <= vendedor->getClientes(*sistema)[opcaoCliente - 1]->getQuantosVeiculos())
                    {
                        string data, descricao, status, valor, veiculo, cliente;
                        cout << "Digite a data da ordem de serviço: ";
                        cin >> data;
                        cout << "Digite a descrição da ordem de serviço: ";
                        descricao = lerString(); // Assumindo que lerString() é uma função para ler uma string completa
                        status = "Pendente";
                        cout << "Digite o valor da ordem de serviço: com ponto para separar os centavos: ";
                        cin >> valor;

                        // Criação do objeto OrdemServico e adição à lista de ordens do vendedor
                        veiculo = vendedor->getClientes(*sistema)[opcaoCliente - 1]->getVeiculos()[opcaoVeiculo - 1]->getPlaca();
                        cliente = vendedor->getClientes(*sistema)[opcaoCliente - 1]->getNome();
                        OrdemServico *ordem = new OrdemServico(vendedor->getQuantosOrdemServico(*sistema) + 1, data, descricao, status, valor, veiculo, cliente);
                        vendedor->addOrdemServico(ordem, *sistema);
                        cout << "Ordem de serviço gerada com sucesso!" << endl;
                        delete ordem;// Deleta o objeto ordem ao final da execução
                    }
                    else
                    {
                        cout << "Opção inválida. Tente novamente." << endl;

                    }
                }
                else
                {
                    cout << "Opção inválida. Tente novamente." << endl;
                }

            }while (continua != 0);
        }
        break;

        case 3:
        {

            int continuar;
            do
            {
                // Visualização e aprovação de ordens de serviço pendentes
                cout << "--- ORDENS DE SERVIÇO PENDENTES DE APROVAÇÃO ---" << endl;
                cout << "Para voltar digite 0" << endl;
                for (int i = 0; i < vendedor->getQuantosOrdemServico(*sistema); i++)
                {
                    if (vendedor->getOrdemServico(*sistema)[i]->getStatus() == "Pendente")
                    {
                        // Exibe detalhes das ordens de serviço pendentes
                        cout << "Ordem de Serviço " << i + 1 << endl;
                        cout << "Data: " << vendedor->getOrdemServico(*sistema)[i]->getData() << endl;
                        cout << "Descrição: " << vendedor->getOrdemServico(*sistema)[i]->getDescricao() << endl;
                        cout << "Valor: R$ " << vendedor->getOrdemServico(*sistema)[i]->getValor() << endl;
                        cout << "Veículo: " << vendedor->getOrdemServico(*sistema)[i]->getVeiculo() << endl;
                        cout << "Cliente: " << vendedor->getOrdemServico(*sistema)[i]->getCliente() << endl;
                        cout << "Serviços: " << endl;
                        vendedor->getOrdemServico(*sistema)[i]->printaServicos();
                        cout << "Peças: " << endl;
                        vendedor->getOrdemServico(*sistema)[i]->printaPecas();
                        cout << "----------------------------------------" << endl;
                    }
                }
                int opcaoAprovacao;

                cout << "Selecione qual ordem de servico deseja aprova ou cancelar" << endl;
                cout << "Digite o numero da ordem: ";
                cin >> opcaoAprovacao;

                if (opcaoAprovacao > 0 && opcaoAprovacao <= vendedor->getQuantosOrdemServico(*sistema))
                {
                    // Aprovação da ordem de serviço selecionada
                    int opcaoAprovaCancela;
                    cout << "1. Aprovar" << endl;
                    cout << "2. Cancelar" << endl;
                    cout << "Escolha uma opção: ";
                    cin >> opcaoAprovaCancela;

                    if (opcaoAprovaCancela == 1)
                    {
                        vendedor->getOrdemServico(*sistema)[opcaoAprovacao - 1]->setStatus("Aprovada");
                        cout << "Ordem de serviço aprovada com sucesso!" << endl;
                    }
                    else if (opcaoAprovaCancela == 2)
                    {
                        vendedor->getOrdemServico(*sistema)[opcaoAprovacao - 1]->setStatus("Cancelada");
                        cout << "Ordem de serviço cancelada com sucesso!" << endl;
                        vendedor->removeOrdemServico(opcaoAprovacao - 1, *sistema);
                    }
                    else
                    {
                        cout << "Opção inválida. Tente novamente." << endl;
                    }

                    cout << "Deseja continuar aprovando ou cancelando ordens de serviço?" << endl;
                    cout << "1. Sim" << endl;
                    cout << "0. Não" << endl;
                    cout << "Escolha uma opção: ";
                    cin >> continuar;
                }
                else
                {
                    cout << "Opção inválida. Tente novamente." << endl;
                }
            } while (continuar != 0);
        }
        break;

        case 4:
        {
            int continua;
            do{
                // Visualização e fechamento de ordens de serviço executadas
                cout << "--- ORDENS DE SERVIÇO EXECUTADAS ---" << endl;
                cout << "Para voltar digite 0" << endl;
                for (int i = 0; i < vendedor->getQuantosOrdemServico(*sistema); i++)
                {
                    if (vendedor->getOrdemServico(*sistema)[i]->getStatus() == "Executada")
                    {
                        // Exibe detalhes das ordens de serviço executadas
                        cout << "Ordem de Serviço " << i + 1 << endl;
                        cout << "Data: " << vendedor->getOrdemServico(*sistema)[i]->getData() << endl;
                        cout << "Descrição: " << vendedor->getOrdemServico(*sistema)[i]->getDescricao() << endl;
                        cout << "Valor: R$ " << vendedor->getOrdemServico(*sistema)[i]->getValor() << endl;
                        cout << "Veículo: " << vendedor->getOrdemServico(*sistema)[i]->getVeiculo() << endl;
                        cout << "Cliente: " << vendedor->getOrdemServico(*sistema)[i]->getCliente() << endl;
                        cout << "----------------------------------------" << endl;
                    }
                }
                int opcaoFechamento;
                cout << "Escolha uma opção: ";
                cin >> opcaoFechamento;
                if (opcaoFechamento==0)
                {
                    continua = 0;
                }
                
                if (opcaoFechamento > 0 && opcaoFechamento <= vendedor->getQuantosOrdemServico(*sistema))
                {
                    // Fechamento da ordem de serviço selecionada
                    vendedor->getOrdemServico(*sistema)[opcaoFechamento - 1]->setStatus("Fechada");
                    cout << "Ordem de serviço fechada com sucesso!" << endl;
                }
                else
                {
                    cout << "Opção inválida. Tente novamente." << endl;
                }
            }while(continua!=0);
        }
        break;

        default:
            // Mensagem para opção inválida
            cout << "Opção inválida. Tente novamente." << endl;
            break;
        }
    } while (opcao != 0); // Repete o menu até o usuário escolher sair
}

// Função que exibe o menu específico para administradores
void Telas::menuAdmin(SistemaLogin *sistema)
{
    int opcaoEditarVouF;
    string loginV, senhaV, nomeV, cpfV, telefoneV, emailV;
    string loginM, senhaM, nomeM, cpfM, telefoneM, emailM;

    do
    {   
        // Menu de edição de vendedores e mecânicos
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

        switch (opcaoEditarVouF)
        {
        case 1:
            int opcaoEditarV;
            for (int i = 0; i < sistema->getQuantosVendedores(); i++)
            {
                cout << i + 1 << ". " << sistema->getVendedores()[i]->getNome() << endl;
            }
            cout << "Escolha um vendedor para editar: ";
            cin >> opcaoEditarV;
            if (opcaoEditarV > 0 && opcaoEditarV <= sistema->getQuantosVendedores())
            {
                int opcaoEditarDados;
                do
                {
                    // Menu de edição de dados do vendedor selecionado
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
                    if (opcaoEditarDados > 0 && opcaoEditarDados <= 6)
                    {
                        string nome, cpf, telefone, email, login, senha;
                        switch (opcaoEditarDados)
                        {
                        case 1:
                            cout << "Digite o novo nome: ";
                            cin >> nome;
                            sistema->getVendedores()[opcaoEditarV - 1]->setNome(nome);
                            cout << "Nome alterado com sucesso!" << endl;
                            break;
                        case 2:
                            cout << "Digite o novo CPF: ";
                            cin >> cpf;
                            sistema->getVendedores()[opcaoEditarV - 1]->setCpf(cpf);
                            cout << "CPF alterado com sucesso!" << endl;
                            break;
                        case 3:
                            cout << "Digite o novo telefone: ";
                            cin >> telefone;
                            sistema->getVendedores()[opcaoEditarV - 1]->setTelefone(telefone);
                            cout << "Telefone alterado com sucesso!" << endl;
                            break;
                        case 4:
                            cout << "Digite o novo email: ";
                            cin >> email;
                            sistema->getVendedores()[opcaoEditarV - 1]->setEmail(email);
                            cout << "Email alterado com sucesso!" << endl;
                            break;
                        case 5:
                            cout << "Digite o novo login: ";
                            cin >> login;
                            sistema->getVendedores()[opcaoEditarV - 1]->setLogin(login);
                            cout << "Login alterado com sucesso!" << endl;
                            break;
                        case 6:
                            cout << "Digite a nova senha: ";
                            cin >> senha;
                            sistema->getVendedores()[opcaoEditarV - 1]->setSenha(senha);
                            cout << "Senha alterada com sucesso!" << endl;
                            break;
                        }
                    }
                    else
                    {
                        cout << "Opção inválida. Tente novamente." << endl;
                    }

                } while (opcaoEditarDados != 0);
            }
            else
            {
                cout << "Opção inválida. Tente novamente." << endl;
            }

            break;
        case 2:
            int opcaoEditarM;
            for (int i = 0; i < sistema->getQuantosMecanicos(); i++)
            {
                cout << i + 1 << ". " << sistema->getMecanicos()[i]->getNome() << endl;
            }
            cout << "Escolha um mecânico para editar: ";
            cin >> opcaoEditarM;
            if (opcaoEditarM > 0 && opcaoEditarM <= sistema->getQuantosMecanicos())
            {
                int opcaoEditarDados;
                do
                {   
                    // Menu de edição de dados do mecânico selecionado
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
                    if (opcaoEditarDados > 0 && opcaoEditarDados <= 6)
                    {
                        string nome, cpf, telefone, email, login, senha;
                        switch (opcaoEditarDados)
                        {
                        // Edição de dados do mecânico selecionado conforme a opção escolhida pelo administrador
                        case 1:
                            cout << "Digite o novo nome: ";
                            cin >> nome;
                            sistema->getMecanicos()[opcaoEditarM - 1]->setNome(nome);
                            cout << "Nome alterado com sucesso!" << endl;
                            break;
                        case 2:
                            cout << "Digite o novo CPF: ";
                            cin >> cpf;
                            sistema->getMecanicos()[opcaoEditarM - 1]->setCpf(cpf);
                            cout << "CPF alterado com sucesso!" << endl;
                            break;
                        case 3:
                            cout << "Digite o novo telefone: ";
                            cin >> telefone;
                            sistema->getMecanicos()[opcaoEditarM - 1]->setTelefone(telefone);
                            cout << "Telefone alterado com sucesso!" << endl;
                            break;
                        case 4:
                            cout << "Digite o novo email: ";
                            cin >> email;
                            sistema->getMecanicos()[opcaoEditarM - 1]->setEmail(email);
                            cout << "Email alterado com sucesso!" << endl;
                            break;
                        case 5:
                            cout << "Digite o novo login: ";
                            cin >> login;
                            sistema->getMecanicos()[opcaoEditarM - 1]->setLogin(login);
                            cout << "Login alterado com sucesso!" << endl;
                            break;
                        case 6:
                            cout << "Digite a nova senha: ";
                            cin >> senha;
                            sistema->getMecanicos()[opcaoEditarM - 1]->setSenha(senha);
                            cout << "Senha alterada com sucesso!" << endl;
                            break;
                        }
                    }
                    else
                    {
                        cout << "Opção inválida. Tente novamente." << endl;
                    }
                } while (opcaoEditarDados != 0);
            }
            else
            {
                cout << "Opção inválida. Tente novamente." << endl;
            }

            break;
        case 3:
            // Adição de vendedor ao sistema
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
            sistema->addUsuario(new Vendedores(loginV, senhaV, sistema->getQuantosUsuarios() + 1, nomeV, cpfV, telefoneV, emailV));
            cout << "Vendedor adicionado com sucesso!" << endl;
            break;
        case 4:
            // Adição de mecânico ao sistema 
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
            sistema->addUsuario(new Mecanicos(loginM, senhaM, sistema->getQuantosUsuarios() + 1, nomeM, cpfM, telefoneM, emailM));
            cout << "Mecânico adicionado com sucesso!" << endl;
            break;
        case 5:
            // Remoção de vendedor do sistema 
            int opcaoRemoverV;
            for (int i = 0; i < sistema->getQuantosVendedores(); i++)
            {
                cout << i + 1 << ". " << sistema->getVendedores()[i]->getNome() << endl;
            }
            cout << "Escolha um vendedor para remover: ";
            cin >> opcaoRemoverV;
            if (opcaoRemoverV > 0 && opcaoRemoverV <= sistema->getQuantosVendedores())
            {
                sistema->removeUsuario(sistema->getVendedores()[opcaoRemoverV - 1]->getId());
                cout << "Vendedor removido com sucesso!" << endl;
            }
            else
            {
                cout << "Opção inválida. Tente novamente." << endl;
            }
            break;
        case 6:
            // Remoção de mecânico do sistema
            int opcaoRemoverM;
            for (int i = 0; i < sistema->getQuantosMecanicos(); i++)
            {
                cout << i + 1 << ". " << sistema->getMecanicos()[i]->getNome() << endl;
            }
            cout << "Escolha um mecânico para remover: ";
            cin >> opcaoRemoverM;
            if (opcaoRemoverM > 0 && opcaoRemoverM <= sistema->getQuantosMecanicos())
            {
                sistema->removeUsuario(sistema->getMecanicos()[opcaoRemoverM - 1]->getId());
                cout << "Mecânico removido com sucesso!" << endl;
            }
            else
            {
                cout << "Opção inválida. Tente novamente." << endl;
            }
            break;
        default:
            cout << "Opção inválida. Tente novamente." << endl;
            break;
        }
    } while (opcaoEditarVouF != 0);
}

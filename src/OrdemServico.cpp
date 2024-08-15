#include "OrdemServico.hpp"


OrdemServico::OrdemServico(int id, string data, string descricao, string status, string cliente, string veiculo) 
{
    this->id = id;
    this->data = data;
    this->descricao = descricao;
    this->status = status;
    this->cliente = cliente;
    this->veiculo = veiculo;



}

OrdemServico::~OrdemServico()
{
}

void OrdemServico::addServico(const Servicos &servico)
{
    this->servicos.push_back(servico);
}

void OrdemServico::removeServico(int id)
{
    for (size_t i = 0; i < this->servicos.size(); i++)
    {
        if (this->servicos[i].getId() == id)
        {
            this->servicos.erase(this->servicos.begin() + i);
            break;
        }
    }
}

vector<Servicos> OrdemServico::getServicos()
{
    return vector<Servicos>();
}

bool OrdemServico::execultarOrdemServico()
{
    for (size_t i = 0; i < this->servicos.size(); i++)//percorre o vetor de servicos
    {
        this->servicos[i].execultarServico();//execulta o servico
        
    };
    return true;

}

bool OrdemServico::finalizarOrdemServico()
{
    for (size_t i = 0; i < this->servicos.size(); i++)//percorre o vetor de servicos
    {
        this->servicos[i].finalizarServico();//finaliza o servico
        
    };
    return true;
}

bool OrdemServico::cancelarOrdemServico()
{
    for (size_t i = 0; i < this->servicos.size(); i++)//percorre o vetor de servicos
    {
        this->servicos[i].cancelarServico();//cancela o servico
        
    };
    return true;
}

void OrdemServico::print()
{
    cout << "ID: " << this->id << endl;
    cout << "Data: " << this->data << endl;
    cout << "Descricao: " << this->descricao << endl;
    cout << "Servicos: " << endl;
    for (size_t i = 0; i < this->servicos.size(); i++)
    {
        this->servicos[i].print();
    }

}


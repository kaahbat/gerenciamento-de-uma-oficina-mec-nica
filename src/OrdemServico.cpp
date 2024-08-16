#include "OrdemServico.hpp"


OrdemServico::OrdemServico(int id, string data, string descricao, string status, string valor, string veiculo, string cliente)
{
    this->id = id;
    this->data = data;
    this->descricao = descricao;
    this->status = status;
    this->valor = valor;
    this->veiculo = veiculo;
    this->cliente = cliente;
}


OrdemServico::~OrdemServico()
{
}

int OrdemServico::getId()
{
    return this->id;
}

string OrdemServico::getData()
{
    return this->data;
}

string OrdemServico::getDescricao()
{
    return this->descricao;
}

string OrdemServico::getStatus()
{
    return this->status;
}

string OrdemServico::getValor()
{
    return this->valor;
}

string OrdemServico::getVeiculo()
{
    return this->veiculo;
}

string OrdemServico::getCliente()
{
    return this->cliente;
}

void OrdemServico::setId(int id)
{
    this->id = id;
}

void OrdemServico::setData(string data)
{
    this->data = data;
}

void OrdemServico::setDescricao(string descricao)
{
    this->descricao = descricao;
}

void OrdemServico::setStatus(string status)
{
    this->status = status;
}

void OrdemServico::setValor(string valor)
{
    this->valor = valor;
}

void OrdemServico::setVeiculo(string veiculo)
{
    this->veiculo = veiculo;
}

void OrdemServico::setCliente(string cliente)
{
    this->cliente = cliente;
}

void OrdemServico::addPeca(string peca)
{
    this->pecas.push_back(peca);
}

void OrdemServico::addServico(string servico)
{
    this->servicos.push_back(servico);
}

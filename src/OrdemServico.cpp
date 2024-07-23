#include "OrdemServico.hpp"


OrdemServico::OrdemServico(int id, string data, string descricao)
{
    this->id = id;
    this->data = data;
    this->descricao = descricao;
}

OrdemServico::~OrdemServico()
{
}
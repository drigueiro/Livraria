#include "impresso.h"

Impresso::Impresso()
{

}

vector<string> Impresso::getLivrarias() const
{
    return livrarias;
}

void Impresso::setLivrarias(const vector<string> &value)
{
    livrarias = value;
}

int Impresso::getColunas() const
{
    return colunas;
}

void Impresso::setColunas(int value)
{
    colunas = value;
}



#include "impresso.h"

Impresso::Impresso() {}

Impresso::~Impresso() {}

vector<string> Impresso::getLivrarias() const { return this->livrarias; }

void Impresso::setLivrarias(const vector<string> &value){
    livrarias = value;
}

int Impresso::getColunas() const{ return this->colunas; }

void Impresso::setColunas(int conlunas) {
    this->colunas = colunas;
}

ostream &operator << (ostream &output, const Impresso &livro)
{
    output << "\n" << livro.getTitulo() << setw(-30) << " | " << setw(30) << livro.getEscritores().at(0) << " | " << livro.getIdioma() <<
              " | " << setw(3) << setfill('0') << livro.getCapitulos().size() << " | " << livro.getKeywords().size() << " | " <<
              livro.livrarias.at(1) << endl;
    return output;
}

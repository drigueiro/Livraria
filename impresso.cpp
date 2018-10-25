#include "impresso.h"

Impresso::Impresso()
{

}

Impresso::~Impresso()
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

vector<Livro*> Impresso::maiorQtdLivrarias(vector<Livro *> livros, int quantidade) // letra d interpretação 1
{
    vector<Livro*> vetoraux;
    Impresso* coisa;
    for(auto elem : livros){
        coisa = dynamic_cast<Impresso*>(elem);
        if(coisa != nullptr){
            if(int(coisa->getLivrarias().size()) >= quantidade) vetoraux.push_back(elem);
        }
    }
    return vetoraux;
}

Impresso Impresso::livroEmMaisLivrarias(vector<Livro *> livros) // letra d interpretação 2
{
    unsigned int tamanho = 0;
    Impresso* coisa;
    Impresso nada;
    for(auto elem : livros){
        coisa = dynamic_cast<Impresso*>(elem);
        if(coisa != nullptr){
            if(coisa->getLivrarias().size() >= tamanho){
                tamanho = coisa->getLivrarias().size();
                nada = *coisa;
            };
        }
    }
    return nada;
}

ostream &operator << (ostream &output, const Impresso &livro) // letra a
{
    output << "\n" << livro.getTitulo() << setw(-30) << " | " << setw(30) << livro.getEscritores().at(0) << " | " << livro.getIdioma() <<
              " | " << setw(3) << setfill('0') << livro.getCapitulos().size() << " | " << livro.getKeywords().size() << " | " <<
              livro.livrarias.at(1) << endl;
    return output;
}

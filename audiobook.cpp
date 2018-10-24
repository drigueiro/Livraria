#include "audiobook.h"

Audiobook::Audiobook() {}

Audiobook::~Audiobook(){}

float Audiobook::getDuracao() const { return this->duracao; }

void Audiobook::setDuracao(float duracao){
    this->duracao = duracao;
}

string Audiobook::getFormatoaudio() const { return this->formatoaudio; }

void Audiobook::setFormatoaudio(const string &formato){
    formatoaudio = formato;
}

ostream &operator << (ostream &output, const Audiobook &livro)
{
    output << "\n" << livro.getTitulo() << "\n" << setw(30) << livro.getEscritores().at(0) << "\n" << livro.getIdioma() <<
              "\n" << setw(3) << setfill('0') << livro.getCapitulos().size() << "\n" << livro.getKeywords().size() << "\n" <<
              setprecision(2) << fixed << livro.getDuracao() << endl;
    return output;
}

bool Audiobook::autorAudiobook(vector<Livro *> livros, string escritor){
    Audiobook* verif;
    for(auto elem:livros){//percorre vetor de livros para achar os audiobooks
        verif = dynamic_cast<Audiobook*>(elem);// verifica audiobook
        if(verif != nullptr){
            for(auto elem2 : verif->getEscritores()){//caminha no vetor de escritores de um audiobook do livro
                if(escritor == elem2){ // compara se existe esse escritor na lista de escritores
                    return true;//retorna verdadeiro se existir
                }
            }
        }
    }
    return false;
}



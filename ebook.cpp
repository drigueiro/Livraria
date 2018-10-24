#include "ebook.h"

Ebook::Ebook(){}

Ebook::~Ebook(){}

string Ebook::getUrl() const { return this->url; }

void Ebook::setUrl(const string &url) {
    this->url = url;
}

string Ebook::getFormato() const { return this->formato; }

void Ebook::setFormato(const string &formato) {
    this->formato = formato;
}

ostream &operator << (ostream &output, const Ebook &livro){
    output << "\n" << livro.getTitulo() << "\n" << setw(30) << livro.getEscritores().at(0) << "\n" << livro.getIdioma() <<
              "\n" << setw(3) << setfill('0') << livro.getCapitulos().size() << "\n" << livro.getKeywords().size() << "\n" <<
              livro.formato << endl;
    return output;
}

vector<Livro*> Ebook :: eletronicosOrdenados(string formato, vector<Livro*> vetor){ //letra c: como ordenar em função do ano, sobrecarga de sort()
    vector<Livro*> aux;//vetor para alocar livros do tipo eletronico
    Ebook* coisa;//ponteiro para dynamic cast
    for(auto elem : vetor){
        coisa = dynamic_cast<Ebook*>(elem);
        if(coisa != nullptr){
            if(coisa->getFormato() == formato){
                aux.push_back(elem);
            }
        }
    }
    sort(aux.begin(), aux.end());
    return aux;
}


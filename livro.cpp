#include "livro.h"

Livro::Livro() {}

Livro::~Livro() {}


vector<string> Livro::getEscritores() const { return this->escritores; }

void Livro::setEscritores(const vector<string> &value) {
    escritores = value;
}

string Livro::getTitulo() const { return this->titulo; }

void Livro::setTitulo(const string &titulo){
    this->titulo = titulo;
}

vector<string> Livro::getCapitulos() const {
    return this->capitulos;
}

void Livro::setCapitulos(const vector<string> &value){
    capitulos = value;
}

int Livro::getAno() const { return this->ano; }

void Livro::setAno(int ano) {
    this->ano = ano;
}

string Livro::getIdioma() const{ return this->idioma; }

void Livro::setIdioma(const string &idioma) {
    this->idioma = idioma;
}

vector<string> Livro::getKeywords() const { return keywords; }

void Livro::setKeywords(const vector<string> &value) {
    keywords = value;
}

ostream &operator << (ostream &output, const Livro &livro)
{
    output << "\n" << livro.getTitulo() << "\n" << setw(30) << livro.getEscritores().at(0) << "\n" << livro.getIdioma() <<
              "\n" << setw(3) << setfill('0') << livro.getCapitulos().size() << "\n" << livro.getKeywords().size() << endl;
    return output;
}

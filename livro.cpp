#include "livro.h"

Livro::Livro()
{

}

Livro::~Livro()
{

}


vector<string> Livro::getEscritores() const
{
    return escritores;
}

void Livro::setEscritores(const vector<string> &value)
{
    escritores = value;
}

string Livro::getTitulo() const
{
    return titulo;
}

void Livro::setTitulo(const string &value)
{
    titulo = value;
}

vector<string> Livro::getCapitulos() const
{
    return capitulos;
}

void Livro::setCapitulos(const vector<string> &value)
{
    capitulos = value;
}

int Livro::getAno() const
{
    return ano;
}

void Livro::setAno(int value)
{
    ano = value;
}

string Livro::getIdioma() const
{
    return idioma;
}

void Livro::setIdioma(const string &value)
{
    idioma = value;
}

vector<string> Livro::getKeywords() const
{
    return keywords;
}

void Livro::setKeywords(const vector<string> &value)
{
    keywords = value;
}

ostream &operator << (ostream &output, const Livro &livro)
{
    output << "\n" << livro.getTitulo() << "\n" << setw(30) << livro.getEscritores().at(0) << "\n" << livro.getIdioma() <<
              "\n" << setw(3) << setfill('0') << livro.getCapitulos().size() << "\n" << livro.getKeywords().size() << endl;
    return output;
}

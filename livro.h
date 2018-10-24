#ifndef LIVRO_H
#define LIVRO_H

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

class Livro
{
    vector<string> escritores;
    string titulo;
    vector<string> capitulos;
    int ano;
    string idioma;
    vector<string> keywords;
public:
    Livro();
    virtual ~Livro();
    vector<string> getEscritores() const;
    void setEscritores(const vector<string> &value);
    string getTitulo() const;
    void setTitulo(const string &value);
    vector<string> getCapitulos() const;
    void setCapitulos(const vector<string> &value);
    int getAno() const;
    void setAno(int value);
    string getIdioma() const;
    void setIdioma(const string &value);
    vector<string> getKeywords() const;
    void setKeywords(const vector<string> &value);

    friend ostream &operator << (ostream&, const Livro&);

    vector<Livro> idiomas(string idioma);
};
#endif // LIVRO_H

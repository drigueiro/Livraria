#ifndef EBOOK_H
#define EBOOK_H

#include "livro.h"

class Ebook : public Livro {
    string url;
    string formato;
public:
    Ebook();
    virtual ~Ebook();
    string getUrl() const;
    void setUrl(const string &url);
    string getFormato() const;
    void setFormato(const string &formato);

    friend ostream &operator << (ostream &output, const Ebook &livro);

    vector<Livro*> eletronicosOrdenados(string formato, vector<Livro*> vetor);
};

#endif

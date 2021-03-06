#ifndef IMPRESSO_H
#define IMPRESSO_H

#include "livro.h"

class Impresso : public Livro
{
    vector<string> livrarias;
    int colunas;
public:
    Impresso();
    virtual ~Impresso();
    vector<string> getLivrarias() const;
    void setLivrarias(const vector<string> &value);
    int getColunas() const;
    void setColunas(int value);

    friend ostream &operator << (ostream&, const Impresso&);

    vector<Livro*> maiorQtdLivrarias(vector<Livro*>, int);
    Impresso livroEmMaisLivrarias(vector<Livro*>);
};

#endif // IMPRESSO_H

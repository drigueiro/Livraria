#ifndef EBOOK_H
#define EBOOK_H

#include "livro.h"

class Ebook
{
    string url;
    string formato;
public:
    Ebook();
    string getUrl() const;
    void setUrl(const string &value);
    string getFormato() const;
    void setFormato(const string &value);
};

#endif // EBOOK_H

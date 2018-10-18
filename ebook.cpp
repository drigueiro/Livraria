#include "ebook.h"

Ebook::Ebook()
{

}

string Ebook::getUrl() const
{
    return url;
}

void Ebook::setUrl(const string &value)
{
    url = value;
}

string Ebook::getFormato() const
{
    return formato;
}

void Ebook::setFormato(const string &value)
{
    formato = value;
}



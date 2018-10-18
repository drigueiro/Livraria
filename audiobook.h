#ifndef AUDIOBOOK_H
#define AUDIOBOOK_H

#include "livro.h"

class Audiobook
{
    float duracao;
    string formatoaudio;
public:
    Audiobook();
    float getDuracao() const;
    void setDuracao(float value);
    string getFormatoaudio() const;
    void setFormatoaudio(const string &value);
};

#endif // AUDIOBOOK_H

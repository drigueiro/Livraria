#ifndef AUDIOBOOK_H
#define AUDIOBOOK_H

#include "livro.h"

class Audiobook : public Livro
{
    float duracao;
    string formatoaudio;
public:
    Audiobook();
    virtual ~Audiobook();
    float getDuracao() const;
    void setDuracao(float value);
    string getFormatoaudio() const;
    void setFormatoaudio(const string &value);

    bool autorAudiobook(vector<Livro*> livros, string escritor);
};

#endif // AUDIOBOOK_H

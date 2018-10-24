#ifndef AUDIOBOOK_H
#define AUDIOBOOK_H

#include "livro.h"

class Audiobook : public Livro{
    float duracao;
    string formatoaudio;
public:
    Audiobook();
    virtual ~Audiobook();
    float getDuracao() const;
    void setDuracao(float duracao);
    string getFormatoaudio() const;
    void setFormatoaudio(const string &formato);

    bool autorAudiobook(vector<Livro*> livros, string escritor);
};

#endif

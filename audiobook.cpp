#include "audiobook.h"

Audiobook::Audiobook()
{

}

float Audiobook::getDuracao() const
{
    return duracao;
}

void Audiobook::setDuracao(float value)
{
    duracao = value;
}

string Audiobook::getFormatoaudio() const
{
    return formatoaudio;
}

void Audiobook::setFormatoaudio(const string &value)
{
    formatoaudio = value;
}



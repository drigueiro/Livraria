#include <iostream>
#include <fstream>
#include "audiobook.h"
#include "ebook.h"
#include "impresso.h"

using namespace std;

vector<Livro*> retornaLivrosIdioma(string idioma, vector<Livro*> vetor)//letra b: retorna coleção de livros com o mesmo idioma
{
    vector<Livro*> auxiliar;//vector a ser retornado
    for (auto elem : vetor){
        if(elem->getIdioma() == idioma) auxiliar.push_back(elem);
    }
    return auxiliar;
}

vector<Livro*> retornaLivrosTitulo(string titulo, vector<Livro*> vetor)//letra f: retorna coleção de livros com o mesmo titulo
{
    vector<Livro*> auxiliar;//vector a ser retornado
    for (auto elem : vetor){
        if(elem->getTitulo() == titulo) auxiliar.push_back(elem);
    }
    return auxiliar;
}

void imprimeTipo(int escolha, vector<Livro *> vetor) {
    Ebook *eb;
    Impresso *imp;
    Audiobook *aud;
    for(auto elem : vetor){
        eb = dynamic_cast<Ebook*>(elem);
        imp = dynamic_cast<Impresso*>(elem);
        aud = dynamic_cast<Audiobook*>(elem);
        if(eb != nullptr) {
            if (escolha == 1)cout << eb;
            if (escolha == 2) //escreve no txt
        }
        else if(imp != nullptr) {
            if (escolha == 1)cout << imp;
            if (escolha == 2) //escreve no txt
        }
        else if(aud != nullptr) {
            if (escolha == 1)cout << aud;
            if (escolha == 2) //escreve no txt
        }
    }

}


int main()
{
//    vector<Livro*> livros;
//    int var;
//    string nomes;
//    vector<string> autores;
//    FILE* textos[16];
//    if((textos[0]=fopen("1","r+"))==nullptr) exit(1);
//    if((textos[1]=fopen("2","r+"))==nullptr) exit(1);
//    if((textos[2]=fopen("3","r+"))==nullptr) exit(1);
//    if((textos[3]=fopen("4","r+"))==nullptr) exit(1);
//    if((textos[4]=fopen("5","r+"))==nullptr) exit(1);
//    if((textos[5]=fopen("6","r+"))==nullptr) exit(1);
//    if((textos[6]=fopen("7","r+"))==nullptr) exit(1);
//    if((textos[7]=fopen("8","r+"))==nullptr) exit(1);
//    if((textos[8]=fopen("9","r+"))==nullptr) exit(1);
//    if((textos[9]=fopen("10","r+"))==nullptr) exit(1);
//    if((textos[10]=fopen("11","r+"))==nullptr) exit(1);
//    if((textos[11]=fopen("12","r+"))==nullptr) exit(1);
//    if((textos[12]=fopen("12","r+"))==nullptr) exit(1);
//    if((textos[13]=fopen("12","r+"))==nullptr) exit(1);
//    if((textos[14]=fopen("12","r+"))==nullptr) exit(1);
//    if((textos[15]=fopen("12","r+"))==nullptr) exit(1);
//    for(int i = 0; i < 16; i++){
//        fscanf(textos[i],"%d",&var);
//        if(var == 1)livros.push_back(new Impresso);
//        else if(var == 2)livros.push_back(new Ebook);
//        else if(var == 3)livros.push_back(new Audiobook);

//        fscanf(textos[i],"%s \n", nomes);
//        livros.at(i)->setTitulo(nomes);

//        fscanf(textos[i],"%s \n", &autores);
//        livros.at(i)->setEscritores(autores);
//    }

    return 0;
}

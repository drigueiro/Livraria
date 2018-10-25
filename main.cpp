#include <iostream>
#include <fstream>
#include "audiobook.h"
#include "ebook.h"
#include "impresso.h"

using namespace std;

const int tamlivros = 16;

vector<Livro*> retornaLivros(string idioma, vector<Livro*> vetor)//letra b: retorna coleção de livros com o mesmo idioma
{
    vector<Livro*> auxiliar;//vector a ser retornado
    for (auto elem : vetor){
        if(elem->getIdioma() == idioma) auxiliar.push_back(elem);
    }
    return auxiliar;
}



void imprimeTipo(int escolha, vector<Livro *> vetor) { // Letra J
    Ebook *eb;
    Impresso *imp;
    Audiobook *aud;
    fstream saida;
    saida.open("saida.txt",ios::out);
    for(auto elem : vetor){
        eb = dynamic_cast<Ebook*>(elem);
        imp = dynamic_cast<Impresso*>(elem);
        aud = dynamic_cast<Audiobook*>(elem);
        if(eb != nullptr) {
            if (escolha == 1)cout << *eb;
            if (escolha == 2)saida << *eb; //escreve no txt
        }
        else if(imp != nullptr) {
            if (escolha == 1)cout << *imp;
            if (escolha == 2)saida << *imp; //escreve no txt
        }
        else if(aud != nullptr) {
            if (escolha == 1)cout << *aud;
            if (escolha == 2)saida << *aud; //escreve no txt
        }
    }
    saida.close();
}

vector<Livro*>::iterator retornaTipos(string nome, vector<Livro*> vetor)
{
    vector<Livro*>::iterator itr;
    for(itr = vetor.begin(); itr != vetor.end(); itr++){
        if((*itr)->getTitulo() == nome) return itr;
    }
    (*itr) = nullptr;
    return itr;
}

multimap<string, string> detalhesIdiomas(vector<Livro*> livros) // Letra L
{
    typedef multimap<string, string> Mapeador;
    Mapeador mapeador;
    for(auto elem : livros){
        if(elem->getIdioma() == "Ingles") mapeador.insert(pair<string, string>(elem->getTitulo(),"ING"));
        else if(elem->getIdioma() == "Frances") mapeador.insert(pair<string, string>(elem->getTitulo(),"FRS"));
        else if(elem->getIdioma() == "Portugues") mapeador.insert(pair<string, string>(elem->getTitulo(),"POT"));
        else if(elem->getIdioma() == "Espanhol") mapeador.insert(pair<string, string>(elem->getTitulo(),"ESP"));
    }
    return mapeador;
}

int main(int argc, char *argv[])
{
    fstream arquivos[tamlivros];
    for(int i = 1; i < argc; i++){
        arquivos[i-1].open(argv[i],ios::in);
        if(!arquivos[i]) exit(1);
    }
    vector<Livro*> livros;
    int tipo = 0;
    for(int i = 0; i < tamlivros; i++){
        arquivos[i] >> tipo;
        if(tipo == 1){
            livros.push_back(new Impresso);
        }
        else if(tipo == 2){
            livros.push_back(new Ebook);
        }
        else if(tipo == 3){
            livros.push_back(new Audiobook);
        }
    }

    // implementação letra b
    string var;
    cin >> var;
    vector<Livro*> retLivros = retornaLivros(var, livros);
    for(auto elem : retLivros){
        cout << elem;
    }

    // implementação letra c
//    Ebook eletr;
//    cin >> var;
//    vector<Livro*> ebooks = eletr.eletronicosOrdenados(var, livros);
//    for(auto elem : ebooks){
//        cout << elem;
//    }

    // implementação letra d
    Impresso imp;
    int var2;
    cin >> var2;
    vector<Livro*> impressos = imp.maiorQtdLivrarias(livros, var2);
    for(auto elem : impressos){
        cout << elem->getTitulo() << " ";
    }
    cout << endl;

    // implementação letra e
    cin >> var;
    Audiobook audio;
    bool temEscritor = audio.autorAudiobook(livros, var);
    if(temEscritor) cout << "\n Há Audiobooks feitos pelo escritor " << var << endl;
    else cout << "\n Não há Audiobooks feitos por este escritor..." << endl;

    // implementação letra g
    Livro lv;
    cin >> var;
    set<string> chaves = lv.retornaKeywords(var, livros);
    for(auto elem : chaves){
        cout << elem << " ";
    }
    cout << endl;

    for(int i = 0; i < tamlivros; i++){
        arquivos[i].close();
    }

    return 0;
}


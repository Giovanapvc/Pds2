#ifndef MUSICA_H
#define MUSICA_H
#include <iostream>
#include <string> 
/* #include "avaliacao_basica_playlist.hpp" */

using namespace std;

struct Musica{
//atributos
int _id;
string _nome = "";
string _artista = "";
string _album = "";
float _duracao;
bool _favorita;
Musica* prox;
Musica* ant;
//metodos
Musica (int id = 0, std::string nome = "", std::string artista = "", std::string album = "", float duracao = 0.0);
void imprimir_dados();
int conversao_duracao(float duracao);
};


#endif
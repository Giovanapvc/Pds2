#include <iostream>
#include <string>
#include "Musica.hpp"
#include <iomanip>
#include <cmath>


using namespace std;

Musica::Musica (int id, std::string nome, std::string artista, std::string album, float duracao){
    this-> _id = id = 1;
    this-> _nome = nome;
    this -> _artista = artista;
    this -> _album = album;
    this -> _duracao = duracao;
}

void Musica::imprimir_dados(){  //formatacao de minutos
    _duracao = conversao_duracao(_duracao);
    cout << _album << "\t" << _artista << "\t" << _nome << "\t" << _duracao << "\t" << _favorita << endl;   //imprimir na notação pedida
}

int conversao_duracao(float duracao){
int minutos = floor (duracao / 60);
int segundos = floor(minutos % 60);
cout << minutos << ":" << segundos;
}



//quando adicionar filme deve incrementar id
#include <string>
#include <iostream>
#include <iomanip>
#include "Review.hpp"
#include "Usuario.hpp"
#include "Filme.hpp"
#include <vector>

using namespace std;

Filme::Filme(int id, string nome, string genero, int duracao){
    this -> _id = id;
    this -> _nome = nome;
    this -> _genero = genero;
    this -> _duracao = duracao;
}

int Filme::getId(){
    return this -> _id;
}

string Filme::getNome(){
    return this -> _nome;
}

string Filme::getGenero(){
    return this -> _genero;
}

int Filme::getDuracao(){
    return this -> _duracao;
}


Review* Filme::adicionar_review(string comentario, float nota){
    Review* rev = new Review(this, comentario, nota);
    this -> _reviews.push_back(*rev);
    return rev;
}

void Filme::imprimir_nota_consolidada(){
    double media = 0.0;
    double n = 0.0;
    for (Review r :  _reviews){
        n = n + r.getNota();
        if (r.getNota() != 0){
            media = n/_reviews.size();
        } 
    }
    cout << this -> _nome << "\t" << "Reviews:" << "\t" << this -> _reviews.size() << "\t" << "Nota media:" << fixed << setprecision(1) << media << "\t" << endl;
    
} 

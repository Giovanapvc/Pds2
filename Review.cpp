#include <iostream>
#include "Filme.hpp"
#include "Usuario.hpp"
#include "Review.hpp"
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

Review::Review (Filme* filme, string comentario, float nota){
    this -> _filme = filme;
    this -> _comentario = comentario;
    this -> _nota = nota;
}

Filme* Review::getFilme(){
    return this -> _filme;
}

string Review::getComentario(){
    return this -> _comentario;
}

float Review::getNota(){
    return this -> _nota;
}

void Review::imprime(){
    cout << _filme -> getNome() << "\t" << getComentario() << "\t" << getNota() << "\t" << endl;
}


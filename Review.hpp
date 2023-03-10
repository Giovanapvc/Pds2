#ifndef REVIEW_H
#define REVIEW_H
#include <iostream>
#include "Filme.hpp"
#include <iomanip>
#include <string>
#include <vector>

using namespace std; 

class Filme;

class Review{

private:
Filme* _filme;
string _comentario;
float _nota;

public:
Review (Filme* filme = nullptr, string comentario = " ", float nota = 0.0);
Filme* getFilme();
string getComentario();
float getNota();
void imprime();



};



#endif
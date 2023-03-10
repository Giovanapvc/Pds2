#ifndef FILME_H
#define FILME_H
#include <string>
#include <iostream>
#include <iomanip>
#include "Review.hpp"
#include "Usuario.hpp"
#include <vector>


using namespace std; 

class Review;

class Filme{

private:
int _id;
string _nome;
string _genero;
int _duracao;
vector <Review> _reviews;


public:
Filme(int id = 0, string nome = " ", string genero = " ", int duracao = 0);
Review* adicionar_review(string comentario, float nota);
void imprimir_nota_consolidada();
int getId();
string getNome();
string getGenero();
int getDuracao();

};





#endif
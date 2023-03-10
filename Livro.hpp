#ifndef LIVRO_H
#define LIVRO_H
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "Produto.hpp"

using namespace std;

class Livro : public Produto{

private:
string _titulo;
string _autor;
int _ano;

public:
Livro(int id = 0, float valor = 0.0, string titulo = "", string autor = "", int ano = 0);
void imprimir_info();
string getTitulo();
string getautor();
int getAno();


};

#endif
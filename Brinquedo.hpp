#ifndef BRINQUEDO_H
#define BRINQUEDO_H
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "Produto.hpp"

using namespace std;

class Brinquedo : public Produto{
private:
string _nome;
int _idade_minima;

public:
Brinquedo(int id = 0, float valor = 0.0, string nome = "", int idade_minima = 0);
void imprimir_info();
string getNome();
int getIdadeMinima ();

};

#endif
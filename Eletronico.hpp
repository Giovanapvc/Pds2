#ifndef ELETRONICO_H
#define ELETRONICO_H
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "Produto.hpp"

using namespace std;

class Eletronico : public Produto{

private:
string _marca;
string _modelo;

public:
Eletronico(int id = 0, float valor = 0.0, string marca = "", string modelo = "");
void imprimir_info();
string getMarca();
string getModelo();

};




#endif
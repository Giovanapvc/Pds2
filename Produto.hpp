#ifndef PRODUTO_H
#define PRODUTO_H
#include <string>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

class Produto{

protected:
int _id;
float _valor_unitario;

public:
Produto(int id = 0, float valor_unitario = 0.0);
virtual void imprimir_info() = 0;
int getId();
float getValor();

};

#endif
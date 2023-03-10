#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>
#include <iostream>
#include <iomanip>
#include <vector>
#include "Produto.hpp"

using namespace std;

class Pedido{

private:
Produto* _produto;
int _quantidade;

public:
Pedido(Produto* produto = nullptr, int quantidade = 0);
double get_valor_total();
int getQuantidade();
Produto* getProduto();
/* ~Pedido(); */



};


#endif
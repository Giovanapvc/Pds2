#ifndef CARRINHO_H
#define CARRINHO_H
#include <string>
#include <iostream>
#include <iomanip>
#include <vector>
#include "Pedido.hpp"

using namespace std;

class Carrinho{

private:
vector<Pedido*> _pedidos;

public:
void adicionar_pedido(Produto* produto, int quantidade);
void imprimir_resumo();
~Carrinho();


};


#endif
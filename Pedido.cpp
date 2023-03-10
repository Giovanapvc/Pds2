#include <string>
#include <iostream>
#include <iomanip>
#include "Pedido.hpp"
#include "Produto.hpp"
#include "Carrinho.hpp"
#include <vector>

using namespace std;

Pedido::Pedido(Produto* produto, int quantidade) : _produto(produto), _quantidade(quantidade){}

/* Pedido::~Pedido(){
    delete(_produto);
} */

int Pedido::getQuantidade(){
    return this -> _quantidade;
}

double Pedido::get_valor_total(){
    double total;
    total = _produto -> getValor() * this -> _quantidade;
    return total;

}

Produto* Pedido::getProduto(){
    return this -> _produto;
}


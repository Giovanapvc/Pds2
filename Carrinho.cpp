#include <string>
#include <iostream>
#include <iomanip>
#include "Pedido.hpp"
#include "Produto.hpp"
#include "Carrinho.hpp"
#include <vector>

using namespace std;

void Carrinho::adicionar_pedido(Produto* produto, int quantidade){
Pedido *p = new Pedido(produto, quantidade);
this -> _pedidos.push_back(p);
}

void Carrinho::imprimir_resumo(){
double total = 0.0;
    for (int i = 0; i < _pedidos.size(); i++){
        _pedidos[i] -> getProduto() -> imprimir_info();
        cout << fixed;
        cout << setprecision(2);
        cout << "Qtde:" << "\t" << _pedidos[i] -> getQuantidade() << "\t" << "Total produto: R$" << "\t" << _pedidos[i] -> get_valor_total() << endl;
        total = total + _pedidos[i] -> get_valor_total();
    }
cout << fixed;
cout << setprecision(2);
cout << "Total carrinho: R$" << "\t" << total << endl;
 }

Carrinho::~Carrinho(){
    for (int i = 0; i < _pedidos.size(); i++){
    delete(_pedidos[i]);
}
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "Produto.hpp"
#include "Livro.hpp"
#include "Brinquedo.hpp"
#include "Eletronico.hpp"
#include "Pedido.hpp"
#include "Catalogo.hpp"

using namespace std;

void Catalogo::adicionar_produto(string nome, int idade_minima, float valor){
Brinquedo* b = new Brinquedo(this -> _produtos.size() + 1, valor, nome, idade_minima);
this -> _produtos.push_back(b);
}

void Catalogo::adicionar_produto(string titulo, string autor, int ano, float valor){
Livro* l = new Livro(this -> _produtos.size() + 1, valor, titulo, autor, ano);
this -> _produtos.push_back(l);
}

void Catalogo::adicionar_produto(string marca, string modelo, float valor){
Eletronico* e = new Eletronico(this -> _produtos.size() + 1, valor, marca, modelo);
this -> _produtos.push_back(e);
}

Produto* Catalogo::buscar_produto(int id){
Produto* pr = nullptr;
if (_produtos.size() == 0){
    cout << "Produto não encontrado!" << endl;
} else {
    for (int i = 0; i < _produtos.size(); i++){
        if(_produtos[i] -> getId() == id) {
            pr = _produtos[i];
        }
    }
}
if (pr == nullptr){
    cout << "Produto não encontrado!" << endl;
    }
return pr;
}


void Catalogo::imprimir(){
    for (int i = 0; i < _produtos.size(); i++){
        _produtos[i] -> imprimir_info();
    }
}


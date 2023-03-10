#ifndef CATALOGO_H
#define CATALOGO_H
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "Produto.hpp"
#include "Livro.hpp"
#include "Brinquedo.hpp"
#include "Eletronico.hpp"
#include "Pedido.hpp"

using namespace std;

class Catalogo{

private:
vector <Produto*> _produtos;
int _id;

public:
void adicionar_produto(string nome, int idade_minima, float valor);
void adicionar_produto(string titulo, string autor, int ano, float valor);
void adicionar_produto(string marca, string modelo, float valor);
Produto* buscar_produto(int id);
void imprimir();

};

#endif
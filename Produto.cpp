#include <string>
#include <iostream>
#include <iomanip>
#include <vector>
#include "Produto.hpp"

using namespace std;

Produto::Produto(int id, float valor_unitario) : _id(id), _valor_unitario(valor_unitario){}

int Produto::getId(){
    return this -> _id;
}

float Produto::getValor(){
    return this -> _valor_unitario;
}


#include <string>
#include <iostream>
#include <iomanip>
#include <vector>
#include "Produto.hpp"
#include "Brinquedo.hpp"

using namespace std;

Brinquedo::Brinquedo(int id, float valor, string nome, int idade_minima) : Produto(id, valor), _nome(nome), _idade_minima(idade_minima){}

void Brinquedo::imprimir_info(){
cout << fixed;
cout << setprecision(2);
cout << this -> _id << "\t" << "Brinquedo" <<"\t" << this -> _nome << "\t" << this -> _idade_minima << "\t" << "R$" << "\t" << this -> _valor_unitario << endl;

}


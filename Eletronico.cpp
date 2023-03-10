#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "Produto.hpp"
#include "Eletronico.hpp"

using namespace std;

Eletronico::Eletronico(int id, float valor, string marca, string modelo) : Produto(id, valor), _marca(marca), _modelo(modelo){}

void Eletronico::imprimir_info(){
cout << fixed;
cout << setprecision(2);
cout << this -> _id << "\t" << "Eletronico" <<"\t" << this -> _marca << "\t" << this -> _modelo << "\t" << "R$ " << this -> _valor_unitario << endl;

}
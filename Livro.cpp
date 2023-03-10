#include <string>
#include <iostream>
#include <iomanip>
#include <vector>
#include "Produto.hpp"
#include "Livro.hpp"

using namespace std;

Livro::Livro(int id, float valor, string titulo, string autor, int ano) : Produto(id, valor), _titulo(titulo), _autor(autor), _ano(ano){}

void Livro::imprimir_info(){
cout << fixed;
cout << setprecision(2);
cout << this -> _id << "\t" << "Livro" <<"\t" << this -> _titulo << "\t" << this -> _autor << "\t" << this -> _ano << "\t" << "R$ " << this -> _valor_unitario << endl;

}


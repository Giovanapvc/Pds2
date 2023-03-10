#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "Veiculo.hpp"
#include "Caminhao.hpp"

using namespace std;

Caminhao::Caminhao(string subtipo, int velo_max, int n_passageiros, int carga_max) : Veiculo("Caminhao", velo_max, n_passageiros), _carga_max(carga_max){
}


Caminhao::Caminhao(int velo_max, int n_passageiros, int carga_max) :  Veiculo("CaminhaoAutonomo", velo_max, n_passageiros), _carga_max(carga_max){} 


Caminhao::~Caminhao(){
    cout << "Destrutor Caminhao" << endl;
}


int Caminhao::estima_preco(){
    int p = 50000 + (100 * this -> _carga_max) + (10 * this -> _velo_max);
    return p;
}


void Caminhao::print_info(){
    this -> print_info();  //Veiculo::print_info();
    cout << "Carga maxima: " << this -> _carga_max << "kg" << endl;
}



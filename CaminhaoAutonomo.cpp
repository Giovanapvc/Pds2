#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "Veiculo.hpp"
#include "Caminhao.hpp"
#include "CaminhaoAutonomo.hpp"

using namespace std;

CaminhaoAutonomo::CaminhaoAutonomo(int velo_max, int n_passageiros, int carga_max, string fabricante) : Caminhao(velo_max, n_passageiros, carga_max), _fabricante(fabricante){
}

CaminhaoAutonomo::~CaminhaoAutonomo(){
    cout << "Destrutor CaminhaoAutonomo" << endl;
}

int CaminhaoAutonomo::estima_preco(){
    int p = 0;
    if (this -> _fabricante == "Tesla"){
        p = 500000 + 100 * this -> _carga_max + 10 * this -> _velo_max;
    } else if (this -> _fabricante == "Waymo"){
            p = 400000 + 100 * this -> _carga_max + 10 * this -> _velo_max;
    }
    return p;
}

void CaminhaoAutonomo::print_info(){
    Caminhao::print_info();
    cout << "\t" << "Fabricante: " << this -> _fabricante << endl;
}
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "Veiculo.hpp"

using namespace std;

int Veiculo::_next_id = 0;

Veiculo::Veiculo(string subtipo, int velo_max, int n_passageiros) : subtipo(subtipo), _velo_max(velo_max), _n_passageiros(n_passageiros)
{
    Veiculo::_next_id++;
    this->_id = _next_id;
}

Veiculo::~Veiculo()
{
    cout << "Destrutor Veiculo" << endl;
}

int Veiculo::get_id()
{
    return this->_id;
}

void Veiculo::print_info()
{
    cout << "Info: Veiculo " << this->_id << endl;
    cout << "Preco estimado: RS " << this->estima_preco() << ",00" << endl;
    cout << "\t"
         << "Subtipo: " << this->subtipo << endl;
    cout << "\t"
         << "Velocidade maxima: " << this->_velo_max << " km/h" << endl;
    cout << "\t"
         << "Capacidade de passageiros: " << this->_n_passageiros << endl;
}

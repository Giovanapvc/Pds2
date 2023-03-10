#ifndef CAMINHAO_H
#define CAMINHAO_H
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "Veiculo.hpp"

using namespace std;

class Caminhao : public Veiculo{

protected:
int _carga_max;

public:
Caminhao(string subtipo, int velo_max, int n_passageiros, int carga_max);
Caminhao(int velo_max, int n_passageiros, int carga_max);
virtual ~Caminhao();
int estima_preco() override;
void print_info() override;

};

#endif
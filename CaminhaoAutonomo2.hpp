#ifndef CAMINHAOAUTONOMO_H
#define CAMINHAOAUTONOMO_H
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "Veiculo.hpp"
#include "Caminhao.hpp"

using namespace std;

class CaminhaoAutonomo : public Caminhao{

protected:
string _fabricante;

public:
CaminhaoAutonomo(int velo_max, int n_passageiros, int carga_max, string fabricante);
virtual ~CaminhaoAutonomo();
int estima_preco() override;
void print_info() override;
};

#endif
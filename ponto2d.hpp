#ifndef PONTO2D_H
#define PONTO2D_H
#include <iostream>
#include <cmath>

using namespace std;

struct Ponto2D{
    //atributos
    double _x;
    double _y;

    //metodos
    Ponto2D(double x = 0, double y = 0);
    double calcular_distancia(Ponto2D* ponto);

};

#endif


#ifndef ROBO_H
#define ROBO_H
#include <iostream>
#include <cmath>
#include "ponto2d.hpp"
using namespace std;

struct Robo{

//atributos
double _energia = 100;
bool _com_bola;
int _id;
Ponto2D _p1;
            

//metodos
Robo(int a = 0, Ponto2D p1 = 0, bool _com_bola = 0);
void mover(double v, double th, double t);
double calcular_distancia(Robo* robo);
Robo* determinar_robo_mais_proximo(Robo** naves, int n);
void passar_bola(Robo** time, int n);
void imprimir_status();
};




#endif

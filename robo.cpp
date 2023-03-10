#include <iostream>
#include <cmath>
#include "Ponto2D.hpp"
#include "Robo.hpp"


using namespace std;

Robo::Robo(int id, Ponto2D p1, bool com_bola){   //construtor
    this -> _id = id;
    this -> _p1 = p1;
    this -> _com_bola = com_bola;
}
void Robo::mover(double v, double th, double t){
double desloc = v*t;
this -> _p1._x += v * cos(th) * t;
this -> _p1._y += v * sin(th) * t;
this -> _energia = _energia - desloc;
}

double Robo::calcular_distancia(Robo* robo){  //robo é a comparacao - robos do msm time
double ex = robo-> _p1._x - this->_p1._x;   // ta retornando o mesmo ponto
double ey = robo->_p1._y - this->_p1._y;
return sqrt(pow(ex,2) + pow(ey, 2));
}

Robo* Robo::determinar_robo_mais_proximo(Robo** naves, int n){  
double v[n];
Robo* m;
double menor = 1000.0;
    for (int i = 0; i < n; i++){
           v[i] = this -> calcular_distancia(naves[i]);
    }
    for (int i = 0; i < n; i++){
        if (menor > v[i] && v[i] != 0.0){
            menor = v[i];
            m = naves[i];
        }
}
return m;
}

void Robo::passar_bola(Robo** time, int n){      //apenas muda status
    if (this -> _com_bola == 0){
        cout <<  "Estou sem a bola!" << endl;
    }
    else {
        Robo* prox;
        prox = this -> determinar_robo_mais_proximo (time, n);
        this -> _com_bola = 0;
        prox -> _com_bola = 1;
    }
    }

void Robo::imprimir_status(){
    cout << this -> _id << "\t" << this -> _p1._x << "\t" << this ->_p1._y << "\t" << this ->_com_bola << "\t" << this ->_energia << endl;  
}
#include <iostream>
#include <cmath>
#include "ponto2d.hpp"

using namespace std;

//No hpp eu faço a declaracao do tipo (oq ele tem, como se comporta), e no cpp faco a definicao, o que /* ele faz - definir em qual tad faco tal comportamento

Ponto2D::Ponto2D(double x, double y){     //construtores inicializados nulos
    this->_x = x;
    this->_y = y;
}

double Ponto2D::calcular_distancia(Ponto2D* ponto){
    double dx = ponto->_x - this->_x;   //atribuir o ponto à double x usando o construtor, faz a estrutura atribuição -> x - this->x (que vem do double x da struct) 
    double dy = ponto->_y - this->_y;
    return sqrt(pow(dx,2) + pow(dy, 2));
}
 
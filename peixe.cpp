#include <iostream>
#include <string>
#include <memory>
#include "peixe.hpp"
#include "criatura.hpp"

using namespace std;

Peixe::Peixe(double peso, char sexo) :  Criatura("Peixe"), _peso(peso), _sexo(sexo){
    cout << "Peixe:" << this -> _subtipo << endl;
}

Peixe::~Peixe(){
    cout << "~Peixe: " << this -> _subtipo << endl;
}

double Peixe::get_peso(){
    return this -> _peso;
}

char Peixe::get_sexo(){
    return this -> _sexo;
}

void Peixe::print_info() { 
    Criatura::print_info();
    cout << "\t" << "Peso: " << this -> _peso << "kg" << endl;
    cout << "\t" << "Sexo: " << this -> _sexo << endl;
}

list<unique_ptr<Criatura>> Peixe::acasalar(shared_ptr<Criatura> c){
    list<unique_ptr<Criatura>> l;
    if (c -> get_subtipo() == "Peixe"){
    shared_ptr<Peixe> p = dynamic_pointer_cast<Peixe>(c);
        if ( p -> _sexo != this -> _sexo ){
            double media;
            media = ((p -> _peso) + (this -> _peso))/2;
            unique_ptr<Peixe> filha = make_unique<Peixe>(media,"F");
            unique_ptr<Peixe> filho = make_unique<Peixe>(media, "M");
            l.push_back(move(filha));
            l.push_back(move(filho));
        }
    }
    return l;

}



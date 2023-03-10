#include <iostream>
#include <string>
#include <memory>
#include "polvo.hpp"
#include "criatura.hpp"

using namespace std;

Polvo::Polvo(double qi) : Criatura("Polvo"), _qi(qi){
    cout << "Subtipo: " << this -> _subtipo << endl;
}

Polvo::~Polvo(){
    cout << "~Polvo:" << this -> _subtipo << endl;
}

double Polvo::get_qi(){
    return this -> _qi;
}

void Polvo::print_info(){
    Criatura::print_info();
    cout << "\t" << "QI:" << this -> _qi << endl;
}

list<unique_ptr<Criatura>> Polvo::acasalar(shared_ptr<Criatura> c){
    list<unique_ptr<Criatura>> l;
    if (c -> get_subtipo() == "Polvo"){
        double media;
        shared_ptr<Polvo> p = dynamic_pointer_cast<Polvo>(c);
        media = ((p -> _qi) + (this -> _qi))/2;
        unique_ptr<Polvo> filhe = make_unique<Polvo>(media);
        l.push_back(move(filhe));
        }
    return l;
}



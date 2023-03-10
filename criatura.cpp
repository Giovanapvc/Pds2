#include <iostream>
#include <string>
#include "criatura.hpp"

using namespace std;

Criatura::Criatura(string subtipo) {
    this -> _subtipo = subtipo;
    cout << "Criatura: " << this -> _subtipo << endl;
}

Criatura::~Criatura(){
    cout << "~Criatura: " << this -> _subtipo << endl;
}

string Criatura::get_subtipo(){
    return this -> _subtipo;
}

void Criatura::print_info(){
    cout << "Info: " << this -> _subtipo << endl;
}
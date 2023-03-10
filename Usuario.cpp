#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "Review.hpp"
#include "Usuario.hpp"
#include "Filme.hpp"

using namespace std;

Usuario::Usuario(string login, string nome){
    this -> _login = login;
    this -> _nome = nome;
}

/* Usuario::~Usuario(string login, string nome){
    delete(login);
    delete(nome);
} */

string Usuario::getlogin(){
    return this -> _login;
}

string Usuario::getnome(){
    return this -> _nome;
}

void Usuario::associar_review(Review* review){
this -> _review.push_back(*review);
}

void Usuario::imprimir_info(){
cout << this -> _nome << "\t" << "Reviews:" << "\t" << this -> _review.size() << endl;
}

void Usuario::imprimir_reviews(){
if (this -> _review.size() == 0){
    cout << "Usuario " << this -> _nome << " não possui reviews!" << endl;
} else{
    cout << this -> _nome << "\t" << "Reviews:" << "\t" << this -> _review.size() << endl;
    for (Review r :  _review){
       r.imprime();
    }
}
} 

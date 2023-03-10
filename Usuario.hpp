#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include "Review.hpp"
#include <iomanip>
#include <string>
#include <vector>

using namespace std;
class Review;

class Usuario{
   
private:
string _login, _nome;
vector <Review> _review;

public:
Usuario(string _login = " ", string _nome = " ");
string getlogin();
string getnome();
void associar_review(Review* review);
void imprimir_info();
void imprimir_reviews();
};


#endif
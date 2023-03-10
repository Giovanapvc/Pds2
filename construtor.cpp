#include <iostream>
#include <string>
#include <cmath>

//EXERCICIO CONSTRUTORES COM E SEM PARAMETROS

using namespace std;

struct classe {
    int a, b;
    classe (){                     //NAO ESQUECER DO TIPO
        this -> a = a;                 //PRESTA ATENCAO NA ATRIBUICAO CORRETA
        this -> b = b;
    }
    classe(int valor){
        a = valor;
    }
};

int main(){
    classe num1(2);    //USAR STRUCT
    classe num2;
    cout << num1.a << " " << num2.b << endl;
   
    return 0;
}
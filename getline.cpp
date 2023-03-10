#include <iostream>
#include <string>

using namespace std;

int main(){

    string nome_completo;
    cout << "Digite seu nome completo: " << endl;
    getline (cin, nome_completo);  //criar string unica com espacos nas linhas

    cout << "Olá " << nome_completo << "!" << endl;

    return 0;
}
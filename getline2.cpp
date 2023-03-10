#include <iostream>
#include <string>
#include <sstream>  //biblioteca usada para manipular objetos de string como se fossem streams

using namespace std;

int main(){

    string line;
    while (getline(cin, line)){

        stringstream info(line);   //criando um stream(e/s) local a partir da linha lida
        string aux;
        while (getline(info, aux, ';')){  //a quebra de linha é delimitada por ;
            cout << aux << endl;
        }
    }
    return 0;
    //para executar no terminal faz ./teste2 < nomesarq.txt.
}
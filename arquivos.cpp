#include <iostream>
#include <fstream> //biblioteca para E/S em arquivos
#include <string>

using namespace std;

int main(){

    ifstream in("entrada.txt", fstream::in); // Stream (arquivo) de entrada
    if(!in.is_open()){
        return 1;
    }


    ofstream out("saida.txt", fstream::out); //Stream (arquivo) de saida
    if(!out.is_open()){
        return 1;
    }

    string line;
    while(getline(in, line)){
        cout << "*" << line << "*" << endl;
        out << "[" << line << "]" << endl;

    }

    in.close();
    out.close();
    return 0;
}
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){

    string frase = "Lorem ipsum dolor sit amet";
    string palavra;

    stringstream s(frase);

    while (s >> palavra){
        cout << palavra << endl;
    }
    return 0;
    
}
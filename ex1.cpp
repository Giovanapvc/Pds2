#include <iostream>
#include <string>

using namespace std;

int main(){
string a;
a = "123456";

string b;
b = "123456";

cout << b.length()<<endl;

bool igual = (a == b);
cout << igual << endl;

cout << a[2] << endl;
cout << b[4] << endl;

a[2] = '2';
cout << a << endl;

string c = a + b;
cout << c << endl;

return 0;
}
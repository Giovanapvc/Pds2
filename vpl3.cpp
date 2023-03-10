#include <iostream>
using namespace std;

int main(){
//1)
int valor;
//2)
int *p2 = nullptr;

cin >> valor;
cout << endl;

//3)
int tam;
cin >> tam;
int v[10];
    for (int i = 0; i < tam; i++){
        cin >> v[i]; 
  }
cout << endl;
//4)
int *p1 = &valor;  
cout << p1 << endl;
//5)
cout << *p1 << endl;   
//6)
p2 = new int;
cout << p2 << endl;
//7)
cout << *p2 << endl;
//8)
cout << &v[tam] << endl;

//9)
cout << &v[0] << endl;

//10)
cout << v[0] << endl; 

//11)
p2 = p1;

//12)
cout << p2 << endl;  

//13)
cout << *p2 << endl;

//14)
if (p1 == p2){
    cout << "1" << endl;
}
else {
    cout << "0" << endl;
}

//15)
*p2 = 5;  

//16)
cout << *p1 << endl;

//17
*p2 = *v;

//18)
cout << p2 << endl;
//19)
cout << *p2 << endl; 

//20)
p2 = &v[0];

//21)

cout << p2 << endl; 

//22)
cout << *p2 << endl;

//23)
p2 = &*v;
*p2 * 10;

//24)
    for (int i = 0; i < tam; i++){
        if (i < tam -1){
    cout << v[i] * 10 << " ";
}
else {
    cout << v[i] * 10 << endl;
}
    }
//25)
for (int i = 0; i < tam; i++){
    int *p2 = &v[i];
    int p5 = *p2 * 10;
    if (i < tam - 1){
    cout << p5 << " ";
}
    else {
        cout << p5 << endl;
    }
}
 //26)
for (int i = 0; i < tam; i++){
    int *p2 = &v[i];
    *p2 = *p2 * 10;
    if (i < tam - 1){
    cout <<  *p2 << " ";
}
    else {
        cout << *p2 << endl;
    }
}

//27)

p2 = &v[4];

//28)
cout << p2 << endl;

//29)
cout << *p2 << endl;

//30)
int *p3 = p2 - 4;
cout << *p3 << endl;

//31)
int **pp = &p2;

//32)
cout << p2 << endl; 

//33)
cout << pp << endl;

//34)
cout << *pp << endl;

//35)
cout << **pp << endl;
 
return 0;
}
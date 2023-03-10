#include <iostream>
#include <string>

using namespace std;

int main(){
    int num;
    char letra[10];
    string s, palavra;
    int conta[100];

    cin >> num; 
    
    for (int cont = 0; cont < num; cont++){
        conta[cont] = 0;
        cin >> letra[cont];
        }
 

  while(getline(cin, palavra))
   if(palavra != ""){
          break;
    }
   
    s += palavra;

    for (int i = 0; i < s.length(); i++){
        for (int j =0; j < num; j++){
            if (s[i] == letra [j]){
            s[i] = '#';
            conta[j]++;
            }
           }
        }

    cout << s << endl;
    
        for (int j =0; j < num; j++){
            cout << letra[j] << " " << conta[j] << endl;
      
        }
        

    return 0;
}

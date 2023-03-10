#ifndef PILHA_H
#define PILHA_H
#include <iostream>



using namespace std;

template <class T>

class Pilha {

private:
    T* _arr;
    int _max_tam;
    int _top = -1;

public:
    Pilha(int max_tam = 0) : _max_tam(max_tam){
        this -> _arr = new T[max_tam];
    }

    ~Pilha(){
        delete (_arr);
    }

    bool push(const T& novo_e) {
        if (_top < _max_tam - 1){
        _top++;
        _arr[_top] = novo_e;
            return true;
        } else {
            return false;
        }
    }

    bool pop(T& valor) {
        if (_top >= 0){
            valor = _arr[_top];
            _top--;
            return true;
        } else {
            return false;

        }
    }

    bool get_maior(T& valor){
        if (this -> _top >= 0){
            valor = _arr[_top];
            for (int i = 0; i <=  this -> _top; i++){
                if (_arr[i] > valor){
                    valor = _arr[i];
                }
            }
            return true;
        } else {
            return false;
        }
    }

    bool vazia(){
        if (_top < 0){
            return true;
        } else {
            return false;
        }
    }
    void print(){
        for (int i = 0; i <=  _top; i++){
            cout << _arr[i] << endl;
        }
    }

};


#endif
#include <iostream>
#include <vector>
#include <list>
#include <memory>
#include "criatura.hpp"
#include "peixe.hpp"
#include "polvo.hpp"
#include "aquario.hpp"

using namespace std;

void Aquario::add_peixe(double peso, char sexo) { 
    shared_ptr<Peixe> p1 = make_shared<Peixe>();
    _criaturas.push_back(p1); 
}

void Aquario::add_polvo(double qi) { 
    shared_ptr<Polvo> p2 = make_shared<Polvo>();
    _criaturas.push_back(p2); 
}

void Aquario::acasalamento(int id1, int id2){
    if (id1 <= _criaturas.size() && id2 <= _criaturas.size()){
        list<unique_ptr<Criatura>> l = _criaturas[id1] -> acasalar(_criaturas[id2]);
        for (list<unique_ptr<Criatura>>::iterator it = l.begin(); it != l.end(); it++){
            this -> _criaturas.push_back(move(*it));
        }
    }
}

void Aquario::print(){
    cout << "=============" << endl;
    cout << endl;
    cout << "Aquario Info:" << endl;
    for (int i = 0; i < _criaturas.size(); i++){
        _criaturas[i] -> print_info();
    }
    cout << endl;
    cout << "=============" << endl;

}

Aquario::Aquario(const Aquario &orig){
    for (auto it : orig._criaturas){

        if (it -> get_subtipo() == "Peixe"){
            shared_ptr<Peixe> p = dynamic_pointer_cast<Peixe>(it);
            this -> _criaturas.push_back(shared_ptr<Criatura>(new Peixe(*p)));


        } else if (it -> get_subtipo() == "Polvo"){
            shared_ptr<Polvo> p = dynamic_pointer_cast<Polvo>(it);
            this -> _criaturas.push_back(shared_ptr<Criatura>(new Polvo(*p)));
            
        } 
    }
}

#ifndef ITEM_H
#define ITEM_H
#include <iostream>


using namespace std;


class Item{

private:
    int _key;
    int _val;

public:
    Item(int key, int val) : _key(key), _val(val){}

    Item(){
        this -> _key = -1;
        this -> _val = -1;
    }

    friend bool operator >(const Item &i1, const Item &i2){
        if(i1._val > i2._val){
            return true;
        } else {
            return false;
        }
        
    }

    friend ostream& operator << (ostream &out, const Item &i){
       out << "(<" << i._key << ">,<" << i._val << ">)";
    }

};




#endif 
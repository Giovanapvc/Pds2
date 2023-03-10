#include <iostream>
#include <iomanip>
#include <list>
#include <string>
#include "Veiculo.hpp"
#include "Caminhao.hpp"
#include "CaminhaoAutonomo.hpp"

using namespace std;

void print_list(list<Veiculo *> l)
{
    for (auto it = l.begin(); it != l.end(); it++){
        (*it) -> print_info();
    }
}


void rm_id(list<Veiculo *> &l, int id)
{
    for (list<Veiculo *>::iterator it = l.begin(); it != l.end(); it++)
    {
        if ((*it)->get_id() == id)
        {
            delete *it;
            l.erase(it);
            break;
        }
    }
}

int main()
{

    list<Veiculo*> veiculos;
    string p;
    int velocidade, passageiro, carga, id;
    string subtipo, fabricante;

    while (cin >> p)
    {
        if (p == "add_c") {

        cin >> velocidade >> passageiro >> carga;
            Veiculo *caminhao = new Caminhao(subtipo, velocidade, passageiro, carga);
            veiculos.push_back(caminhao);

        }
        if (p == "add_ca") {

            cin >> velocidade >> passageiro >> carga >> fabricante;
            Veiculo *caminhaoauto = new CaminhaoAutonomo(velocidade, passageiro, carga, fabricante);
            veiculos.push_back(caminhaoauto);

        }
        if (p == "rm") {

            cin >> id;
            rm_id(veiculos, id);

        }
        if (p == "print") {
            print_list(veiculos);

        }
    }
}
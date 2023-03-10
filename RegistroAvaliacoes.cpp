#include <iostream>
#include <iomanip>
#include "Filme.hpp"
#include "Usuario.hpp"
#include "Review.hpp"
#include <string>
#include <vector>
#include <map>
#include "RegistroAvaliacoes.hpp"

using namespace std;

void RegistroAvaliacoes::adicionar_usuario(string login, string nome){
Usuario* u = new Usuario(login, nome);
_usuario.insert(make_pair(login, u));

}

void RegistroAvaliacoes::adicionar_filme(string nome, string genero, int duracao){
int n = _filme.size();
Filme* f = new Filme(n, nome, genero, duracao);
_filme.insert(make_pair(n+1, f));

}

void RegistroAvaliacoes::adicionar_review(int id_filme, string login_usuario, string comentario, float nota) {
Review* r = _filme[id_filme] -> adicionar_review(comentario, nota);
_usuario[login_usuario] -> associar_review(r);

}

void RegistroAvaliacoes::imprimir_estatisticas_usuarios(){
for (auto iter = _usuario.begin(); iter != _usuario.end(); ++iter){
    iter -> second -> imprimir_info();
    }
} 

void RegistroAvaliacoes::imprimir_registro_geral(){
for (auto iter = _filme.begin(); iter != _filme.end(); ++iter){
    iter -> second -> imprimir_nota_consolidada();

    }
}

void RegistroAvaliacoes::imprimir_reviews_usuario(string login){
    _usuario[login] -> imprimir_reviews();
}
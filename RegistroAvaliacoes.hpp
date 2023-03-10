#ifndef REGISTROAVALIACOES_H
#define REGISTROAVALIACOES_H
#include <iostream>
#include <iomanip>
#include "Filme.hpp"
#include "Usuario.hpp"
#include "Review.hpp"
#include <string>
#include <map>

using namespace std;

class RegistroAvaliacoes{

private:
map <string, Usuario*> _usuario;
map <int, Filme*> _filme;

public:
void adicionar_usuario(string login, string nome);
void adicionar_filme(string nome, string genero, int duracao);
void adicionar_review(int id_filme, string login_usuario, string comentario, float nota);
void imprimir_estatisticas_usuarios();
void imprimir_registro_geral();
void imprimir_reviews_usuario(string login);

};



#endif
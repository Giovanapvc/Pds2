#ifndef PLAYLIST_H
#define PLAYLIST_H
#include <iostream>
#include <string> 
#include "Musica.hpp"
/* #include "avaliacao_basica_playlist.hpp"
 */

struct Playlist{
Musica* head = nullptr;
Musica* tail = nullptr;
Musica* prox = nullptr;
Musica* ant = nullptr; 
void adicionar_musica(std::string nome, std::string artista, std::string album, float duracao);
Musica* buscar_musica(std::string nome, std::string artista);
void remover_musica(int id);
void favoritar_musica(int id);
void desfavoritar_musica(int id);
void imprimir();

};



#endif
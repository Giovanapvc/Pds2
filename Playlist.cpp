#include <iostream>
#include <string>
#include "Musica.hpp"
#include "Playlist.hpp"
#include "avaliacao_basica_playlist.hpp" 
#include <iomanip>

using namespace std;



void Playlist::adicionar_musica(std::string nome, std::string artista, std::string album, float duracao){
Musica* aux = new Musica;
aux -> _nome = nome;
aux -> _artista = artista;
aux -> _album = album;
aux -> _duracao = duracao;
aux -> prox = nullptr;  
aux -> ant = nullptr;
 if (head == nullptr) {   //iniciar a lista
        head = aux;    
        tail = aux;
        aux -> _id = 1;
    } 
        else {
            int conta = 1;
                while (aux != nullptr) {
                    aux -> ant = aux;
                    aux = aux -> prox;
                    conta++;
                }
            aux -> _id = conta + 1;
            tail -> prox = aux;
            tail = aux;            //adicionando ao fim da fila
        } 
} 

Musica* Playlist::buscar_musica(string nome, string artista){
Musica* p = new Musica;
p -> _nome = nome;
p -> _artista = artista;
if(p == nullptr){
    return nullptr;
}
else{
    p = tail;
    while (p != nullptr){
        if (p -> _artista == artista){
            if (p -> _nome == nome){
                return p;
            }
                else {
                    p = p -> prox;
            }
        }
    }
}
}

void Playlist::remover_musica(int id){
Musica *atual = head;  
Musica *ant = nullptr;
    while(atual != nullptr){
        if(atual -> _id == id){
            if (ant == nullptr){
                head = atual -> prox;
            }
            else if (atual -> prox == nullptr){
                ant -> prox = nullptr;
                tail = ant;
            }
            else{
                ant -> prox = atual -> prox;
            }
            delete atual;
            return;
        }
        ant = atual;
        atual = atual -> prox;
    }
}

void Playlist::favoritar_musica(int id){    //deslocar pro inicio da playlist
Musica* fav = new Musica;
fav -> _id = id;
while(fav != nullptr){
if (fav -> _favorita = 1){
    return;
}
else{
    if(fav == head){
    fav -> _favorita = 1;
}
    else if (fav == tail){    
    fav -> _favorita = 1;
    head = fav;
    tail -> ant = nullptr;
}
    else if (fav != head && fav != tail){
        head = fav;
        fav -> _favorita = 1;
        fav -> ant = fav -> prox;
    }
}
} 
}


void Playlist::desfavoritar_musica(int id){     //deslocar para o fim da playlist
Musica* fav2 = new Musica;
fav2 -> _id = id;
while(fav2 != nullptr){
if (fav2 -> _favorita = 0){
    return;
}
else{
    if(fav2 == head){
    fav2 -> _favorita = 0;
    fav2 = tail;
    fav2 -> prox = head;
}
    else if (fav2 == tail){    
    fav2 -> _favorita = 0;
}
    else if (fav2 != head && fav2 != tail){
        fav2 = tail;
        fav2 -> _favorita = 1;
        fav2 -> prox = fav2 ->ant;
    }
}
} 
}

void Playlist::imprimir(){    
    float durac = aux -> _duracao;
    while (aux!= nullptr){
        aux -> imprimir_dados();
        aux = aux -> prox;
        durac = durac + aux -> _duracao;
    }
} 
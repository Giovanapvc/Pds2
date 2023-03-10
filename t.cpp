#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <map>
#include "Usuario.hpp"
#include "Filme.hpp"
#include "Review.hpp"
#include "avaliacao_basica_cinereview.hpp"
#include "RegistroAvaliacoes.hpp"

using namespace std;

int main(){

  string nome_usuario, login_usuario;
  string nome_filme, genero_filme, comentario_filme;
  float nota_filme;
  int duracao_filme, id_filme;
  RegistroAvaliacoes registro_avaliacoes;

  char escolha;
  while (cin >> escolha) { 
    switch (escolha) {

           case 'u': {    
            cin >> login_usuario >> nome_usuario;
            registro_avaliacoes.adicionar_usuario(login_usuario, nome_usuario);
                break;

            }   

             case 'f': {
              cin >> nome_filme >> genero_filme >> duracao_filme;
              registro_avaliacoes.adicionar_filme(nome_filme, genero_filme, duracao_filme);
                break;
            } 

              case 'r': {    
              cin >> id_filme >> login_usuario >> comentario_filme >> nota_filme;
              registro_avaliacoes.adicionar_review(id_filme, login_usuario, comentario_filme, nota_filme);
                break;                              
            }
            
                case 'p': {                 
                registro_avaliacoes.imprimir_registro_geral();
                break;   
            } 
  
                   case 's': {
                    registro_avaliacoes.imprimir_estatisticas_usuarios();
                  break;    
            }  
                    case 'l': {
                    cin >> login_usuario;
                    registro_avaliacoes.imprimir_reviews_usuario(login_usuario);
                    break;    
            }    
                         case 'b': {
                        avaliacao_basica();    
                      break;    
            }  
       }
   }  
 
  
  return 0;
}

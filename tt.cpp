#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <map>
#include "Produto.hpp"
#include "Pedido.hpp"
#include "Carrinho.hpp"
#include "avaliacao_basica_ecommerce.hpp"
#include "Catalogo.hpp"
#include "Livro.hpp"
#include "Brinquedo.hpp"
#include "Eletronico.hpp"


using namespace std;

int main(){

  string nome_brinquedo, titulo, autor, marca, modelo;
  int ano, quantidade, id, idade;
  float valor_brinquedo, valor_livro, valor_eletronico;
  Catalogo catalogo;
  Carrinho carrinho;
/*   Produto produto; */

  char escolha;
  while (cin >> escolha) { 
    switch (escolha) {

           case 'q': {    
            cin >> nome_brinquedo >> idade >> valor_brinquedo;
            cin.ignore();
            catalogo.adicionar_produto(nome_brinquedo, idade, valor_brinquedo);
                break;

            }   

             case 'l': {
              cin >> titulo >> autor >> ano >> valor_livro;
              catalogo.adicionar_produto(titulo, autor, ano, valor_livro);
                break;
            } 

              case 'e': {    
              cin >> marca >> modelo >> valor_eletronico;
              catalogo.adicionar_produto(marca, modelo, valor_eletronico);
                break;                              
            }
            
                case 'c': {                 
                catalogo.imprimir();
                break;   
            } 
  
                   case 'p': {
                    cin >> id >> quantidade;
                    Produto* produto = catalogo.buscar_produto(id);
                    carrinho.adicionar_pedido(produto, quantidade);

                  break;    
            }  
                    case 'r': {
                    carrinho.imprimir_resumo();
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

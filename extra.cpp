#include "Cadastro.hpp"
#include "Catalogo.hpp"
#include "Usuario.hpp"
#include "Proposta.hpp"
#include "Inventario.hpp"
#include "Figurinha.hpp"
#include "FigurinhaEspecial.hpp"
#include "FigurinhaJogador.hpp"
#include "Ponto2D.hpp"
#include "Unidade.hpp"
#include <iostream>
#include <string>
#include <vector>

int main() {
    
/* 
    Catalogo c;

    c.adicionarFigurinhaEspecial();
    c.adicionarFigurinhaJogador();
    c.imprimirDados(); */

    //std::system("clear");

    std::cout << "=========================" << std::endl;
    std::cout << "     Seja bem-vindo!     " << std::endl;
    std::cout << "=========================" << std::endl;
    std::cout << std::endl;
    std::cout << "Já possui cadastro?" << std::endl;
    std::string respostaCadastro;
    std::vector <int> IdFigurinhas;
    std::vector <Figurinha*> FigurinhasUsuario;
    Inventario* novoInventario = new Inventario;
    std::cin >> respostaCadastro;

    if (respostaCadastro == "não") {    //permitir outras formas de escrita?
        double reputacao = 0.0;
        std:: string nome, login, senha;
        std::cout << "Insira seu nome: " << std::endl;
        std::cin >> nome;
        std::cout << "Insira seu login: " << std::endl;
        std::cin >> login;
        std::cout << "Insira sua senha: " << std::endl;
        std::cin >> senha;
        std::cout << "Agora vamos montar seu inventario de figurinhas" << std::endl;
        std::cout << "Deseja adicionar figurinhas?" << std::endl;
        std::string respostaAdicionarFigurinha;
        std::cin >> respostaAdicionarFigurinha;

        while (respostaAdicionarFigurinha == "sim") {
            std::cout << "Qual o subtipo da figurinha? " << std::endl;
            std::string subtipoFigurinha;
            std:: cin >> subtipoFigurinha;
            if (subtipoFigurinha == "especial"){

                int idFigurinha;
                std::cout << "Id da figurinha: " << std::endl;  //cin get
                std::cin >> idFigurinha;
                std::cout << "Nome da figurinha: " << std::endl;
                std::string nomeFigurinha;
                std::cin >> nomeFigurinha;
                std::cout << "Tipo da figurinha: " << std::endl;
                std::string tipoFigurinha;
                std::cin >> tipoFigurinha;
                Figurinha* novaFigurinha = new FigurinhaEspecial(idFigurinha, nomeFigurinha, tipoFigurinha);
                FigurinhasUsuario.push_back(novaFigurinha);
                IdFigurinhas.push_back(idFigurinha);
                std::cout << "Deseja adicionar figurinhas?" << std::endl;
                std::string respostaAdicionarFigurinha;
                std::cin >> respostaAdicionarFigurinha;
                break;

            } else if (subtipoFigurinha == "jogador") {

                int idFigurinha;
                std::cout << "Id da figurinha: " << std::endl;
                std::cin >> idFigurinha; 
                std::cout << "Nome do jogador: " << std::endl;
                std::string nomeJogador;
                std::cin >> nomeJogador;
                std::cout << "Idade do jogador: " << std::endl;
                std::string idadeJogador;
                std::cin >> idadeJogador;
                std::cout << "Selecao do jogador: " << std::endl;
                std::string selecaoJogador;
                std::cin >> selecaoJogador;
                std::cout << "Clube do jogador: " << std::endl;
                std::string clubeJogador;
                std::cin >> clubeJogador;
                Figurinha* novaFigurinha = new FigurinhaJogador(idFigurinha, nomeJogador, idadeJogador, selecaoJogador, clubeJogador);
                FigurinhasUsuario.push_back(novaFigurinha);
                IdFigurinhas.push_back(idFigurinha);
                std::cout << "Deseja adicionar figurinhas?" << std::endl;
                std::string respostaAdicionarFigurinha;
                std::cin >> respostaAdicionarFigurinha;
                break;
            }
        }
            
            novoInventario -> adicionarFigurinhas(FigurinhasUsuario);
            Cadastro* novoCadastro = new Cadastro;
            novoCadastro -> cadastrarUsuario(nome, login, senha, reputacao, novoInventario);

    } else if (respostaCadastro == "sim") {   //poderia ser uma classe menu

        std::cout << "O que deseja fazer?" << std::endl;
        std::cout << "1 - Procurar figurinha para troca" << std::endl;
        std::cout << "2 - Verificar possiveis trocas na minha regiao" << std::endl;
        std::cout << "3 - Visualizar meu inventário" << std::endl;
        std::cout << "4 - Fazer proposta de troca" << std::endl;
        std::cout << "5 - Modificar dados do meu perfil" << std::endl;
        std::cout << "6 - Sair do aplicativo" << std::endl;

        int escolhaMenu;
        while (std::cin >> escolhaMenu){
            switch (escolhaMenu){
                case 1: {

                }
                case 2: {

                }
                case 3: {

                    novoInventario -> imprimirDados(IdFigurinhas);

                }
                case 4: {

                }
                case 5: {

                }
                case 6: {

                }
            }


        }

    } //else - tratar excecao, respostas inadequadas

    

    return 0;
}
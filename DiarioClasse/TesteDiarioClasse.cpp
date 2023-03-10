#include "doctest.h"
#include "DiarioClasse.hpp"

TEST_CASE("Teste 05 - Reprovacao direta") {
  DiarioClasse diario;
  bool reprovado = diario.determinarAprovacao(30, 0, 1);
  CHECK_FALSE(reprovado);
};

TEST_CASE("Teste 06 - Infrequente") {
  DiarioClasse diario;
  bool aprovado = diario.determinarAprovacao(70, 0, 0.3);
  CHECK_FALSE(aprovado);
};

TEST_CASE("Teste 07 - Excecao NotaEspecial") {
    DiarioClasse diario;
    CHECK_THROWS_AS(diario.determinarAprovacao(30, 67, 1), ExcecaoNotaEspecialInvalida);
};

TEST_CASE("Teste 08 - Excecao Frequencia") {
  DiarioClasse diario;
  CHECK_THROWS_AS(diario.determinarAprovacao(50, 80, 0.2), ExcecaoNotaEspecialInvalida);
}

TEST_CASE("Teste 09 - Excecao NotaSemestre") {
  DiarioClasse diario;
  CHECK_THROWS_AS(diario.determinarAprovacao(-20, 0, 1), ExcecaoNotaSemestreInvalida);
}

TEST_CASE("Teste 10 - Excecao NotaEspecial") {
    DiarioClasse diario;
    CHECK_THROWS_AS(diario.determinarAprovacao(90, 75, 1), ExcecaoNotaEspecialInvalida);
};

TEST_CASE("Teste 11 - Reprovacao Exame Especial") {
  DiarioClasse diario;
  bool reprovado = diario.determinarAprovacao(45, 40, 0.75);
  CHECK_FALSE(reprovado);
}

TEST_CASE("Teste 12 - Numeros excedentes ") {
    DiarioClasse diario;
    CHECK_THROWS_AS(diario.determinarAprovacao(200, 740, 12), ExcecaoNotaSemestreInvalida);
};

TEST_CASE("Teste 13 - Aprovação simples") {
  DiarioClasse diario;
  bool aprovado = diario.determinarAprovacao(60, 0, 0.75);
  CHECK(aprovado);
};

TEST_CASE("Teste 14 - Excecao NotaEspecial") {
    DiarioClasse diario;
    CHECK_THROWS_AS(diario.determinarAprovacao(45, 200, 1), ExcecaoNotaEspecialInvalida);
};










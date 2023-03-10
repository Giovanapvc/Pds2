#include "DiarioClasse.hpp"

bool DiarioClasse::determinarAprovacao(double notaSemestre, double notaEspecial, double frequencia) {

    if (notaSemestre < 0)
        throw ExcecaoNotaSemestreInvalida();

    if (notaSemestre > 100)
        throw ExcecaoNotaSemestreInvalida();

    if (notaSemestre < 40 && notaEspecial != 0)
        throw ExcecaoNotaEspecialInvalida();

    if (frequencia < 0.75 && notaEspecial != 0)
        throw ExcecaoNotaEspecialInvalida();

    if (notaEspecial < 0)
        throw ExcecaoNotaEspecialInvalida();

    if (notaEspecial > 100)
        throw ExcecaoNotaEspecialInvalida();

    if (frequencia > 1)
        throw ExcecaoFrequenciaInvalida();

    if (frequencia < 0)
        throw ExcecaoFrequenciaInvalida();

    if (notaSemestre >= 60 && frequencia >= 0.75 && notaEspecial != 0)
        throw ExcecaoNotaEspecialInvalida();

    if (frequencia < 0.75)
        return false;

    if (notaSemestre < 40)
        return false;

    if (notaSemestre >= 60 && frequencia >= 0.75)
        return true;

    else if (notaEspecial >= 60 && frequencia >= 0.75)
        return true;
    else 
        return false;


}
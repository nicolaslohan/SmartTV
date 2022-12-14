//
// Created by nascolas on 11/30/22.
//

#ifndef PROJETOFINAL_DIRETOR_H
#define PROJETOFINAL_DIRETOR_H
#include "Pessoa.h"

class Diretor : public Pessoa{
public:
    Diretor(string nome, int qtdProducoesDirigidas) : Pessoa(nome), qtdProducoesDirigidas(qtdProducoesDirigidas) {};

    inline int getQtdProducoesDirigidas() const noexcept { return qtdProducoesDirigidas; };
    inline int setQtdProducoesDirigidas(int qtdProducoesDirigidas) noexcept { return this->qtdProducoesDirigidas = qtdProducoesDirigidas; };

private:
    int qtdProducoesDirigidas;
};


#endif //PROJETOFINAL_DIRETOR_H

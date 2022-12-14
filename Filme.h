//
// Created by nascolas on 11/30/22.
//

#ifndef PROJETOFINAL_FILME_H
#define PROJETOFINAL_FILME_H
#include "Producao.h"

class Filme : public Producao{
public:
    Filme(string nome, double duracao) : Producao(nome), duracao(duracao) {};

    inline double getDuracao() const noexcept { return duracao; };
    inline double setDuracao(double duracao) noexcept { return this->duracao = duracao; };

    virtual void play();
private:
    double duracao;
};


#endif //PROJETOFINAL_FILME_H

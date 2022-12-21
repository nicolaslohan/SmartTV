//
// Created by nascolas on 12/20/22.
//

#ifndef SMARTTV_FILME_H
#define SMARTTV_FILME_H
#include "Producao.h"

class Filme : public Producao{
public:
    Filme(string nome, string duracao) : Producao(nome), duracao(duracao) {};

    inline string getDuracao() const { return duracao; };
    inline string setDuracao(string duracao) { return this->duracao = duracao; };

    virtual void play();

private:
    string duracao;
};


#endif //SMARTTV_FILME_H

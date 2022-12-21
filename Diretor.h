//
// Created by nascolas on 12/20/22.
//

#ifndef SMARTTV_DIRETOR_H
#define SMARTTV_DIRETOR_H


#include "Pessoa.h"

class Diretor : public Pessoa {
public:
    Diretor(string nome, int producoesDirigidas) : Pessoa(nome), producoesDirigidas(producoesDirigidas) {};

    inline int getProducoes() const { return producoesDirigidas;};
    inline int setProducoes(int producoesDirigidas) { return this->producoesDirigidas = producoesDirigidas;};

private:
    int producoesDirigidas;
};

#endif //SMARTTV_DIRETOR_H

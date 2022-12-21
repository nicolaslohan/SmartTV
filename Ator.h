//
// Created by nascolas on 12/20/22.
//

#ifndef SMARTTV_ATOR_H
#define SMARTTV_ATOR_H


#include "Pessoa.h"

class Ator : public Pessoa {
public:
    Ator(string nome, int carreira) : Pessoa(nome), carreira(carreira) {};

    inline int getCarreira() const {return carreira;};
    inline int setCarreira(int carreira) {return this->carreira = carreira;};

private:
    int carreira;
};


#endif //SMARTTV_ATOR_H

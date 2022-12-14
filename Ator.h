//
// Created by nascolas on 11/30/22.
//

#ifndef PROJETOFINAL_ATOR_H
#define PROJETOFINAL_ATOR_H
#include "Pessoa.h"

class Ator : public Pessoa{
public:
    Ator(string nome, int tempoCarreira) : Pessoa(nome), tempoCarreira(tempoCarreira) {};

    inline int getTempoCarreira() const noexcept { return tempoCarreira; };
    inline int setTempoCarreira(int tempoCarreira) noexcept { return this->tempoCarreira = tempoCarreira; };

private:
    int tempoCarreira;
};


#endif //PROJETOFINAL_ATOR_H

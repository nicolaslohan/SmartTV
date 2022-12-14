//
// Created by nascolas on 11/30/22.
//

#ifndef PROJETOFINAL_SERIE_H
#define PROJETOFINAL_SERIE_H
#include "Producao.h"

class Serie : public Producao{
public:
    Serie(string nome, int numEpisodios) : Producao(nome), numEpisodios(numEpisodios) {};

    inline int getNumEpisodios() const noexcept { return numEpisodios; };
    inline int setNumEpisodios(int numEpisodios) noexcept { return this->numEpisodios = numEpisodios; };

    virtual void play();
private:
    int numEpisodios;
};


#endif //PROJETOFINAL_SERIE_H

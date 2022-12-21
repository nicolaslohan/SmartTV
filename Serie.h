//
// Created by nascolas on 12/20/22.
//

#ifndef SMARTTV_SERIE_H
#define SMARTTV_SERIE_H
#include "Producao.h"

class Serie : public Producao{
public:
    Serie(string nome, int episodios) : Producao(nome), episodios(episodios) {};

    inline int getEpisodios() const { return episodios; };
    inline int setEpisodios(int episodios) { return this->episodios = episodios; };

    virtual void play();
private:
    int episodios;
};


#endif //SMARTTV_SERIE_H

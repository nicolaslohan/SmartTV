//
// Created by nascolas on 12/20/22.
//

#ifndef SMARTTV_PRODUCAO_H
#define SMARTTV_PRODUCAO_H


#include "Diretor.h"
#include "Ator.h"

#include <iostream>

#include <vector>
using std::vector;

class Producao {
public:
    Producao(string nome) : nome(nome), listaAtores({}), listaDiretores({}) {};
    virtual ~Producao() = default;

    Producao adicionaAtor(Ator &);
    Producao adicionaDiretor(Diretor &);

    Producao removeAtor(string);
    Producao removeDiretor(string);

    void listarStaff() const;

    inline string getNome() const { return nome; };
    inline string setNome(string nome) { return this->nome = nome; };

    virtual void play() {};

private:
    string nome;
    vector<Ator> listaAtores;
    vector<Diretor> listaDiretores;
};

#endif //SMARTTV_PRODUCAO_H

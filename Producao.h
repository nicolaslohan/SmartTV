//
// Created by nascolas on 11/30/22.
//

#ifndef PROJETOFINAL_PRODUCAO_H
#define PROJETOFINAL_PRODUCAO_H
#include "Diretor.h"
#include "Ator.h"
#include <vector>
#include <iostream>
using std::vector, std::cout, std::endl;

class Producao {
public:
    Producao(string nome) : nome(nome), diretores({}), atores({}) {};

    Producao adicionaAtor(Ator &);
    Producao removeAtor(string);

    Producao adicionaDiretor(Diretor &);
    Producao removeDiretor(string);

    inline string getNome() const noexcept { return nome; };
    inline string setNome(string nome) noexcept { return this->nome = nome; };

    void getDiretores() const;
    void getAtores() const;

    virtual void play();
private:
    string nome;
    vector<Diretor> diretores;
    vector<Ator> atores;
};


#endif //PROJETOFINAL_PRODUCAO_H

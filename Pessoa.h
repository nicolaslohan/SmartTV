//
// Created by nascolas on 11/30/22.
//

#ifndef PROJETOFINAL_PESSOA_H
#define PROJETOFINAL_PESSOA_H
#include <string>
using std::string;

class Pessoa {
public:
    Pessoa(string nome) : nome(nome) {};

    inline string getNome() const noexcept { return nome; };
    inline string setNome(string nome) noexcept { return this->nome = nome; };
private:
    string nome;
};


#endif //PROJETOFINAL_PESSOA_H

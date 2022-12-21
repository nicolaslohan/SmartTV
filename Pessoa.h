//
// Created by nascolas on 12/20/22.
//

#ifndef SMARTTV_PESSOA_H
#define SMARTTV_PESSOA_H


#include <string>
using namespace std;
using std::string;

class Pessoa {
public:
    Pessoa(string nome) : nome(nome) {};

    inline string getNome() const {return nome;};
    inline string setNome(string nome) {return this->nome = nome;};

private:
    string nome;
};


#endif //SMARTTV_PESSOA_H

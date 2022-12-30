//
// Created by nascolas on 12/20/22.
//

#ifndef SMARTTV_APP_H
#define SMARTTV_APP_H
#include <string>
using std::string;


class App {
public:
    App(string nome, string versao) : nome(nome), versao(versao) {};
    virtual ~App() = default;

    inline string getNome() const { return nome; };
    inline string getVersao() const { return versao; };

    inline string setNome(string nome) { return this->nome = nome; };
    inline string setVersao(string versao) { return this->versao = versao; };

    virtual void run() = 0;

private:
    string nome;
    string versao;
};


#endif //SMARTTV_APP_H

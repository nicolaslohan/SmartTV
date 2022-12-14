//
// Created by nascolas on 11/30/22.
//

#ifndef PROJETOFINAL_APP_H
#define PROJETOFINAL_APP_H
#include <string>
using std::string;

class App {
public:
    App(string nome, string versao) : nome(nome), versao(versao) {};

    inline string getNome() const noexcept { return nome; };
    inline string getVersao() const noexcept { return versao; };

    inline string setNome(string nome) noexcept { this->nome = nome; };
    inline string setVersao(string versao) noexcept { this->versao = versao; };

    virtual void run();

private:
    string nome;
    string versao;
};


#endif //PROJETOFINAL_APP_H

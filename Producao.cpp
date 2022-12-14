//
// Created by nascolas on 11/30/22.
//

#include "Producao.h"

Producao Producao::adicionaAtor(Ator &ator) {
    atores.push_back(ator);
    return *this;
}

Producao Producao::adicionaDiretor(Diretor &diretor) {
    diretores.push_back(diretor);
    return *this;
}

Producao Producao::removeAtor(string nome) {
    for (int i = 0; i < atores.size(); i++){
        if (atores[i].getNome() == nome){
            atores.erase(atores.begin()+i);
            return *this;
        }
    }
    return *this;
}

Producao Producao::removeDiretor(string nome) {
    for (int i = 0; i < diretores.size(); i++){
        if (diretores[i].getNome() == nome){
            diretores.erase(diretores.begin()+i);
            return *this;
        }
    }
    return *this;
}

void Producao::getDiretores() const {
    for (int i = 0; i < diretores.size(); i++){
        cout << "  - " << diretores[i].getNome() << endl;
    }
}

void Producao::getAtores() const {
    for (int i = 0; i < atores.size(); i++){
        cout << "  - " << atores[i].getNome() << endl;
    }
}


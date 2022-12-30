//
// Created by nascolas on 12/20/22.
//

#include "Producao.h"

Producao Producao::adicionaAtor( Ator &ator){
    listaAtores.push_back(ator);
    return *this;
}

Producao Producao::adicionaDiretor( Diretor &diretor){
    listaDiretores.push_back(diretor);
    return *this;
}

Producao Producao::removeAtor(string nome) {
    for (int i = 0; i < listaAtores.size(); i++){
        if (listaAtores[i].getNome() == nome){
            listaAtores.erase(listaAtores.begin()+i);
            return *this;
        }
    }
    return *this;
}

Producao Producao::removeDiretor(string nome) {
    for (int i = 0; i < listaDiretores.size(); i++){
        if (listaDiretores[i].getNome() == nome){
            listaDiretores.erase(listaDiretores.begin()+i);
            return *this;
        }
    }
    return *this;
}

void Producao::listarStaff() const {
    if (listaDiretores.empty()){
        cout << "Nenhum diretor foi adicionado." << endl;
    }else {
        cout << "* Diretores:" << endl;
        for (int i = 0; i < listaDiretores.size(); i++){
            cout << " - " << listaDiretores[i].getNome() << endl;
        }
    }
    if (listaAtores.empty()){
        cout << "Nenhum ator foi adicionado." << endl;
    }else{
        cout << "* Atores:" << endl;
        for (int i = 0; i < listaAtores.size(); i++){
            cout << " - " << listaAtores[i].getNome() << endl;
        }
    }
}


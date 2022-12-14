//
// Created by nascolas on 11/30/22.
//

#include "Filme.h"

void Filme::play() {
    cout << "-------- Dando Play em: --------" << endl;
    cout << "Filme: " << this->getNome() << endl;
    cout << "Duração: " << this->getDuracao() << endl;
    cout << "* Elenco: " << endl;
    this->getAtores();
    cout << endl << "* Dirigido por: " << endl;
    this->getDiretores();
    cout << endl;
}

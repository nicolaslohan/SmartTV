//
// Created by nascolas on 12/20/22.
//

#include "Filme.h"

void Filme::play() {
    cout << "-------- Detalhes: --------" << endl;
    cout << "Filme: " << this->getNome() << endl;
    cout << "Duração: " << this->getDuracao() << "hrs" << endl;
    cout << "* Elenco: " << endl;
    this->getAtores();
    cout << endl << "* Dirigido por: " << endl;
    this->getDiretores();
    cout << endl;
}
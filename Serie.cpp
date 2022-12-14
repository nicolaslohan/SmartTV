//
// Created by nascolas on 11/30/22.
//

#include "Serie.h"

void Serie::play() {
    cout << "-------- Dando Play em: --------" << endl;
    cout << "Filme: " << this->getNome() << endl;
    cout << "Número de Episódios: " << this->getNumEpisodios() << endl;
    cout << "* Elenco: " << endl;
    this->getAtores();
    cout << endl << "* Dirigido por: " << endl;
    this->getDiretores();
    cout << endl;
}

//
// Created by nascolas on 12/20/22.
//

#include "Serie.h"

void Serie::play() {
    cout << "-------- Dando Play em: --------" << endl;
    cout << "Série: " << this->getNome() << endl;
    cout << "Número de Episódios: " << this->getEpisodios() << endl;
    cout << "* Elenco: " << endl;
    this->getAtores();
    cout << endl << "* Dirigido por: " << endl;
    this->getDiretores();
    cout << endl;
}
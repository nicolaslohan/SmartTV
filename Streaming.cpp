//
// Created by nascolas on 12/20/22.
//

#include "Streaming.h"

ostream &operator<<(ostream &out, Streaming &s) {
    out << "Opções de Streaming: " << endl;
    for (int i = 0; i < s.listaProducoes.size(); i++){
        out << i+1 << ". " << s.listaProducoes[i]->getNome() << endl;
    }
    return out;
}

Streaming Streaming::operator<<(Producao &producao) {
    listaProducoes.push_back(&producao);
    return *this;
}

Streaming Streaming::operator>>(string nome) {
    for (int i = 0; i < listaProducoes.size(); i++){
        if (listaProducoes[i]->getNome() == nome){
            listaProducoes.erase(listaProducoes.begin()+i);
            return *this;
        }
    }
    return *this;
}

void Streaming::run() {
    int op;
    cout << *this;
    cout << endl << "Escolha um: ";
    cin >> op;
    listaProducoes[op-1]->play();
}

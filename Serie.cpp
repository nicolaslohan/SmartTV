//
// Created by nascolas on 12/20/22.
//

#include "Serie.h"

void Serie::play() {
    int op;
    string nome;
    int carreira;
    int prods;
    while(1){
        cout << "-------- Opções: ----------\n";
        cout << "1. Assistir" << endl;
        cout << "2. Adicionar Ator" << endl;
        cout << "3. Remover Ator" << endl;
        cout << "4. Adicionar Diretor" << endl;
        cout << "5. Remover Diretor" << endl;
        cout << endl << "-1. Voltar" << endl;
        cout << "Digite sua opção: ";
        cin >> op;
        if (op == -1){
            break;
        }else if (op == 1){
            cout << "-------- Assistindo: --------" << endl;
            cout << "Série: " << this->getNome() << endl;
            cout << "Episódios: " << this->getEpisodios() << "hrs" << endl;
            this->listarStaff();
            cout << "\n\n-1. Voltar";

        } else if (op == 2){
            cout << "Digite o nome: ";
            cin >> nome;
            cout << "Digite o tempo de carreira: ";
            cin >> carreira;
            Ator ator (nome, carreira);
            this->adicionaAtor(ator);
        }else if (op == 3){
            cout << "Digite o nome: ";
            cin >> nome;
            this->removeAtor(nome);
        }else if (op == 4){
            cout << "Digite o nome: ";
            cin >> nome;
            cout << "Digite a quantidade de produções dirigidas: ";
            cin >> prods;
            Diretor diretor (nome, prods);
            this->adicionaDiretor(diretor);
        }else if (op == 5){
            cout << "Digite o nome: ";
            cin >> nome;
            this->removeDiretor(nome);
        }
    }
}
//
// Created by nascolas on 12/21/22.
//

#include "Time.h"

void Time::run() {
    int op;
    time_t now;
    struct tm *tempo;
    time(&now);
    tempo = localtime(&now);
    while (1){
        cout << "-------- Relógio " << this->getNome() << " --------\n\n";
        cout << "Data: " << tempo->tm_mday << "/" << tempo->tm_mon << "/" << tempo->tm_year << endl;
        cout << "Hora: " << setfill('0') << setw(2) << tempo->tm_hour << ":" << tempo->tm_min << ":" << tempo->tm_sec << endl;
        cout << "\n-1. Voltar";
        cout << "Digite sua opção: ";
        cin >> op;
        if (op == -1){
            break;
        }
    }
}

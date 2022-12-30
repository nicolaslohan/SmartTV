//
// Created by nascolas on 12/21/22.
//

#include "SmartTV.h"


SmartTV &operator<<(SmartTV &stv, App &app) {
    if (!stv.ligada){
        throw runtime_error("A TV não está ligada!");
    }
    stv.listaApp.push_back(&app);

    return stv;
}

SmartTV &operator>>(SmartTV &stv, string app) {
    if (!stv.ligada){
        throw runtime_error("A TV não está ligada!");
    }
    for (int i = 0; i < stv.listaApp.size(); i++){
        if (stv.listaApp[i]->getNome() == app){
            stv.listaApp.erase(stv.listaApp.begin()+i);
            return stv;
        }
    }

    return stv;
}

bool SmartTV::ligar() {
    return this->ligada = true;
}

bool SmartTV::desligar() {
    return this->ligada = false;
}

SmartTV SmartTV::instalarApp(App &app) {

    if (!this->ligada){
        throw runtime_error("A TV não está ligada!");
    }

    listaApp.push_back(&app);

    return *this;
}

SmartTV SmartTV::desinstalarApp(string nome) {
    if (!this->ligada){
        throw runtime_error("A TV não está ligada!");
    }

    for (int i = 0; i < listaApp.size(); i++){
        if (listaApp[i]->getNome() == nome){
            listaApp.erase(listaApp.begin()+i);
            return *this;
        }
    }
    return *this;
}

void SmartTV::run(string nome) {
    for (int i = 0; i < listaApp.size(); i++){
        if (listaApp[i]->getNome() == nome){
            listaApp[i]->run();
            break;
        }
    }
}

void SmartTV::comandos() const {

    cout << "1. Ligar\n2. Desligar\n3. Instalar App\n4. Desinstalar App\n5. Lista de Apps\n";

}

void SmartTV::apps() const {
    if (listaApp.empty()){
        cout << "Não há Apps instalados.";
        cout << "Digite qualquer número para voltar";
    }else{
        cout << "Apps instalados: " << endl;
        for (auto i : listaApp) {
            cout << i->getNome() << endl;
        }
    }
}

//
// Created by nascolas on 12/21/22.
//

#ifndef SMARTTV_SMARTTV_H
#define SMARTTV_SMARTTV_H
#include "App.h"
#include "Streaming.h"
#include "Time.h"

#include <vector>
using std::vector;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <exception>
using std::runtime_error;

class SmartTV {
    friend SmartTV &operator<<(SmartTV &, App &);
    friend SmartTV &operator>>(SmartTV &, string);
public:
    SmartTV(string marca, string modelo, string versaoSO) : marca(marca), modelo(modelo), versaoSO(versaoSO), listaApp({}), ligada(false) {};
    virtual ~SmartTV() = default;

    bool ligar();
    bool desligar();
    SmartTV instalarApp(App &);
    SmartTV desinstalarApp(string);

    void run(string);
    void comandos() const;
    void apps() const;
private:
    string marca;
    string modelo;
    string versaoSO;
    vector <App*> listaApp;
    bool ligada;
};


#endif //SMARTTV_SMARTTV_H

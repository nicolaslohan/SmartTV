//
// Created by nascolas on 12/20/22.
//

#ifndef SMARTTV_STREAMING_H
#define SMARTTV_STREAMING_H
#include "App.h"
#include <vector>
#include "Producao.h"
#include <ostream>
using std::vector;

class Streaming : public App {
    friend ostream &operator<<(ostream &, Streaming &);
public:
    Streaming(string nome, string versao) : App(nome, versao), listaProducoes({}) {};

    Streaming operator<<(Producao &);
    Streaming operator>>(string);

    virtual void run();
private:
    vector <Producao*> listaProducoes;
};


#endif //SMARTTV_STREAMING_H

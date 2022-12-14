//
// Created by nascolas on 11/30/22.
//

#ifndef PROJETOFINAL_STREAMING_H
#define PROJETOFINAL_STREAMING_H
#include "App.h"
#include "Producao.h"
#include <ostream>
using std::ostream;

class Streaming : public App{
    friend ostream operator<<(ostream &, Streaming &);
public:
    Streaming(string, string);
    Producao operator<<(Producao &);
    Producao operator>>(string);

    virtual void run();
private:
    vector <Producao> listaProducoes;
};


#endif //PROJETOFINAL_STREAMING_H

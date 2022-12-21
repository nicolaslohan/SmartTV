//
// Created by nascolas on 12/21/22.
//

#ifndef SMARTTV_SMARTTV_H
#define SMARTTV_SMARTTV_H
#include "App.h"
#include <vector>
using std::vector;

class SmartTV {
private:
    string marca;
    string modelo;
    string versaoSO;
    vector <App*> listaApp;
};


#endif //SMARTTV_SMARTTV_H

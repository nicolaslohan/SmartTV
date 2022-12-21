//
// Created by nascolas on 12/21/22.
//

#ifndef SMARTTV_TIME_H
#define SMARTTV_TIME_H
#include <ctime>
#include "App.h"
#include <iostream>
#include <iomanip>
using std::setw;
using std::setfill;
using std::cout;
using std::endl;

class Time : public App{
public:
    Time(string nome, string versao) : App(nome, versao) {};
    virtual void run();
};

#endif //SMARTTV_TIME_H

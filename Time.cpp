//
// Created by nascolas on 12/21/22.
//

#include "Time.h"

void Time::run() {
    time_t now;
    struct tm *tempo;
    time(&now);
    tempo = localtime(&now);
    cout << "Data: " << tempo->tm_mday << "/" << tempo->tm_mon << "/" << tempo->tm_year << endl;
    cout << "Hora: " << setfill('0') << setw(2) << tempo->tm_hour << ":" << tempo->tm_min << ":" << tempo->tm_sec << endl;
}
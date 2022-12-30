#include <iostream>
#include <fstream>
using std::fstream;
#include "Ator.h"
#include "Diretor.h"
#include "Serie.h"
#include "Filme.h"
#include "Streaming.h"
#include "Time.h"
#include "SmartTV.h"
int main() {

    SmartTV tv ("Panasonic", "50pol", "16.7");

    int op;


    vector <Producao*> prod;

    Streaming app1 ("Netflix", "1.5");
    Time app2 ("Relogio", "4.5");
    Ator a1 ("Leonardo", 10);
    Diretor d1("Cameron", 40);
    Filme f1 ("House", "2.4");
    f1.adicionaAtor(a1);
    f1.adicionaDiretor(d1);

    Filme f2 ("X", "3.5");
    f2.adicionaAtor(a1);
    f2.adicionaDiretor(d1);

    prod.push_back(&f1);
    app1 << f1;
    app1 << f2;
    //cout << app1.getData();

    tv.ligar();
    tv << app1;
    tv << app2;

    while(1){
        string name;
        string ver;
        tv.comandos();
        cout << "\nDigite sua opção: ";
        cin >> op;

        if (op == -1){
            break;
        }

        if (op == 1) {
            tv.ligar();
        }else if (op == 2){
            tv.desligar();
            break;
        } else if (op == 3){
            cout << "------- Instalar App -------\n";
            cout << "1. Streaming" <<endl;
            cout << "2. Time" <<endl;
            cout << "\n-1. Voltar\nDigite sua opção: ";
            cin >> op;
            if (op == -1) break;
            if (op == 1){
                cout << "Digite o nome do App: ";
                cin >> name;
                cout << "Digite a versão do App: ";
                cin >> ver;
                Streaming app(name, ver);
                try{
                    tv << app;
                }catch(runtime_error &e){
                    cerr << &e << ": Não é possível instalar um App com a TV desligada" << endl;
                    continue;
                }
            }else if (op == 2){
                cout << "Digite o nome do App: ";
                cin >> name;
                cout << "Digite a versão do App: ";
                cin >> ver;
                Time app(name, ver);
                try{
                    tv.instalarApp(app);
                }catch(runtime_error &e){
                    cerr << &e << ": Não é possível instalar um App com a TV desligada" << endl;
                    continue;
                }
            }
        } else if (op == 4){
            tv.apps();
            cout << "Digite o nome do App para desinstalar: ";
            cin >> name;
            try{
                tv >> name;
            }catch(runtime_error &e){
                cerr << &e << ": Não é possível desinstalar um App com a TV desligada" << endl;
                continue;
            }
        } else if (op == 5){
            tv.apps();
            cin >> name;
            try{
                tv.run(name);
            }catch (runtime_error &e){
                cerr << &e << endl;
                continue;
            }
        }
    }
}
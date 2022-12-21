#include <iostream>
#include "Ator.h"
#include "Diretor.h"
#include "Serie.h"
#include "Filme.h"
#include "Streaming.h"
#include "Time.h"
int main() {

    Ator p("Alex", 12);
    Ator p2("Robert Pattinson", 10);
    cout << p.getCarreira();

    cout << endl;

    Diretor d("Cameron", 56);
    cout << d.getNome() << endl << d.getProducoes() << endl;

    Serie serie1("Don't Look UP", 10);
    serie1.adicionaAtor(p);
    serie1.adicionaAtor(p2);
    serie1.adicionaDiretor(d);

    Filme filme1("Ilha do medo", "2.2");
    filme1.adicionaAtor(p);
    filme1.adicionaAtor(p2);
    filme1.adicionaDiretor(d);

    Streaming s("Netflix", "15.0");
    s << serie1;
    s << filme1;
    s >> "Ilha do medo";

    s.run();

    Time t("Relogio", "1.0");
    t.run();

    return 0;
}

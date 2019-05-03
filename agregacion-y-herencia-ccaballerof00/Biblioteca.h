//
// Created by cristian on 5/3/19.
//

#ifndef C___BIBLIOTECA_H
#define C___BIBLIOTECA_H
#include <iostream>
#include <vector>
#include "Volumen.h"

using namespace std;

class Biblioteca {

    int maxLibros;
    int maxRevistas;
    vector<Volumen*> v;

public:
    Biblioteca():maxLibros{0},maxRevistas{0},v{}{};
    void mostrarBiblioteca();
    void incluir(string titulo, int lor );
    int volumenactual();

};


#endif //C___BIBLIOTECA_H

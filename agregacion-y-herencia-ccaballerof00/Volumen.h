//
// Created by cristian on 5/3/19.
//

#ifndef C___VOLUMEN_H
#define C___VOLUMEN_H
#include <iostream>
using namespace std;

class Volumen {
protected:
    string nombre;
    int numVol;
public:
    Volumen(string nombre,int numVol):numVol{numVol},nombre{nombre}{}
    virtual void mostrar()=0;

};


#endif //C___VOLUMEN_H

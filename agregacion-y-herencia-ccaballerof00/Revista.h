//
// Created by cristian on 5/3/19.
//

#ifndef C___REVISTA_H
#define C___REVISTA_H


#include "Volumen.h"

class Revista: public Volumen {
private:
    int numRevistas;
    string tit;
    int vol;
public:
    Revista(string tit,int vol,int numRevistas);
    void mostrar() override;
};


#endif //C___REVISTA_H

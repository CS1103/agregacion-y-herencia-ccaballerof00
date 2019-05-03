//
// Created by cristian on 5/3/19.
//

#ifndef C___LIBRO_H
#define C___LIBRO_H
#include "Volumen.h"

class Libro: public Volumen {
private:
    int numLibros;
public:
    Libro(string tit,int vol,int numLibros);
    void mostrar() override;
};


#endif //C___LIBRO_H

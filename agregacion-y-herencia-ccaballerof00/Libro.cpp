//
// Created by cristian on 5/3/19.
//

#include "Libro.h"
Libro::Libro(string tit,int vol,int numLibros):Volumen(tit,vol),numLibros{numLibros}{}

void Libro::mostrar()
{
    cout<<"Volumen "<<numVol+1<<": Libro "<<numLibros+1<<" título: "<<nombre<<endl;
}
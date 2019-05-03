//
// Created by cristian on 5/3/19.
//

#include "Biblioteca.h"
#include "Libro.h"
#include "Revista.h"

void Biblioteca::incluir(string titulo, int lor)
{
    if(lor==0)
    {

        Volumen* temp=new Libro(titulo,maxLibros+maxRevistas,maxLibros);
        v.push_back(temp);
        maxLibros++;
    }
    if(lor==1){
        Volumen* temp=new Revista(titulo,maxLibros+maxRevistas,maxRevistas);
        v.push_back(temp);
        maxRevistas++;
    }
}

void Biblioteca::mostrarBiblioteca()
{
    for(int i=0;i<v.size();i++)
    {
        v[i]->mostrar();
    }
}

int Biblioteca::volumenactual()
{
    return maxLibros+maxRevistas;
}
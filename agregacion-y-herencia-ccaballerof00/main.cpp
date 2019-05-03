#include <iostream>
#include "Revista.h"
#include "Biblioteca.h"
#include "Libro.h"
int main()
{
Biblioteca b=Biblioteca();
b.incluir("Libro",0);
b.incluir("Revista",1);
b.mostrarBiblioteca();
}
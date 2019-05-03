//
// Created by cristian on 5/3/19.
//
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Biblioteca.h"
SCENARIO("Último volumen ingresado")
{
    GIVEN("Bibloteca - Constructor"
    )
    {
        WHEN("Añado 4 libros y 3 revistas")
        {
            Biblioteca bib;
            bib.incluir("A",0);
            bib.incluir("B",0);
            bib.incluir("C",1);
            bib.incluir("D",0);
            bib.incluir("E",1);
            bib.incluir("F",0);
            bib.incluir("G",1);
            auto Total=bib.volumenactual();
            THEN("Total es 7")
            {
                REQUIRE(Total==7);
            }
        }
    }
}

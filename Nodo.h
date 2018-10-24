//
// Created by Francisco on 13/06/2016.
//

#ifndef PARCIAL_2_NODO_H
#define PARCIAL_2_NODO_H
#include <iostream>
//#include "CCadena.h"

using namespace std;


template<class DATO>
class Nodo {
  public:
   // Constructor:




///////////////////////////////////////////////////////////////////////////
    Nodo(const DATO dat,const string dat2, Nodo<DATO> *pad=NULL,
         Nodo<DATO> *izq=NULL, Nodo<DATO> *der=NULL) :
            dato(dat),dato2(dat2), padre(pad), izquierdo(izq), derecho(der), FE(0) {}
//////////////////////////////////////////////////////////////////////////////////



   Nodo(const DATO dat, Nodo<DATO> *pad=NULL,
        Nodo<DATO> *izq=NULL, Nodo<DATO> *der=NULL) :
     dato(dat), padre(pad), izquierdo(izq), derecho(der), FE(0) {}

   // Miembros:

    DATO dato;
    string dato2;

   int FE;
   Nodo<DATO> *izquierdo;
   Nodo<DATO> *derecho;
   Nodo<DATO> *padre;

};
#endif //PARCIAL_2_NODO_H

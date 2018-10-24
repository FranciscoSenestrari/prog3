//
// Created by Francisco on 11/04/2016.
//
#include <iostream>
#include "NodoC.h"

#ifndef COLAS_COLA_H
#define COLAS_COLA_H



template<class T>
class Cola {
private:
    Nodo<T> *nodoFront;
    Nodo<T> *nodoBack;
    Nodo<T> *nodoIni;
    Nodo<T> *nodoFin;

    int Cantidad();

public:
    Cola();

    Cola(T d);

    bool esVacia();

    void encolar(T);

    T desencolar(int *e);

    T desencolar();

    void insert(T a,int p);
    ~Cola();

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    Cola(T d, int p);
    void encolarP(T d, int p);

    T desencolarS(int *e);
    T desencolarS();
    bool esVaciaS();
    void mostrar();

    void AddInCola(T d, int prioridad);



};

#endif
//
// Created by Francisco on 04/04/2016.
//

#ifndef PILAS_NODO_H
#define PILAS_NODO_H


template<class T>

class NodoC {
private:

    T dato;
    int prioridad;
    NodoC *next;

public:
    NodoC();

    NodoC(T a);

    ~NodoC() { };

    T getDato();

    void setDato(T a);

    NodoC *getNext();

    void setNext( NodoC *n);

    NodoC *newNext();


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


    NodoC(T a, int p);



   // Nodo(int a,int b);

    int getPrioridad();

    void setPrioridad(int p);
};

#endif //PILAS_NODO_H

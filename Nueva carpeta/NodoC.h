//
// Created by Francisco on 04/04/2016.
//

#ifndef PILAS_NODO_H
#define PILAS_NODO_H


template<class T>

class Nodo {
private:

    T dato;
    int prioridad;
    Nodo *next;

public:
    Nodo();

    Nodo(T a);

    ~Nodo() { };

    T getDato();

    void setDato(T a);

    Nodo *getNext();

    void setNext(Nodo *n);

    Nodo *newNext();


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


    Nodo(T a, int p);



   // Nodo(int a,int b);

    int getPrioridad();

    void setPrioridad(int p);
};

#endif //PILAS_NODO_H

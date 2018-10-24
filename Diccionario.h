//
// Created by Francisco on 13/06/2016.
//

#ifndef PARCIAL_2_DICCIONARIO_H
#define PARCIAL_2_DICCIONARIO_H
#include "AAVL.h"
#include <list>
#include <iostream>
#include <string>
#include "Nodo.h"
#include <fstream>
class Diccionario
{

public:

    Diccionario();
    ~Diccionario(){a.~AVL();};
    void Insertar(string p,string d);
    void Busqueda(string b);
    void lee();
    void Busqueda2(string buscar);

private:

    list<string> sugerencia;
    string nombDic;
    string  palabra;
    string definicion;
    AVL <string> a;
    int LevenshteinDistance(string s1,string s2);


};


#endif //PARCIAL_2_DICCIONARIO_H

//
// Created by Francisco on 13/06/2016.
//
#include <Windows.h>
#include <vector>
#include "Diccionario.h"
#include <string>
 void Diccionario::lee()
{
    int pos;
    string linea;

    ifstream file ("c:\\diccionario.txt");

    while(getline(file,linea))
    {

        pos = linea.find("\t");
        palabra = linea.substr(0,pos);
        definicion  = linea.substr(pos);

        a.Insertar2(palabra,definicion);
    }



}

void Diccionario::Insertar(string p,string d)
{
    a.Insertar2( p ,d);
}

void Diccionario::Busqueda(string b)
{
    a.Buscar2(b);
    a.buscar3(b);
}

Diccionario::Diccionario()
{

}

void Diccionario::Busqueda2(string buscar)
{

}

int Diccionario::LevenshteinDistance( string s1,string s2)
{

    int N1 = s1.size();
    int N2 = s2.size();
    int i, j;
    vector<int> T(N2+1);

    for ( i = 0; i <= N2; i++ )
        T[i] = i;

    for ( i = 0; i < N1; i++ )
    {
        T[0] = i+1;
        int corner = i;
        for ( j = 0; j < N2; j++ )
        {
            int upper = T[j+1];
            if ( s1[i] == s2[j] )
                T[j+1] = corner;
            else
                T[j+1] = min(T[j], min(upper, corner)) + 1;
            corner = upper;
        }
    }
    return T[N2];

}












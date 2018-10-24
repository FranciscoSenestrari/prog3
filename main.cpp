#include <iostream>
#include "Diccionario.h"
#include <locale>
#include "Cola.h"
using namespace std;



int main()
{


    setlocale(LC_ALL, "Spanish");
    Diccionario es;
    es.lee();

    string palabra, definicion,abuscar;
    int codigo;
     do
     {

         system("cls");
         cout << "Elija una opcion"<<endl;
         cout << "1) Insertar palabra en el diccionario"<<endl;
         cout << "2) Buscar Palabra"<<endl;
         cout << "3) Elija una opcion"<<endl;
         cout << "4) Elija una opcion"<<endl;
         cout << "5) Salir"<<endl;
         cin >> codigo;
         switch (codigo)
         {
             case 1:
                     cout <<"Ingrese  Palabra nueva";
                     cin >> palabra;
                     cout <<"Ingrese Definicion de la palabra nueva";
                     cin >> definicion;
                     es.Insertar(palabra,definicion);
                     system("pause");
                     system("cls");

                 break;
             case 2:
                 cout <<"Ingrese  Palabra a buscar"<<endl;
                 cin >> abuscar;
                  es.Busqueda(abuscar);
                 system ("pause");
                 break;
             case 3:
                 break;
             case 4:
                 break;

         }
     }while(codigo !=5);
    cout << "Adios"<<endl;





}
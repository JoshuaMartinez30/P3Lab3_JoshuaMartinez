#include <iostream>
#include <cstring>
#include "Catalogo.h"
using namespace std;

#ifndef Biblioteca_H
#define Biblioteca_H

class Biblioteca{
    private:
    string nombre, ubicacion;
    int piso, estante, seccion;
    Catalogo**** lista_biblioteca;
    public:
    Biblioteca();
    Biblioteca(string , string, int piso, int estante, int seccion );
    string getnombre();
    void setnombre(string);
    string getubicacion();
    void setubicacion(string);
    int getpiso();
    void setpiso(int);
    int getestante();
    void setestante(int);
    int getseccion();
    void setseccion(int);
    void add(string , string , int , int, int, int);
    string tostring();
    ~Biblioteca();
};
#endif
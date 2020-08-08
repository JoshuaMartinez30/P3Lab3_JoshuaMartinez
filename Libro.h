#include <iostream>
#include <cstring>
using namespace std;

#ifndef Libro_H
#define Libro_H

class Libro{
    private:
    string titulo, autor;
    int anio_lanzamiento;
    public:
    Libro();
    Libro(string , string, int );
    string gettitulo();
    void settitulo(string);
    string getautor();
    void setautor(string);
    int getanio_lanzamiento();
    void setanio_lanzamiento(int);
    string tostring();
    ~Libro();
};
#endif
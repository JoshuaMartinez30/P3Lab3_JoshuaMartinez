#include <iostream>
#include <cstring>
using namespace std;

#ifndef Libro_H
#define Libro_H

class Libro{
    private:
    string titulo, autor;
    int año_lanzamiento;
    public:
    Libro();
    Libro(string , string, int );
    string gettitulo();
    void settitulo(string);
    string getautor();
    void setautor(string);
    int getaño_lanzamiento();
    void setaño_lanzamiento(int);
    string tostring();
    ~Libro();
};
#endif
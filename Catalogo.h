#include "Libro.cpp"
#include <iostream>
#include <vector>
using namespace std;

#ifndef Catalogo_H
#define Catalogo_H

class Catalogo{
    private:
    vector<Libro*> catalogos;
    public:
    Catalogo();
    Catalogo(vector<Libro>);
    Libro* getLibro(int);
    void setLibro(string, string, int);
    string tostring();
    ~Catalogo();
};
#endif
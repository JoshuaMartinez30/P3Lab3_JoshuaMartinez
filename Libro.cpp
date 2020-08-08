#include "Libro.h"
#include <iostream>
using namespace std;
Libro::Libro(){   
}

Libro::Libro(string titulo_new, string autor_new, int anio_lanzamiento_new){
    this->titulo=titulo_new;
    this->autor=autor_new;
    this->anio_lanzamiento=anio_lanzamiento_new;
}

string Libro::gettitulo(){
    return titulo;
}

void Libro::settitulo(string titulo_new){
    titulo=titulo_new;
}

string Libro::getautor(){
    return autor;
}

void Libro::setautor(string autor_new){
    titulo=autor_new;
}

int Libro::getanio_lanzamiento(){
    return anio_lanzamiento;
}

void Libro::setanio_lanzamiento(int anio_lanzamiento_new){
    anio_lanzamiento=anio_lanzamiento_new;
}

string Libro::tostring(){
    return titulo;
}

Libro::~Libro(){    
}


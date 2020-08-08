#include "Libro.h"
#include <iostream>
using namespace std;
Libro::Libro(){   
}

Libro::Libro(string titulo_new, string autor_new, int año_lanzamiento_new){
    this->titulo=titulo_new;
    this->autor=autor_new;
    this->año_lanzamiento=año_lanzamiento_new;
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

int Libro::getaño_lanzamiento(){
    return año_lanzamiento;
}

void Libro::setaño_lanzamiento(int año_lanzamiento_new){
    año_lanzamiento=año_lanzamiento_new;
}

string Libro::tostring(){
    return titulo;
}

Libro::~Libro(){    
}


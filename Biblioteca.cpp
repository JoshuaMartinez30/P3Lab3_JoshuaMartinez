#include "Biblioteca.h"
#include "Catalogo.h"
#include <iostream>
using namespace std;
Biblioteca::Biblioteca(){   
}

Biblioteca::Biblioteca(string nombre_new, string ubicacion_new, int piso_new, int estante_new, int seccion_new ){
    this->nombre=nombre_new;
    this->ubicacion=ubicacion_new;
    this->piso=piso_new;
    this->estante=estante_new;
    this->seccion=seccion_new;
    lista_biblioteca = new Catalogo ***[piso];
    for (int i = 0; i < piso; i++){
        lista_biblioteca[i] = new Catalogo**[estante];
        for (int j = 0; j < estante; j++){
            lista_biblioteca[i][j]=new Catalogo*[seccion];
            for (int l = 0; l < seccion; l++){
                lista_biblioteca[i][j][l] = new Catalogo;
            }   
        }
    }
    
}

string Biblioteca::getnombre(){
    return nombre;
}

void Biblioteca::setnombre(string nombre_new){
    nombre=nombre_new;
}

string Biblioteca::getubicacion(){
    return ubicacion;
}

void Biblioteca::setubicacion(string ubicacion_new){
    ubicacion=ubicacion_new;
}

int Biblioteca::getpiso(){
    return piso;
}

void Biblioteca::setpiso(int piso_new){
    piso=piso_new;
}

int Biblioteca::getestante(){
    return estante;
}

void Biblioteca::setestante(int estante_new){
    estante=estante_new;
}

int Biblioteca::getseccion(){
    return seccion;
}

void Biblioteca::setseccion(int seccion_new){
    seccion=seccion_new;
}

void Biblioteca::add(string titulo_new, string autor_new, int año_lanzamiento_new, int piso_new, int estantes_new, int seccion_new){
    lista_biblioteca[piso_new][estantes_new][seccion_new]->setLibro(titulo_new,autor_new,año_lanzamiento_new);
}

string Biblioteca::tostring(){
    return nombre;
}

Biblioteca::~Biblioteca(){    
}


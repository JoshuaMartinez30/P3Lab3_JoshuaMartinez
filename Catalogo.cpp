#include "Catalogo.h"
#include "Libro.h"
#include <iostream>
#include <vector>
using namespace std;
Catalogo::Catalogo(){
}

Libro* Catalogo::getLibro(int posicion){
    return catalogos[posicion];
}

void Catalogo::setLibro(string titulo_new, string autor_new, int año_lanzamiento_new){
    catalogos.push_back(new Libro(titulo_new, autor_new, año_lanzamiento_new));
}

string Catalogo::tostring(){
    string libro="";
    for (int i = 0; i < catalogos.size(); i++){
        libro+=catalogos[i]->tostring()+ " ";
    }
    return libro;
}

Catalogo::~Catalogo(){   
}
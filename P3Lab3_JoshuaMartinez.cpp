//#include "Libro.cpp"
#include "Biblioteca.cpp"
//#include "Catalogo.cpp"
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main(){
    vector<Biblioteca>lista;
    int opcion;
    char respuesta;
    while (respuesta=='s' || respuesta=='S'){
        cout<<"1. Crear Biblioteca"<<endl;        
        cout<<"2. Agregar libro"<<endl;
        cout<<"3. Burcar por titulo"<<endl;
        cout<<"4. Buscar por autor"<<endl;
        cout<<"5. Explorar Biblioteca"<<endl;
        cout<<"0. Salir"<<endl; 
        cout<<"Ingrese opcion: "<<endl;
        cin>>opcion;
        switch (opcion)
        {
        case 1:
        {
            string nombre, ubicacion;
            int piso, estante, seccion;
            cout<<"*****Crear biblioteca*****"<<endl;
            cout<<"->Ingrese nombre: ";
            cin>>nombre;
            cout<<"->Ingrese ubicacion: ";
            cin>>ubicacion;
            cout<<"Ingrese piso: ";
            cin>>piso;
            cout<<"Ingrese estante por piso: ";
            cin>>estante;
            cout<<"Ingrese seccion por estante: ";
            cin>>seccion;
            Biblioteca b(nombre,ubicacion, piso, estante, seccion);
            lista.push_back(b);
            cout<<"Creado con Excito"<<endl;
        }    
        break;

        case 2:

        break;

        case 3:

        break;

        case 4:

        break;

        case 5:

        break;

       
        case 0:
            return (0);
        break;
        }
    }
    
}
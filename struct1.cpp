#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    struct Alumno {
        string nombre;
        char  inicial;
        int   edad;
        float nota;
    } ;
    
    Alumno persona;
    Alumno animales;
    Alumno guarderia;

    persona.nombre = "Juan";
    persona.inicial = 'J';
    persona.edad = 20;
    persona.nota = 7.5;
    cout << "La edad de " << persona.nombre << " es " << persona.edad << " y su nota es " << persona.nota;
 
}
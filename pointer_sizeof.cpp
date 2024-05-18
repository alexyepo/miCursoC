#include <iostream>
#include <locale.h>

using namespace std;

int main ()
{
    setlocale(LC_ALL, "Spanish");
    int ivar, *ptr;

    ivar = 2;
    ptr = &ivar;

    cout << "La dirección de memoria de ivar es: " << ptr << " Su tamaño es: " << sizeof ptr << endl;    
    cout << "El valor contenido en la dirección de ivar es: " << *ptr << " Su tamaño es: " << sizeof *ptr << endl;
    
}
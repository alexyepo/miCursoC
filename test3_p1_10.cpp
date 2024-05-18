#include <iostream>

using namespace std;

char f1(char c)
{
    return c == 'z' ? 'a' : c + 1;
}

char f2(char &c) // Se toma el valor por referencia, es decir la funcion mofifica el argumento original
{
    c = f1(c);
    return c; // este retorno es el resultado de pasar c como argumento a f1
}

int main()
{
    char x = 'x';

    cout  << f2(x); //envia 'x' y retorna 'x' + 1 es decir 'y'. Acuerdo f1.
    cout  << f2(x); //envia 'y' y retorna 'y' + 1 es decir 'z'. Acuerdo f1.
    cout  << f2(x) << endl; // envia 'z' y retorna 'a' . Acuerdo f1.
}
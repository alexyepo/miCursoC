#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> t = {8, 4, 2, 1};
    int *p1 = &t[0] + 2, *p2 = p1 -1;
    cout << "p1: " << *p1 << endl;
    cout << "p2: " << *p2 << endl;
    cout << "direccion de p1 es: " << p1 << endl;
    cout << "direccion de p2 es: " << p2 << endl;
    p1++; //post-incremento, p1 es incrementado en 1 pero no es usado en la expresion
    cout << "direccion de p1 es: " << p1 << endl;
    cout << "el valor de *p1 es: " << *p1 << endl;
    //cout << sizeof(int) << " Bytes para ints, equivalente a 1 en terminos de unidad de puntero" << endl;
    cout << "t[p1 - p2]: " << t[p1 - p2] << endl;
    cout << *p1 - t[p1 - p2] << endl;
}
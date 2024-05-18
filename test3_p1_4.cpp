#include <iostream>

using namespace std;

//Reserva memoria dinámica para un arreglo de dos enteros y devuelve un puntero al primer elemento del arreglo.
int* fun()  //Devuelve un puntero a un entero
{
    return new int[2]; //Devuelve un puntero solo al primer elemento del arreglo para que se pueda acceder al arreglo
}

//Libera la memoria dinámica que ha sido asignada a un puntero a un entero y luego devuelve el valor 0.
int fun(int* p) //Recibe como paramentro un puntero a un entero
{
    delete[] p; //Libera memoria dinámica que ha sido asignada al puntero
    return 0;
}

//Multiplica por 2 el valor del elemento del arreglo al que apunta p con el índice q.
void fun(int *p, int q) //Recibe un puntero que apunta a un entero y como segundo parametro recibe un entero
{
    p[q] *= 2;
}

void fun(int *p, int q, int r)
{
    p[q] = r;
}

int main()
{
    int *v = fun(); //Declara un puntero que apunta al return de la funcion fun()
    cout << "v: " << v << endl;
    // cout << "*v: " << *v << endl;
    // cout << "v[0]: " << v[0] << " v[1]: " << v[1] << endl; 
    fun(v, 0, 1);
    cout << "v[0]: " << v[0] << "   v[1]: " << v[1] << endl;   
    fun(v, 1, 2);
    cout << "v[0]: " << v[0] << "   v[1]: " << v[1] << endl;  
    fun(v, 0);
    cout << "v[0]: " << v[0] << "   v[1]: " << v[1] << endl;
    cout << v[1] + v[0] << endl;

    fun(v);
}

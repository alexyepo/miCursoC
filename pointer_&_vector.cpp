#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	vector<int> vect {3, 2, 1}; //declara un vector de tipo entero que contiene tres elementos

    cout << "vect[0] es: " << vect[0] << endl;
	int *ptr = vect.data(); //declara un puntero que apunta al primer elemento del vector usandoe l metodo "data"
	cout << *ptr << endl;
    int *ptr2 = &vect[0]; //también apunta al primer elemento del vector
    cout << *ptr2 << endl;
	cout << (ptr == ptr2) << endl;
}
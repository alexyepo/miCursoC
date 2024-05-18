#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
    char nombre [100];
    string cadena;
    int edad = 0;
    int numero1, numero2;
    string animal;
    int  numero = 0;
    string letra = "te quiero ";


    cout << "Hola soy tu asistente, Ingresa tu nombre: ";
    getline(cin, cadena);
    cout << "Hola " << cadena << ". Tu nombre tiene " << cadena.length() << " caracteres." << endl;

    // cin.getline (nombre, 100, '\n');
    // cout << "Hola " << nombre << ". Se han guardado " << strlen(nombre) << " caracteres." << endl;
    
    // cout << "Cual es tu edad? " << endl;
    // cin >> edad;
    // cout << "Tu edad es " << edad << " anos." << endl;
    // cout << "Naciste en el año: " << 2024 - edad << endl;
    // cout << "Ingresa un numero para sumar: ";
    // cin >> numero1;
    // cout << "ingresa otro numero para sumar: " << endl;
    // cin >> numero2;
    // cout << "el resultado es: " << numero1 + numero2 << endl;
    // cout << "cual es tu animal favorito? " << endl;
    // cin >> animal;
    // cout << "a mi tambien me gusta el " << animal;
    // cout << "hasta que numero quieres contar?" << endl;
    // cin >> numero;

    // for (int i = 1; i <= numero; i++)
    //     cout << letra << i << endl;

}
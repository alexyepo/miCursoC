#include <iostream>
#include <string>

using namespace std;

string fun(string t, string s = "x", int r = 1)
{
    while(--r) // No entra al while, ya que hubo un pre-incremento negativo y el valor de r es cero
        s += s;
        //cout << "Entrada al while"<< endl;
    t = t + s; // t es el string a
    //cout << "t: " << t << endl;
    return s; // Retorna solo el string "x"
}

int main()
{
    string name = "a";
    cout << fun(name);
    cout << name;
}
#include <iostream>
#include <vector>

using namespace std;

struct S {
    int entero;
    char ch;
    string name;
};

struct SS {     //Estructura que contiene estructura
    S structss;        //crea la estructura de nombre t con modelo de struct S
};

int main() {
    vector<SS> t = {{12, 'a', "adrian"}, {34, 'b', "alex"}};

    cout << t[0].structss.name << t[1].structss.ch; //cout del campo t de la estructura t del vector t en posición 0 y 1

}
#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main()
{
    struct Persona {
        int id;
        string nombre;
        float nota;
    };

    char imprimir;
 
    vector <Persona> student (3);
    int total_student = student.size();

    for (int i=0; i<3; i++) {
        cout << "Escribe el nombre del estudiante " << i << endl;
        cin >> student [i].nombre;
        cout << "Escribe la nota del estudiante " << i << endl;
        cin >> student [i].nota;
    }
 
    cout << "Deseas imprimir el listaado de notas? presiona la tecla Y/y para si o N/n para no" << endl;
    cin >> imprimir;
        if (imprimir=='y' || imprimir=='Y'){
            cout << "El listado de notas para los " << total_student << " es:" << endl;
            //For para imprimir la nombre y notas del alumno
            cout << "Id\t\tNombres\t\tNotas" << endl;
            for (int i=0; i<3; i++) {
                student [i].id = i;
                cout << student [i].id << "\t" << student [i].nombre << "\t\t" << student [i].nota << endl;
            }
            cout << "Eso fue todo!" << endl;
        }
        else if (imprimir=='n' || imprimir=='N'){
            cout << "Decidió no imprimir el listado de notas. Muchas gracias!";
        }
        else
            cout << "Ese comando no se reconoce";

    return 0;
}
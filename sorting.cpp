#include <iostream>
#include <vector>

using namespace std;

//Este programa necessita verdificar que el vector este ordenado para comenzar nuevamente a ordenar 
// si no lo está, se debe usar un while
int main() 
{
    vector<int> numbers {8, 10, 6 , 2, 4}; // vector to be sorted 
    bool swapped;
    // we need 5 – 1 comparisons – why? 
    do { // we will decide if we need to continue this loop 
        swapped = false; // no swap occured yet

        for(int i = 0; i < 4; i++)
            if(numbers[i] > numbers[i + 1]) {
            swapped = true;
            int aux = numbers[i];
            numbers[i] = numbers[i + 1];
            numbers[i + 1] = aux;
            }
    } while(swapped);

    // print results 
    cout << endl << "Sorted vector: " << endl;
    for (int i = 0; i < 5; i++)
        cout << numbers[i] << " ";
    cout << endl;
}
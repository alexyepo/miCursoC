#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> numbers {3, 4, 5};
    int *ptr1 = numbers.data();
    int *ptr2 = numbers.data() + 1;

    cout << "*ptr1 apunta a numbers[0] y su valor es: " << *ptr1 << endl;
    cout << "*ptr2 apunta a numbers[1] y su valor es: " << *ptr2 << endl;
    cout << endl;
    cout << "ptr2[-1] apunta a numbers[0] y su valor es: " << ptr2[-1] << endl;
    cout << "ptr2[1] apunta a numbers[2] y su valor es: " << ptr2[1] << endl;
    cout << endl;
    ptr2[-1] = *ptr2 + ptr2[1]; // Es lo mismo que: numbers[0] = numbers[1] + numbers[2];
    cout << "Con ptr2[-1] = *ptr2 + ptr2[1] ahora numbers[0] es: " << numbers[0] << endl;
}
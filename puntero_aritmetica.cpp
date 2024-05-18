#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	vector<int> array {1, 2, 3};
	int *ptr1 = array.data();
	int *ptr2, *ptr3;
	int i;

	
	cout << "*ptr1: " << *ptr1 << endl;
	cout << "*ptr1 + 1: " << *(ptr1 + 1) << endl;
	cout << "*ptr2 + 2: " << *(ptr1 + 2) << endl;
	cout << endl;
	ptr1 = &array[0];
	ptr2 = &array[1];
	ptr3 = &array[2];
	cout << "El valor que contiene la variable al cual apunta ptr1 es: " << *ptr1 << " Direccion: " << ptr1 << endl;
	cout << "El valor que contiene la variable al cual apunta ptr2 es: " << *ptr2 << " Direccion: " << ptr2 << endl;
	cout << "El valor que contiene la variable al cual apunta ptr3 es: " << *ptr3 << " Direccion: " << ptr3 << endl;


	i = ptr1 - ptr2;
	cout << "ptr2 - ptr1: " << i << endl;




	

	// to be continued
}
#include <iostream>

using namespace std;

int main()
{
	int *tabptr = new int[5], sum = 0;

	for (int i = 0; i < 5; i++){
		tabptr[i] = i;
		//cout << "tabptr[i] = " << tabptr[i] << endl;
	}
	for (int i = 0; i < 5; i++){
		sum += tabptr[i];
		//cout << "sum = " << sum << endl;
	}
	delete [] tabptr;
	cout << "sum final = " << sum << endl;
}

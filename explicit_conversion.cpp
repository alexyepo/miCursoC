#include <iostream>

using namespace std;

int main() 
{
	float f = 3.21;
	double d = 1.23;
	long double l = 9.87;

	int k = int(f) + (int)d + static_cast<int>(l);

	cout << k << endl;
}
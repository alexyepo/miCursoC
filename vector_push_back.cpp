#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	vector<int> vect(0);
	cout << vect.size()  << endl;

	vect.push_back(1);
	vect.push_back(-1);
	vect.push_back(0);

	cout << vect.size()  << endl;

	for(int i = 0; i < vect.size(); i++)
		cout << vect[i] << " ";

	cout << endl;
}
#include <iostream>

using namespace std;

inline int function(int parameter) 
{
	return parameter * 2;
}

int main()
{
	int var = 1;
	var = function(var);
	var = function(var);
	var = function(var);
	cout << var << endl;
}
#include <iostream>

using namespace std;

// int main() 
// {
// 	// short s = 32767;
// 	// int i = s;
//     int i = 2147483647;
// 	short s = i;
// 	if (i == s)
// 		cout << "equal" << endl;
// 	else
// 		cout << "not equal" << endl;
//     cout << "s: " << s << endl;
// }

//Precision
// int main()
// {
// 	// float f = 1234.5678;
// 	// double d = f;

//     double d = 123456.789012;
// 	float f = d;

// 	if (d == f)
// 		cout << "equal" << endl;
// 	else
// 		cout << "not equal" << endl;
//     cout << "f: " << f << endl;
// }


int main() 
{
  float f = 123.456;
  float g = 1e100;
  int i = f;
  int j = g;

  cout << i << endl;
  cout << j << endl;
}
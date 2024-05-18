#include <iostream>

using namespace std;

string toBinary(int n) {
  string r;
  while (n != 0) {
    r += (n % 2 == 0 ? "0" : "1");
    n /= 2;
  }
  return r;
}

int main()
{
    int a = 15, b = 2;
    //cout << "1> 0b" << toBinary(a) << endl;

    int c = a | b;
    cout << c << endl;
    int d = c & a;
    cout << d << endl;
    int e = d ^ 0;
    cout << e << endl;

    cout << e << d << c;
}
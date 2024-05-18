#include <iostream>

using namespace std;

int main() 
{
  int Int = 2;
  char Char = 3;
  short Short = 4;
  float Float = 5.6;

  Int = Short + Char + Float; //int(double((int(Short) + int(Char)) + double(Float)))
  cout << sizeof(Int) << " bytes for ints" << endl;
  cout << Int << endl;
}
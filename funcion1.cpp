#include <iostream>

using namespace std;

float square(float x)
{
  float result = x * x;

  return result;
}

int main() 
{
  float number;
  
  number = 5.0;
  
  cout << "El cuadrado de " << number << " es: " << square(number) << endl;

}
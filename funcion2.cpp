#include <iostream>

using namespace std;

float square(float);

int main() 
{
  float arg = 2.0;

  cout << "The second power of " << arg << " is " << square(arg) << endl;
}

float square(float x) 
{
  float result = x * x;
  
  return result;
}

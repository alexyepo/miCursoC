#include <iostream>

using namespace std;

int globvar = 0;

void func() 
{
	  cout << "Thank you for invoking me :)" << endl;
	  globvar++;
}

int main() 
{
	  for (int i = 0; i < 5; i++)
	    	func();
	  cout << endl << "The function was happy " << globvar 
	       << " times" << endl;
}
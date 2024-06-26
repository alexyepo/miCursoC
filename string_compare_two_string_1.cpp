#include <iostream>
#include <string>

using namespace std;

int main() 
{
  string str1, str2;

  cout << "Enter 2 lines of text:" << endl;
  getline(cin, str1);
  getline(cin, str2);
  cout << "You've entered:'" << endl;
  if (str1 == str2)
    cout << "\"" << str1 << "\" == \"" << str2 << "\"" << endl;
  else if (str1 > str2)
    cout << "\"" << str1 << "\" > \"" << str2 << "\"" << endl;
  else
    cout << "\"" << str2 << "\" > \"" << str1 << "\"" << endl;
}

// Of course, you can compare two strings in more flexible ways too. 
// All the operators designed to compare data are at your disposal: > < >= <= !=. 
// You can check if one of the strings is greater/lesser than the other, 
// but remember that these comparisons are carried out in alphabetical order 
// where 'a' is greater than 'A' (sic) and obviously 'z' is greater than 'a', 
// but less obviously, 'a' is greater than '1'.
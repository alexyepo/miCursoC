#include  <iostream>
#include  <string>

using namespace std;

int main() 
{
  string s;

    //   s = "A" + "B"; //No puede concatenar dos literales
    s = s + "C"; //Si puede concatenar un literak y una variable
    s = "B" + s;
    cout << s << endl;

    string the_question = "To be ";
  
    the_question += "or not to be";
    cout << the_question << endl;

}

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    // Both forms (assigning and functional) are permissable.
    string is_home = "pet_name";
    string has_returned("pet_name");

    string good = "Jekyll", bad = "Hyde";

    cout << good + " & " + bad << endl;
    cout << bad + " & " + good << endl;
    cout << sizeof(good) << " bytes for string" << endl;
}
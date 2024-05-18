#include <iostream>

using namespace std;

int main()
{
    int a = 2;

    switch (a<<a) {
        case 4 : 
                cout << "entra al case 4" << endl;
                a++;
                //break;
        
        case 8 : 
                cout << "entra al case 8" << endl;
                a++;
                //break;
        case 2 : 
                cout << "entra al case 2" << endl;
                a++;
                break;
        
        case 1 : 
                cout << "entra al case 1" << endl;
                a--;
                //break;
    }
    cout << "a: " << a;
}

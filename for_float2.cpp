#include <iostream>

using namespace std;

int main()
{
    for(float val = -10.0; val < 100.0; val = -val * 2){
        cout << "val = " << val << endl;
        if(val < 0 && -val >= 20){            
            cout << "entro al if";  
            continue;         
        }
        cout << "*" << endl;

    }

    //cout << "se detuvo el for por el break";
}
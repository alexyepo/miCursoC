#include <iostream>

using namespace std;

int main()
{
    for(float val = -10.0; val < 30.0; val = -val * 2){
        cout << "val = " << val << endl;
        cout << "*" << endl;
    }


    float val = -10.0;
    if (val < 30.0){
        val = -val * 2;
        cout << "*" << endl;
        
    }

}


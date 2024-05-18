#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<char> arr = { 'a', 'b', 'c' };

    for(int i = 1; i < arr.size(); i++){
        cout << "*";
        //cout << "i: " << i << endl;
        if((arr[i] - arr[i - 1]) % 2)
            cout << "entrada al if" << endl;
            continue;
            //cout << "Instrucción despues del continue/break" << endl;
        cout << "*";
    }
}
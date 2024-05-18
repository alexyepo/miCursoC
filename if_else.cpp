#include <iostream>

using namespace std;

int main()
{
    int i = 5, j = i++, k = --i;
    // cout << "i: " << i << endl;
    // cout << "j: " << j << endl;
    // cout << "k: " <<k << endl;

    if (i == 2)
        cout << "i: " << i << endl;
    else if (i == 3)
        cout << "i: " << i << endl;
    else if (i == 4)
        cout << "i: " << i << endl;
    else
        cout << "i: " << i << endl;

    return 0;
}
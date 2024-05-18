#include <iostream>

using namespace std;

main()
{
    double big = 1e2;
    double small = 0.2e-6;

    cout << "big: " << fixed << big << endl;
    cout << "small: " << fixed << small << endl;
    cout << "big + small: " << fixed << big + small;
}
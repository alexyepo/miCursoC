#include <iostream>

using namespace std;

int main()
{
    bool ints = sizeof(long) >= sizeof(int) && sizeof(int) >= sizeof(short);
    cout << ints << endl;
    bool floats = sizeof(double) < sizeof(float);
    cout << floats << endl;
    bool chars = sizeof(char) == 1;
    cout << chars << endl;
    int v = ints && floats && chars;

    cout << "v: " << v << endl;
}
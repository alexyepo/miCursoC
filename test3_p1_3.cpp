#include <iostream>

using namespace std;

int fun(int p)
{
    ++p;
    return p++;
}

int main()
{
    int a = 1, b = fun(a);

    cout << a + b << endl;
}
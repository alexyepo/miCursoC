#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    vector<bool> t(2);
    bool adrian = false; // 0
    bool alex = true; // 1
    string luana = "true";
    int susana = 70;  

    for(int i = 1; i < 2 ; i++ )
        t[1 - i] = ! (i % 2);
    
    if (susana)
    {
        cout << "adrian: " << adrian << endl;
        cout << "alex: " << alex << endl;
        
    }
    else cout << "luana: " << luana << endl;


    //cout << t[0] && t [1];
    
    //return 0;
}
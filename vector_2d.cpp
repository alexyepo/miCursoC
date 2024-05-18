#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> g = {{2, 4},    // Fila 0 >> {0, 1} 
                             {3, 6},    // Fila 1 >> {0, 1}          
                             {5, 10}};  // Fila 2 >> {0, 1}
    
    for(int i = 1; i >= 0; i--)
        for(int j = 0; j < 2; j++)
            g[i][j] += g[j][i];
    cout << g[1][1];

}
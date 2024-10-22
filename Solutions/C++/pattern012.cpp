// Pattern Programs - 012 [C++]
// Github Repository: https://github.com/mxsena/pattern-programs
#include <iostream>
using namespace std;

int main(void)
{
    int n = 5;
    int x;
    
    for (int i = 1; i <= n; i++)
    {
        x = i;
        for (int j = 1; j <= n; j++)
        {
            cout << x << " ";
            x += n;
        }
        cout << endl;
    }
    return 0;
}
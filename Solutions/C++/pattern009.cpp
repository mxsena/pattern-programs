// Pattern Programs - 009 [C++]
// Github Repository: https://github.com/mxsena/pattern-programs
#include <iostream>
using namespace std;
int main(void)
{
    int n = 5;
    for (int i; i <= n; i++)
    {
        for (int j; j <= n; j++)
        {
            cout << (i * j) << " ";
        }
        cout << endl;
    }
    return 0;
}
// Pattern Programs - 013 [C++]
// Github Repository: https://github.com/mxsena/pattern-programs
#include <iostream>
using namespace std;

int main(void)
{
    int n = 5;
    int x, y;

    for (int i = 1; i <= n; i++)
    {
        x = i;
        y = n - 1 + 1;

        for (int j = 1; j <= n; j++)
        {
            if (j % 2 == 1)
            {
                cout << x << " ";
            }
            else
            {
                cout << y << " ";
            }
            x = x + n;
            y = y + n;
        }
        cout << endl;
    }
    return 0;
}
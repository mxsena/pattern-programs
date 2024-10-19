// Pattern Programs - 012 [C]
// Github Repository: https://github.com/mxsena/pattern-programs
#include <stdio.h>

int main(void)
{
    int n = 5;
    int i, j;
    int x;

    for (i = 1; i <= n; i++)
    {
        x = i;
        for (j = 1; j <= n; j++)
        {
            printf("%2d ", x);
            x += n;
        }
        printf("\n");
    }
    return 0;
}
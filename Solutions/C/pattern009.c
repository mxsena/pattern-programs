// Pattern Programs n.009 [C]
// Github Repository: https://github.com/mxsena/pattern-programs
#include <stdio.h>

int main(void)
{
    int n = 5;
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%2d", i * j);
        }
        printf("\n");
    }
    return 0;
}
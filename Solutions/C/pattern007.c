// Pattern Programs n.007 [c]
// Author: Matheus Sena (https://github.com/mxsena)
#include <stdio.h>

int main(void)
{
    int n = 5;
    int i, j;
    int x = 1;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%2d ", x);
            x += 2;
        }
        printf("\n");
    }
    return 0;
}
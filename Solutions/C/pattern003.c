// Pattern Programs n.003 [c]
// Author: https://github.com/mxsena

#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
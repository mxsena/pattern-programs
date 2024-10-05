// Pattern Programs n.005 [c]
// Author: Matheus Sena (https://github.com/mxsena)
#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 5; i >= 1; i--)
    {
        for (j = 5; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
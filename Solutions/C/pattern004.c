// Pattern Programs n.004 [C]
// Github Repository: https://github.com/mxsena/pattern-programs
#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <=5; j++) 
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
// Pattern Programs - 011 [C]
// Github Repository: https://github.com/mxsena/pattern-programs
#include <stdio.h>

int main(void)
{
    int i, j;
    
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%d %d ", i, j);
        }
        printf("\n");
    }
    return 0;
}
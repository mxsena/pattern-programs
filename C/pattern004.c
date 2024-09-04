/*

.       Pattern #004

.       5 5 5 5 5
.       4 4 4 4 4
.       3 3 3 3 3
.       2 2 2 2 2
.       1 1 1 1 1

*/

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
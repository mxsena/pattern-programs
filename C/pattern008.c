/* Pattern 008

.        2  4  6  8 10
.       12 14 16 18 20
.       22 24 26 28 30
.       32 34 36 38 40
.       42 44 46 48 50

*/

#include <stdio.h>

int main(void) {
    int n = 5;
    int i, j;
    int x = 2;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%2d ", x);
            x += 2;
        }
        printf("\n");
    }
    return 0;
}
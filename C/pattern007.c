/* Pattern 007

.        1  3  5  7  9
.       11 13 15 17 19
.       21 23 25 27 29
.       31 33 35 37 39
.       41 43 45 47 49

*/

#include <stdio.h>

int main(void) {
    int n = 5;
    int i, j;
    int x = 1;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%2d ", x);
            x += 2;
        }
        printf("\n");
    }
    return 0;
}
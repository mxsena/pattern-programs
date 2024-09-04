/*

======= PATTERN 005 =======

 1  2  3  4  5
 6  7  8  9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25

*/

#include <stdio.h>

int main(void) {
    int rows = 5, columns = 5;
    int num = 1;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            printf("%3d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
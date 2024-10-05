// Pattern Programs n.006 [c]
// Author: Matheus Sena (https://github.com/mxsena)
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
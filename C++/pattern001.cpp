/* Pattern #001

.       * * * * *
.       * * * * *
.       * * * * *
.       * * * * *
.       * * * * *

*/

#include <iostream>

int main(void) {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    return 0;
}

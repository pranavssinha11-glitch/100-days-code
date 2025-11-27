#include <stdio.h>

int main() {
    int i, j, space;

    // Upper half of the diamond
    for(i = 1; i <= 4; i++) {          // 4 rows in the upper part
        for(space = 4; space > i; space--) {
            printf(" ");
        }
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for(i = 3; i >= 1; i--) {          // 3 rows in the lower part
        for(space = 4; space > i; space--) {
            printf(" ");
        }
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

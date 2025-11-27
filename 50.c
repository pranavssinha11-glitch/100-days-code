#include <stdio.h>

int main() {
    int i, j;

    for(i = 5; i >= 1; i--) {           // Number of stars decreases each line
        for(j = 5; j > i; j--) {        // Print spaces before stars
            printf(" ");
        }
        for(j = 1; j <= i; j++) {       // Print stars
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

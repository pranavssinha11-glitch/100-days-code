#include <stdio.h>

int main() {
    int i, j;

    for(i = 5; i >= 1; i--) {        // i controls starting number
        for(j = i; j <= 5; j++) {    // j prints from i to 5
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

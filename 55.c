#include <stdio.h>

int main() {
    int n, i, j, count;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for(i = 2; i <= n; i++) {   // Start from 2 because 1 is not prime
        count = 0;

        // Check how many numbers divide i
        for(j = 1; j <= i; j++) {
            if(i % j == 0) {
                count++;
            }
        }

        // Prime numbers have exactly 2 factors: 1 and itself
        if(count == 2) {
            printf("%d ", i);
        }
    }

    return 0;
}


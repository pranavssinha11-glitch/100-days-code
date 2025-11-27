#include <stdio.h>

int main() {
    int n, i;
    long long product = 1; // Use long long to store large values

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {     // Check if number is even
            product = product * i;
        }
    }

    printf("Product of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}


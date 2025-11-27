#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;  // Use long long to handle large factorial values

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d = %lld\n", n, fact);

    return 0;
}


#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum = sum + (float)(2*i - 1) / (2*i);
    }

    printf("Sum of the series up to %d terms is: %.4f\n", n, sum);

    return 0;
}


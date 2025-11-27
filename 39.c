#include <stdio.h>

int main() {
    int num, digit, product = 1;
    int hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;       // Get last digit

        if (digit % 2 != 0) {   // Check if odd
            product = product * digit;
            hasOdd = 1;
        }

        num = num / 10;         // Remove last digit
    }

    if (hasOdd == 1)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits present.\n");

    return 0;
}

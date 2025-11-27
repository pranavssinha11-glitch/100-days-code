#include <stdio.h>
int main() {
    int num, originalNum, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;  // Store original number

    while (num > 0) {
        remainder = num % 10;        // Get last digit
        sum += remainder * remainder * remainder;  // Cube and add
        num = num / 10;              // Remove last digit
    }

    if (sum == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}


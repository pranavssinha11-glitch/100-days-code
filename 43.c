#include <stdio.h>

int main() {
    int num, temp, digit, fact, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num; // store original number

    while(temp > 0) {
        digit = temp % 10;
        fact = 1;

        // calculate factorial of digit
        for(i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if(sum == num) {
        printf("%d is a Strong Number.\n", num);
    } else {
        printf("%d is Not a Strong Number.\n", num);
    }

    return 0;
}

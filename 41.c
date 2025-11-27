#include <stdio.h>

int main() {
    int num, first, last, temp, digits = 0, power = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = num % 10;  // extract last

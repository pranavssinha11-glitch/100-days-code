#include <stdio.h>
int main() {
    float num1,num2, sum, difference, product, quotient;
    printf("Enter first number:");
    scanf("%f", &num1);
    printf("Enter second number:");
    scanf("%f", &num2);
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    if (num2 != 0)
        quotient = num1 / num2;
    else 
        quotient = 0;           
    printf("\nResults:\n");
    printf("sum = %.2f\n", sum);
    printf("difference = %.2f\n", difference);      
    printf("Product = %.2f\n",product);
    if (num2 != 0)
    printf ("Quotient = %.2f\n", quotient);
    else
    printf("Quotient = Undefined(division by zero)\n");
    return 0;

}
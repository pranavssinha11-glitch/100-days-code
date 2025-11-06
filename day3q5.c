#include<stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("Enter temrature in Celcius:");
    scanf("%f",&celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}
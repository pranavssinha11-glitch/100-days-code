#include<stdio.h>
#include<math.h>
int main() {
    float principle, rate, time;
    float simple_interest,
    compoundInterest;
printf("Enter pinciple amount:");
scanf("%f",&principle);
printf("Enter rate of interest:");
scanf("%f",&rate);
printf("Enter time (in years):");
scanf("%f",&time);
simple_interest = (principle * rate * time) / 100;
compoundInterest = principle * pow((1 + rate / 100), time) - principle;
printf("Simple Interest = %.2f\n", simple_interest);
printf("Compound Interest = %.2f\n", compoundInterest);
return 0;
}
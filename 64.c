#include <stdio.h>

int main() {
    long num;
    int digit, freq[10] = {0}, i, maxFreq = 0, mostFreqDigit = 0;

    printf("Enter an integer number: ");
    scanf("%ld", &num);

     // Count frequency of each digit
    while(num > 0) {
        digit = num % 10;      // Get last digit
        freq[digit]++;         // Increase its count
        num = num / 10;        // Remove last digit
    }

    // Find the digit with maximum frequency
    for(i = 0; i < 10; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFreqDigit = i;
        }
    }

    printf("Digit that occurs the most times: %d\n", mostFreqDigit);
    printf("It occurs %d times.\n", maxFreq);

    return 0;
}













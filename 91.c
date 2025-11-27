#include <stdio.h>

int main() {
    char str[200], result[200];
    int i = 0, j = 0;

    printf("Enter a string: ");
    gets(str); // or use fgets(str,200,stdin)

    while(str[i] != '\0') {
        char ch = str[i];

        // Convert to lowercase for easier checking
        if(ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        // If not a vowel, store it
        if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            result[j] = str[i];
            j++;
        }

        i++;
    }

    result[j] = '\0'; // end the new string

    printf("String after removing vowels: %s\n", result);

    return 0;
}

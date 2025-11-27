#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vowel = 0, consonant = 0;

    printf("Enter a string: ");
    gets(str); // or use fgets(str, 100, stdin);

    while(str[i] != '\0') {
        char ch = str[i];

        // Check for alphabets
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {

            // Convert uppercase to lowercase for easier checking
            if(ch >= 'A' && ch <= 'Z') {
                ch = ch + 32;
            }

            // Check vowel
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowel++;
            else
                consonant++;
        }
        i++;
    }

    printf("Total vowels = %d\n", vowel);
    printf("Total consonants = %d\n", consonant);

    return 0;
}

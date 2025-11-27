#include <stdio.h>

int main() {
    char str[200], longest[200];
    int i = 0, j = 0, maxLen = 0, currLen = 0, start = 0, lstart = 0;

    printf("Enter a sentence: ");
    gets(str);  // or use fgets(str,200,stdin)

    while(str[i] != '\0') {

        // If the character is not a space, count the length of current word
        if(str[i] != ' ') {
            currLen++;
        } else {
            // Check if current word is longest
            if(currLen > maxLen) {
                maxLen = currLen;
                lstart = start;
            }
            currLen = 0;
            start = i + 1; // next word starts after space
        }
        i++;
    }

    // Check last word too
    if(currLen > maxLen) {
        maxLen = currLen;
        lstart = start;
    }

    // Copy longest word
    for(i = 0; i < maxLen; i++) {
        longest[i] = str[lstart + i];
    }
    longest[maxLen] = '\0';

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);         


    return 0;
}  

#include <stdio.h>

int main() {
    char str[200], temp;
    int i = 0, start = 0, end = 0;

    printf("Enter a sentence: ");
    gets(str);  // or use fgets(str,200,stdin)

    while(str[i] != '\0') {

        // Find end of each word
        if(str[i] == ' ' || str[i+1] == '\0') {
            if(str[i+1] == '\0')
                end = i;
            else
                end = i - 1;

            // Reverse the word from index 'start' to 'end'
            while(start < end) {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            start = i + 1; // next word starts after space
        }

        i++;
    }

    printf("Result: %s\n", str);

    return 0;
}

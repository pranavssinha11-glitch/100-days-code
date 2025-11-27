#include <stdio.h>

int main() {
    char str[200], ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    gets(str);   // or use fgets(str,200,stdin)

    printf("Enter the character to find frequency: ");
    scanf("%c", &ch);

    while(str[i] != '\0') {
        if(str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}

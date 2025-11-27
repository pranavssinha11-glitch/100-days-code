#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    printf("Enter your full name: ");
    gets(str);   // or use fgets(str,200,stdin)

    // Print first character (first initial)
    if(str[0] != ' ')
        printf("%c ", str[0] - 32); // uppercase

    // Loop through rest of name
    while(str[i] != '\0') {
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
            // print next character after space as an initial
            if(str[i+1] >= 'a' && str[i+1] <= 'z')
                printf("%c ", str[i+1] - 32); // lowercase to uppercase
            else
                printf("%c ", str[i+1]);
        }
        i++;
    }

    return 0;
}

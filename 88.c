#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    gets(str); // or use fgets(str, 200, stdin)

    while(str[i] != '\0') {
        if(str[i] == ' ') {
            str[i] = '-';  // replace space with hyphen
        }
        i++;
    }

    printf("Modified string: %s\n", str);

    return 0;
}


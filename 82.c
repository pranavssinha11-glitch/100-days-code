#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    gets(str); // or use fgets(str, 100, stdin);

    while(str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}

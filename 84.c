#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string in lowercase: ");
    gets(str); // you can use fgets(str,100,stdin) too

    while(str[i] != '\0') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // convert to uppercase
        }
        i++;
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}

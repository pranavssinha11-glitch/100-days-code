#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    gets(str); // You can use fgets(str, 100, stdin) instead (safer)

    while(str[count] != '\0') {  // Loop until null character
        count++;
    }

    printf("Total number of characters = %d\n", count);

    return 0;
}

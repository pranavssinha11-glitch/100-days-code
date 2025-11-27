#include <stdio.h>

int main() {
    char binary[50];
    int i;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Convert each bit to its 1's complement
    for (i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid binary input.\n");
            return 0;
        }
    }

    printf("1's Complement = %s\n", binary);

    return 0;
}

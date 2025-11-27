#include <stdio.h>

int main() {
    char str[100], temp;
    int i = 0, j = 0;

    printf("Enter a string: ");
    gets(str); // or use fgets(str,100,stdin);

    // find length manually
    while(str[j] != '\0') {
        j++;
    }
    j--; // point to last character

    // reverse using two-pointer method
    while(i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("Reversed string = %s\n", str);

    return 0;
}


#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j = 0, flag = 1;

    printf("Enter a string: ");
    gets(str); // or use fgets(str,100,stdin)

    // find length
    while(str[j] != '\0') {
        j++;
    }
    j--; // set j to last character index

    while(i < j) {
        if(str[i] != str[j]) {
            flag = 0; // not palindrome
            break;
        }
        i++;
        j--;
    }

    if(flag == 1)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}

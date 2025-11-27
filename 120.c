#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    
    // Read full line including spaces
    fgets(str, sizeof(str), stdin);

    int i = 0;

    // Capitalize the first character if it is a letter
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;

    // Traverse the string
    while (str[i] != '\0') {
        // If previous char is space and current is lowercase → capitalize
        if (str[i] == ' ' && (str[i+1] >= 'a' && str[i+1] <= 'z')) {
            str[i+1] = str[i+1] - 32;
        }
        i++;
    }

    printf("%s", str);
    return 0;
}

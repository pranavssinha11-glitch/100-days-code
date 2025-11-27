#include <stdio.h>

int main() {
    char str1[200], str2[200], temp[400];
    int i = 0, j = 0, k, found = 0;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // Find length of both strings
    while(str1[i] != '\0') i++;
    while(str2[j] != '\0') j++;

    // If lengths differ, can't be rotation
    if(i != j) {
        printf("Strings are NOT rotations of each other.\n");
        return 0;
    }

    // Create temp = str1 + str1
    for(k = 0; k < i; k++)
        temp[k] = str1[k];
    for(k = 0; k < i; k++)
        temp[i + k] = str1[k];

    temp[2 * i] = '\0';

    // Check if str2 is a substring of temp
    i = 0;
    while(temp[i] != '\0') {
        k = i;
        j = 0;

        while(temp[k] == str2[j] && str2[j] != '\0') {
            k++;
            j++;
        }
        if(str2[j] == '\0') {
            found = 1;
            break;
        }
        i++;
    }

    if(found)
        printf("Strings ARE rotations of each other.\n");
    else
        printf("Strings are NOT rotations of each other.\n");

    return 0;
}


#include <stdio.h>

int main() {
    char str1[200], str2[200];
    int freq1[256] = {0}, freq2[256] = {0};
    int i = 0, flag = 1;

    printf("Enter first string: ");
    gets(str1);   // or use fgets()

    printf("Enter second string: ");
    gets(str2);

    // Count frequency of characters
    while(str1[i] != '\0') {
        freq1[(unsigned char)str1[i]]++;
        i++;
    }

    i = 0;
    while(str2[i] != '\0') {
        freq2[(unsigned char)str2[i]]++;
        i++;
    }

    // Compare frequency arrays
    for(i = 0; i < 256; i++) {
        if(freq1[i] != freq2[i]) {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are NOT anagrams.\n");

    return 0;
}


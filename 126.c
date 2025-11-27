#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    char ch;

    printf("Enter filename: ");
    scanf("%s", filename);

    // Try opening the file in read mode
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 0;  
    }

    printf("File opened successfully.\n");
    printf("----- File Content -----\n");

    // Read and display content character by character
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[500];

    // Take filename input
    printf("Enter filename: ");
    scanf("%s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file!");
        return 1;
    }

    // Clear input buffer for fgets
    getchar();

    // Take new line of text from user
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append text to file
    fputs(text, fp);

    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}

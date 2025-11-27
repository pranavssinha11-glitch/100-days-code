#include <stdio.h>

int main() {
    char srcFile[100], destFile[100];
    FILE *src, *dest;
    char ch;

    // Take filenames from user
    printf("Enter source filename: ");
    scanf("%s", srcFile);

    printf("Enter destination filename: ");
    scanf("%s", destFile);

    // Open files
    src = fopen(srcFile, "r");
    if (src == NULL) {
        printf("Error: Could not open source file!");
        return 1;
    }

    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Could not create destination file!");
        fclose(src);
        return 1;
    }

    // Copy character by character
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    // Close both files
    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s", destFile);

    return 0;
}

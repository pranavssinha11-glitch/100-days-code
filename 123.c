#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 0;
    int insideWord = 0;

    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open file!");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;  // count characters

        if (ch == '\n')
            lines++;  // count lines

        // Word detection logic
        if (ch != ' ' && ch != '\n' && ch != '\t') {
            if (insideWord == 0) {
                words++;
                insideWord = 1;  // inside a word now
            }
        } else {
            insideWord = 0;  // space or newline ends a word
        }
    }

    
    if (chars > 0 && ch != '\n')
        lines++;

    fclose(fp);

    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}

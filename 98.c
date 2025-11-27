#include <stdio.h>

int main() {
    char name[200];
    int i = 0, start = 0;

    printf("Enter your full name: ");
    gets(name);  // or use fgets(name,200,stdin)

    // Print first initial
    if(name[0] != ' ')
        printf("%c. ", (name[0] >= 'a' && name[0] <= 'z') ? name[0]-32 : name[0]);

    // find initials of middle names (not the last word)
    while(name[i] != '\0') {
        if(name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0') {
            start = i + 1;
            // Check if it's the last word (surname)
            int j = start;
            while(name[j] != ' ' && name[j] != '\0')
                j++;

            if(name[j] == '\0')  // this is surname
                break;

            // print initial
            if(name[start] >= 'a' && name[start] <= 'z')
                printf("%c. ", name[start]-32);
            else
                printf("%c. ", name[start]);
        }
        i++;
    }

    // Print surname in full
    while(name[start] != '\0') {
        if(name[start] >= 'a' && name[start] <= 'z')
            printf("%c", name[start]-32);   // Convert to uppercase
        else
            printf("%c", name[start]);
        start++;
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

// Define enum for gender
enum Gender { MALE, FEMALE, OTHER };

// Define struct for person
struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    char input[10];
    scanf("%s", input);

    struct Person p;

    if (strcmp(input, "MALE") == 0)
        p.gender = MALE;
    else if (strcmp(input, "FEMALE") == 0)
        p.gender = FEMALE;
    else if (strcmp(input, "OTHER") == 0)
        p.gender = OTHER;
    else {
        printf("Invalid gender\n");
        return 0;
    }

    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }

    return 0;
}

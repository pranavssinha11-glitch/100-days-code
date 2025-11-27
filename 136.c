#include <stdio.h>
#include <string.h>

enum Operation { ADD, SUBTRACT, MULTIPLY };

int main() {
    char choice[10];
    int a, b;
    
    // Read input like: ADD 10 20
    scanf("%s %d %d", choice, &a, &b);

    enum Operation op;

    if (strcmp(choice, "ADD") == 0)
        op = ADD;
    else if (strcmp(choice, "SUBTRACT") == 0)
        op = SUBTRACT;
    else if (strcmp(choice, "MULTIPLY") == 0)
        op = MULTIPLY;
    else {
        printf("Invalid operation\n");
        return 0;
    }

    switch (op) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}


#include <stdio.h>

int main() {
    int arr[50], n, i;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Count of Positive elements = %d\n", positive);
    printf("Count of Negative elements = %d\n", negative);
    printf("Count of Zero elements = %d\n", zero);

    return 0;
}


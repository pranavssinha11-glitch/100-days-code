#include <stdio.h>

int main() {
    int arr1[50], arr2[50], arr3[100];
    int n1, n2, n3, i, j;

    // Input size of first array
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    // Input elements of first array
    printf("Enter %d elements of first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    // Input elements of second array
    printf("Enter %d elements of second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge arrays
    n3 = n1 + n2;

    // Copy arr1 into arr3
    for(i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }

   // Copy arr2 into arr3
    for(j = 0; j < n2; j++) {
        arr3[i + j] = arr2[j];
    }

    // Print merged array
    printf("Merged array:\n");
    for(i = 0; i < n3; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}


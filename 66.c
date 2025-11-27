#include <stdio.h>

int main() {
    int arr[100], n, element, i;

    // Input size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input sorted array
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Find the correct position (shifting elements)
    i = n - 1;
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert element at correct position
    arr[i + 1] = element;
    n++;

    // Print updated array
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

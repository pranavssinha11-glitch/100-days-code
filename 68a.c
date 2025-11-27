#include <stdio.h>

int main() {
    int arr[100], n, pos, i;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Position to delete
    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    // Shift elements to delete the element at pos
    for(i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; // Reduce size

    // Display array after deletion
    printf("Array after deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

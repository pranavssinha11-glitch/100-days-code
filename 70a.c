#include <stdio.h>

int main() {
    int arr[100], n, k, i;
    int temp[100];

    // Input size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Number of rotations
    printf("Enter the value of k (number of positions to rotate): ");
    scanf("%d", &k);

    // Handle k greater than n
    k = k % n;

    // Copy last k elements to temp
    for(i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift the remaining elements to the right
    for(i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy temp elements to the start
    for(i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    // Print rotated array
    printf("Array after right rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

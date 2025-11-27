#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int nextGreater = -1;

        // Look for next greater element on the right
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;    // stop at first greater element
            }
        }

        // Output in comma-separated format
        if (i == n - 1)
            printf("%d", nextGreater);
        else
            printf("%d, ", nextGreater);
    }

    return 0;
}

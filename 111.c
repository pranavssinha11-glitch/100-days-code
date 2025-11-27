#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    // For each window of size k
    for (int i = 0; i <= n - k; i++) {
        int found = 0;

        // Check each element inside the window
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }

        // No negative element found
        if (!found) {
            printf("0 ");
        }
    }

    return 0;
}

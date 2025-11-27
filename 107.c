#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int prevGreater = -1;

        // Search to the LEFT of current element
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;   // nearest greater on the left
            }
        }

        // Print in comma-separated fashion
        if (i == n - 1)
            printf("%d", prevGreater);
        else
            printf("%d, ", prevGreater);
    }

    return 0;
}

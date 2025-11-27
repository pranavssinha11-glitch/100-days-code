#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);

    int low = 0, high = n - 1;
    int ans = -1;

    // Binary search for first element >= x
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            ans = mid;      // possible answer
            high = mid - 1; // try to find earlier index
        } else {
            low = mid + 1;
        }
    }

    printf("%d", ans);
    return 0;
}
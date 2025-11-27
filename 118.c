#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int expected_sum = n * (n + 1) / 2;
    int missing = expected_sum - sum;

    printf("%d", missing);

    return 0;
}

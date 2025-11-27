#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], visited[1000] = {0}; // assuming values are less than 1000

    // Input array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find repeated element in one iteration
    for (int i = 0; i < n; i++) {
        if (visited[arr[i]] == 1) {
            printf("%d\n", arr[i]);   // repeated element found
            return 0;
        }
        visited[arr[i]] = 1;          // mark visited
    }

    return 0;
}

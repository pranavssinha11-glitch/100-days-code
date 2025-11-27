#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    int deque[n];   // will store indices
    int front = 0, rear = -1;

    // Process first k elements
    for (int i = 0; i < k; i++) {
        while (rear >= front && arr[deque[rear]] <= arr[i])
            rear--;
        deque[++rear] = i;
    }

    // Process the rest
    for (int i = k; i < n; i++) {
        // Print max of previous window
        printf("%d ", arr[deque[front]]);

        // Remove elements out of this window
        while (rear >= front && deque[front] <= i - k)
            front++;

        // Remove smaller elements
        while (rear >= front && arr[deque[rear]] <= arr[i])
            rear--;

        deque[++rear] = i;
    }

    // Print max of last window
    printf("%d", arr[deque[front]]);

    return 0;
}

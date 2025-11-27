#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);

    int nums[n];
    int maxVal = 0;

    // Input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        if (nums[i] > maxVal) 
            maxVal = nums[i];
    }

    // Target input
    scanf("%d", &target);

    // Hash map using array (size = maxVal + 1)
    int hash[maxVal + 1];
    for (int i = 0; i <= maxVal; i++)
        hash[i] = -1;

    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];

        if (complement >= 0 && complement <= maxVal && hash[complement] != -1) {
            printf("%d %d", hash[complement], i);
            return 0;
        }

        // store the index of nums[i]
        hash[nums[i]] = i;
    }

    // If no solution found
    printf("-1 -1");
    return 0;
}


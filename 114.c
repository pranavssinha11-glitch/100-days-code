#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int n = strlen(s);
    int freq[256] = {0};  // to store character frequency

    int left = 0, right = 0;
    int max_len = 0;

    while (right < n) {
        // Add current character to window
        freq[(unsigned char)s[right]]++;

        // If character repeats, shrink window from left
        while (freq[(unsigned char)s[right]] > 1) {
            freq[(unsigned char)s[left]]--;
            left++;
        }

        // Update maximum window size
        int window_len = right - left + 1;
        if (window_len > max_len)
            max_len = window_len;

        right++;
    }

    printf("%d", max_len);
    return 0;
}

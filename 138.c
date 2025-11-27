#include <stdio.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    // Array of enum names as strings
    const char* names[] = { "RED", "YELLOW", "GREEN" };
    
    // Loop through the enum values
    for (int i = RED; i <= GREEN; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}

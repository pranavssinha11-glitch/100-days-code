#include <stdio.h>

int main() {
    char date[15];
    int day, month, year;

    printf("Enter date in format dd/mm/yyyy: ");
    scanf("%s", date);

    // Extract day, month, year
    sscanf(date, "%d/%d/%d", &day, &month, &year);

    // Month names
    char months[][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    // Print in required format
    printf("%02d-%s-%04d", day, months[month - 1], year);

    return 0;
}

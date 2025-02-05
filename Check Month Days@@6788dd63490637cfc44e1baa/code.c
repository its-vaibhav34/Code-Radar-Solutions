#include <stdio.h>

int main() {
    int month, year, days;

    // Prompt user for input
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    // Check if the input is valid
    if (month < 1 || month > 12) {
        printf("Invalid month number\n");
        return 1;
    }

    // Determine the number of days in the given month
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            // Handle February separately (ask for year to check leap year)
            printf("Enter year: ");
            scanf("%d", &year);
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                days = 29; // Leap year
            else
                days = 28; // Non-leap year
            break;
    }

    // Print the number of days
    printf("Number of days: %d\n", days);

    return 0;
}

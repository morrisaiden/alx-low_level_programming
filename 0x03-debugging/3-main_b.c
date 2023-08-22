#include <stdio.h>
#include "main.h"  // Include necessary header

int main(void) {
    int month = 2;  // February
    int day = 29;
    int year = 2000;

    int dayOfYear = convert_day_and_month_to_day_of_year(month, day, year);
    int daysLeft = day_of_year_remaining(month, day, year);

    printf("Date: %02d/%02d/%04d\n", month, day, year);
    printf("Day of Year: %d\n", dayOfYear);
    printf("Days Left in Year: %d\n", daysLeft);

    return (0);
}

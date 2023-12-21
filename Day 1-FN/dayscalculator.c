#include <stdio.h>

int main() 
{
    int totalDays, years, rem_weeks, rem_days;

    printf("Enter total number of days: ");
    scanf("%d", &totalDays);

    years = totalDays / 365;
    rem_weeks = (totalDays % 365) / 7;
    rem_days = (totalDays % 365) % 7;

    printf("Number of Years: %d\n", years);
    printf("Number of Weeks: %d\n", rem_weeks);
    printf("Number of Days: %d\n", rem_days);

    return 0;
}

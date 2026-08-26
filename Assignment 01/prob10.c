#include <stdio.h>

int main(void) 
{
    int totalDays, years, weeks, days;

    printf("\nEnter total number of days: ");
    scanf("%d", &totalDays);

    years = totalDays / 365;
    totalDays = totalDays % 365;

    weeks = totalDays / 7;
    days = totalDays % 7;

    printf("\nYears = %d\n", years);
    printf("Weeks = %d\n", weeks);
    printf("Days = %d\n\n", days);

    return 0;
}
/*
7. Take days, months, and years of two dates as input. Compute their difference and
   give output. For this, convert the dates into days. Then, subtract to get the difference.
   Then, convert the difference into years, months, and days. Use constants to denote
   12 months in a year and 30 days in a month and use them in the conversion formulas.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int DAYS_IN_MONTH = 30;
    const int MONTHS_IN_YEAR = 12;
    const int DAYS_IN_YEAR = DAYS_IN_MONTH * MONTHS_IN_YEAR;

    int day1, month1, year1;
    int day2, month2, year2;

    int totalDays1, totalDays2, difference;
    int resultYears, resultMonths, resultDays;

    // First date
    printf("Enter 1st date's day: ");
    scanf("%d", &day1);

    printf("Enter 1st date's month: ");
    scanf("%d", &month1);

    printf("Enter 1st date's year: ");
    scanf("%d", &year1);

    // Second date
    printf("Enter 2nd date's day: ");
    scanf("%d", &day2);

    printf("Enter 2nd date's month: ");
    scanf("%d", &month2);

    printf("Enter 2nd date's year: ");
    scanf("%d", &year2);

    // Convert both dates into days
    totalDays1 = year1 * DAYS_IN_YEAR
               + month1 * DAYS_IN_MONTH
               + day1;

    totalDays2 = year2 * DAYS_IN_YEAR
               + month2 * DAYS_IN_MONTH
               + day2;

    // Find the difference
    difference = abs(totalDays1 - totalDays2);

    // Convert difference into years, months, and days
    resultYears = difference / DAYS_IN_YEAR;
    difference %= DAYS_IN_YEAR;

    resultMonths = difference / DAYS_IN_MONTH;
    resultDays = difference % DAYS_IN_MONTH;

    printf("Difference: %d years %d months %d days\n",
           resultYears, resultMonths, resultDays);

    return 0;
}

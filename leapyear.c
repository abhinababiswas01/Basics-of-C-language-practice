#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    int is_leap_year = (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));

    switch (is_leap_year)
    {
    case 1:
        printf("%d is leap year", year);
        break;
    case 0:
        printf("%d is not leap year", year);
        break;
    default:
        printf("This input is invalid");
        break;
    }

    return 0;
}
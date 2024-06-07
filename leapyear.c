#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int year;
    printf("Enter the year to check: ");
    scanf("%d", &year);

    int is_leapyear = (year%400 == 0) || (year %4 == 0) && (year % 100 != 0);

    switch (is_leapyear)
    {
    case 1:
        printf("%d is the leap year", year);
        break;
    
    case 0:
        printf("%d is not the leap year", year);
        break;

    default:
        break;
    }
    return 0;
}

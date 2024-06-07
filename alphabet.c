#include<stdio.h>

int main()

{
    char c;

    printf("Enter the lowercase : ");
    scanf("%c", & c);

    c=c-32;

    printf("The uppercase of given character is: %c", c);

    return 0;
}


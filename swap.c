#include<stdio.h>

int main()
{

    int a,b;

    printf("Enter first number a ");
    scanf("%d",&a);
    printf("Enter second number b ");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swap the numbers are a=%d b=%d",a,b);


    return 0;
}
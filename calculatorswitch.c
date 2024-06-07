#include<stdio.h>

int main()

{
    char operator;
    double n1,n2;

    printf("Enter the operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter the operands: \n");
    scanf("%lf %lf", &n1, &n2);

    switch (operator)
    {
    case '+':
        printf("The addition of two numbers is %.1lf & %.1lf is = %.1lf", n1, n2, n1+n2);
        break;
    case '-':
        printf("The substraction of two numbers is %.1lf & %.1lf is = %.1lf", n1, n2, n1-n2);
        break;
    case '*':
        printf("The multiplication of two numbers is %.1lf & %.1lf is = %.1lf", n1, n2, n1*n2);
        break;
    case '/':
        printf("The division of two numbers is %.1lf & %.1lf is = %.1lf", n1, n2, n1/n2);
        break;
    // case '%':
    //     printf("The modulo of two numbers %.1lf & %.1lf is = %.1lf", n1, n2, n1%n2);
    //     break;
    default:
        printf("The input is wrong");
        break;
    }
}
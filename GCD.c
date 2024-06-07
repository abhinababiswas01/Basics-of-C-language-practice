#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num1, num2, GCD_num;

    printf("Enter the first number: ");
    scanf("%d", &num1); 
    printf("Enter the second number: ");
    scanf("%d", &num2);

    for (int i = 1; i <= num1 && i <= num2; i++)
    {

        if (num1 % i == 0 && num2 % i == 0)
            GCD_num = i;
    }
    printf("The GCD of the two number is %d", GCD_num);
    return 0;
}

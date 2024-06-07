#include<stdio.h>

float avg(float num1, float num2, float num3, float num4, float num5)
{
    float avg;
    avg=(num1+num2+num3+num4+num5)/5;
    return (avg);
}
int main(int argc, char const *argv[])
{
    float num1,num2,num3,num4,num5,avg_cal;

    printf("Enter the 5 numbers \n");
    scanf("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);

    avg_cal=avg(num1,num2,num3,num4,num5);
    printf("\nThe average of the numbers is %f", avg_cal);

    return 0;
}

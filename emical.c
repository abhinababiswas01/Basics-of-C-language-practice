#include <stdio.h>
#include <math.h>


float emi_cal(float p, float r, float t)
{
    float emi;
 
    r = r / (12 * 100); 
    t = t * 12; 
    emi = (p * r * pow(1 + r, t)) / (pow(1 + r, t) - 1);
 
    return (emi);
}
 

int main()
{
    float principal, rate, time, emi;
    printf("Enter the amount of Personal Loan \n");
    scanf("%f", &principal);
    rate = 15;
    time = 10;
    emi = emi_cal(principal, rate, time);
    printf("monthly emi is= %f\n", emi);
 
    return 0;
}
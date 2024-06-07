#include<stdio.h>

int main()

{
    int basic,da,hra,gross;

    printf("Enter the basic salary of the Employee \n");
    scanf("%d", &basic);
    da=(basic*20)/100;
    hra=(basic*10)/100;
    gross=basic+da+hra;
    printf("The gross salary of the employee is %d ",gross);
    return 0;
}
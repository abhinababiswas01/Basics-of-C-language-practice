#include<stdio.h>

int main()
{
    int paisa,rupee;

    printf("Enter the amount in paisa \n");
    scanf("%d", &paisa);
    rupee=paisa/100;
    paisa=paisa-(rupee*100);

    printf("The amount is %d Rupee %d Paisa ",rupee,paisa);

    return 0;

}
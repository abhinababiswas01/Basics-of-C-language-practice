#include<stdio.h>
#include<math.h>


int main(int argc, char const *argv[])
{
    int num1,num2,GCD_num,i,LCM;

    printf("Enter first number \n");
    scanf("%d", &num1);
    printf("enter second number \n");
    scanf("%d", &num2);

    for(i=1; i<=num1 && i<=num2;i++){
        if (num1%i==0 && num2%i==0)
        GCD_num=i;
    }

    LCM=(num1*num2)/GCD_num;
    printf("The LCM of those numbers is %d ", LCM);

    return 0;
}
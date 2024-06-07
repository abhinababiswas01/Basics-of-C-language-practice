#include<stdio.h>


int main()
{
    int num,rem,reverse=0;

    printf("Enter the integer \n");
    scanf("%d", &num);

    while(num!=0){
        rem=num%10;
        reverse=reverse*10+rem;
        num/=10;


    }
    printf("The reverse of the number is %d ",reverse);
    return 0;
}

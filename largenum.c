#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter the first number \n");
    scanf("%d", &a);
    printf("Enter the second number \n");
    scanf("%d", &b);
    printf("Enter the third number \n");
    scanf("%d", &c);

    if(a>b && a>c){
        printf("First number is the largest number");
    }
    else if (b>a && b>c){
        printf("Second number is the largest number");
    }
    else{
        printf("Third number is the largest number");
    }
    return 0;

}
#include<stdio.h>

int main()
{
    int num1, num2;

    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);

    printf("The numbers are before swapping: \n");
    printf("%d \n", num1);
    printf("%d \n", num2);

    swap(&num1, &num2);

    printf("The numbers are after swapping: \n");
    printf("%d \n", num1);
    printf("%d \n", num2);



    return 0;
}

void swap(int *num1, int *num2){
    int num = *num1;
    *num1 = *num2;
    *num2 = num;
}
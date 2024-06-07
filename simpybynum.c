#include<stdio.h>
int main()
{
    int py;
    printf("Enter the value for number of lines for the pyramid: ");
    scanf("%d", &py);

    for (int i = 1; i <= py; i++)
    {
        for (int j = 1; j<= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    

    return 0;
}
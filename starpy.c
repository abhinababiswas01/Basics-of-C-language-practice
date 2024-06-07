#include<stdio.h>
int main()
{
    int i,j,k, py;

    printf("Enter the row for py: ");
    scanf("%d", &py);

    for ( i = 1; i<= py ; i++)
    {
        for ( j = py; j > i; j--)
        {
            printf(" ");
        }
        for ( k = 1; k <= i; k++)
        {
            printf(" *");
        }
        
        printf("\n");
    }
    

    return 0;
}
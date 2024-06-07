#include<stdio.h>

int fact(int number)
{
    int i;
    for ( i = 2; i <= number; i++)
    {
        if (number % i == 0)
            continue;
        else
            return 1;
        
    }
    
}
int main()
{
    int number,res=0;
    printf("Enter the number : ");
    scanf("%d", &number);

    res=fact(number);

    if (res == 0)
    {
        printf("Prime");

    }
    else  
    {  
        printf("Not primme");
    
    }
    return 0;
}
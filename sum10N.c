#include<stdio.h>

int main(int argc, char const *argv[])
{
    int sum = 0;
    // Sum of 10 NAtural numbers

    for (int i = 1; i <= 10; i++)
    {
        sum+=i;
    }

    printf("%d is the first 10 natural number's sum", sum);

    
    return 0;
}

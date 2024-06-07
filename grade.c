#include<stdio.h>

int main()

{
    int num;
    float verf_num,percentage;
    printf("Enter the marks student got (within 500 marks) : ");
    scanf("%d", &num);
    printf("Enter the marks for verification:  ");
    scanf("%f", &verf_num);

    percentage=(verf_num/500)*100;


    if(num>500)
    {
        printf("You are a cheater");
    }
    else{
        switch(num/50)
        {
            case 10:
            case 9:
                printf("The studnet got 'O' grade");
                printf("\n %.1f is the percentage of the student", percentage);
                break;
            case 8:
                printf("The studnet got 'E' grade");
                printf("\n %.1f is the percentage of the student", percentage);
                break;
            case 7:
                printf("The student got 'A' grade");
                printf("\n %.1f is the percentage of the student", percentage);
                break;
            case 6:
                printf("The student got 'B' grade");
                printf("\n %.1f is the percentage of the student", percentage);
                break;
            case 5:
                printf("The student got 'C' grade");
                printf("\n %.1f is the percentage of the student", percentage);
                break;
            case 4:
                printf("The student got 'D' grade");
                printf("\n %.1f is the percentage of the student", percentage);
                break;
            
            default:
                printf("You are fail");
                printf("\n %.1f is the percentage of the student", percentage);
                break;
        }
    }

    return 0;
}
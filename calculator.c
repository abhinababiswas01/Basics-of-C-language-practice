#include<stdio.h>

int main()
{
	int num1,num2,cal;
	
	printf("Enter two numbers \n");
	scanf("%d %d", &num1, &num2);

    printf("Select which calculation you need : 1 Addition, 2 Subtraction, 3 Multiplication, 4 Division \n");
	scanf("%d", &cal);

	if(cal==1){
		printf("The sum of the numbers is %d",num1+num2);
	}
	if(cal==2){
		printf("The subtraction of the numbers is %d",num1-num2);
	}if(cal==3){
		printf("The Multiplicaton of the numbers is %d",num1*num2);
	}if(cal==4){
		printf("The Division of the numbers is %d",num1/num2);
	}

	return 0;
}

#include<stdio.h>
//with return type without argument
float div();//function declaration
int main()
{
	printf("\nThe division is = %.2f",div());//function calling
	return 0;
}
float div()
{
	int num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num2);
	return (float)num1/(float)num2;
}//function definition

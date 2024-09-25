#include<stdio.h>
//without return type without argument
void sub();//function declaration
int main()
{
	sub();//function calling
	return 0;
}
void sub()
{
	int num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	printf("\nThe subtraction of %d and %d is %d",num1,num2,num1-num2);
}//function definition

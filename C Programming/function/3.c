#include<stdio.h>
//without return type with argument
void mul(int a,int b);//function declaration
int main()
{
	int num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	
	mul(num1,num2);//function calling
	return 0;
}
void mul(int a,int b)
{
	int ans = a * b;
	printf("\nThe multiplication of %d and %d is = %d",a,b,ans);
}//function definition

//Write a c program to take a number from the user and display it's factorial.
#include<stdio.h>
int main()
{
	int num,fact=1,i;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	
	for(i=num;i>=1;i--)
	{
		fact = fact * i;
	}
	printf("\nFactorial of %d is %d",num,fact);
	return 0;
}
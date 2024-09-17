//Write a c program to take one input from the user and check whether the number is pallindrome or not?
#include<stdio.h>
int main()
{
	int num,rem,rev=0;
	printf("\nEnter the value of num = ");
	scanf("%d",&num);
	int temp = num;
	
	while(num!=0)
	{
		rem = num%10;
		rev = (rev*10) + rem;
		num = num/10;
	}
	 
	printf("\nOriginal number = %d",temp);
	printf("\nReverse number = %d",rev);
	 
	if(rev==temp)
	{
		printf("\n%d is a pallindrome number",temp);
	}
	else
	{
		printf("\n%d is not a pallindrome number",temp);
	}
	
	return 0;
}

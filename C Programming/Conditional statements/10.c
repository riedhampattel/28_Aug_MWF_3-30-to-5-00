#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter the character = ");
	scanf(" %c",&ch);
	
	if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
	{
		printf("\nYou have entered an alphabet");
	}
	else if(ch>=48 && ch<=57)
	{
		printf("\nYou have entered a number");
	}
	else
	{
		printf("\nYou have entered a special character");
	}
	
	return 0;
}

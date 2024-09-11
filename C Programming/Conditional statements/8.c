#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter the alphabet = ");
	scanf(" %c",&ch);
	
	if(ch>=65 && ch<=90)
	{
		printf("\n%c is a capital case",ch);
	}
	else if(ch>=97 && ch<=122)
	{
		printf("\n%c is a lower case",ch);
	}
	else
	{
		printf("\nPlease enter alphabets only!");
	}
	
	return 0;
}

#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter the alphabet = ");
	scanf(" %c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("\n%c is a capital case",ch);
	}
	else if(ch>='a' && ch<='z')
	{
		printf("\n%c is a lower case",ch);
	}
	else
	{
		printf("\nPlease enter alphabets only!");
	}
	
	return 0;
}

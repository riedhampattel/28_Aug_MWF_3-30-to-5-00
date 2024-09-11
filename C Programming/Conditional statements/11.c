#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter the character = ");
	scanf(" %c",&ch);
	
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	{
		printf("\nYou have entered an alphabet");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("\nYou have entered a number");
	}
	else
	{
		printf("\nYou have entered a special character");
	}
	
	return 0;
}

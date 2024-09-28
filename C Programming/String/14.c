#include<stdio.h>
void reverse(char str[])
{
	int len = 0,i;
	char rev[100];
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	for(i=0;str[i]!='\0';i++)
	{
		rev[i] = str[len-1];
		len--;
	}
	printf("\nReversed string = ");
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",rev[i]);
	}
}
int main()
{
	char str[100];
	printf("\nEnter the string = ");
	gets(str);
	printf("\nOriginal string = %s",str);
	
	reverse(str);
	return 0;
}

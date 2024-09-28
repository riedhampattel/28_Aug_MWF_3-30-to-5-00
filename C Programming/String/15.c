#include<stdio.h>
void copy(char str2[],char str1[])
{
	int i;
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i] = str1[i]; 
	}
	printf("\nValue of str1 after copy = ");
	for(i=0;str1[i]!='\0';i++)
	{
		printf("%c",str1[i]);
	}
	printf("\nValue of str2 after copy = ");
	for(i=0;str1[i]!='\0';i++)
	{
		printf("%c",str2[i]);
	}
}
int main()
{
	char str1[100],str2[100];
	printf("\nEnter the string = ");
	gets(str1);
	printf("\nValue of str1 before copy = %s",str1);
	printf("\nValue of str2 before copy = %s",str2);
	copy(str2,str1);
	return 0;
}

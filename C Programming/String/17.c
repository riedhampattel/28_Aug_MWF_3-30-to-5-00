#include<stdio.h>
void concat(char str1[],char str2[])
{
	int i,len=0;
	char str3[200];
	for(i=0;str1[i]!='\0';i++)
	{
		str3[i] = str1[i];
		len++;
	}
	for(i=0;str2[i]!='\0';i++)
	{
		str3[len] = str2[i];
		len++;
	}
	printf("\nConcated string = %s",str3);
}
int main()
{
	char str1[100],str2[100];
	printf("\nEnter the str1 = ");
	gets(str1);
	printf("\nEnter the str2 = ");
	gets(str2);
	printf("\nValue of str1 = %s",str1);
	printf("\nValue of str2 = %s",str2);
	concat(str1,str2);
	return 0;
}

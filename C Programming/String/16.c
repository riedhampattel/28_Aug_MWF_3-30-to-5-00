#include<stdio.h>
int compare(char str1[],char str2[])
{
	int i,count=0;
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]!=str2[i])
		{
			count++;
		}
	}
	if(count==0)
	{
		return 0;
	}
	else
	{
		return -4;
	}
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
	
	int result = compare(str1,str2);
	if(result==0)
	{
		printf("\nBoth strings are equal");
	}
	else
	{
		printf("\nBoth strings are not equal");
	}
	return 0;
}

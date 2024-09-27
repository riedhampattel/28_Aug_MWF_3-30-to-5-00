#include<stdio.h>
int main()
{
	int i;
	char str[100]="Hello World! How are you? I am fine";
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",str[i]);
	}
	return 0;
}

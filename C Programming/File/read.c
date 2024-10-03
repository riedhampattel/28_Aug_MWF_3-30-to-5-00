#include<stdio.h>
int main()
{
	FILE *fp1;
	char text[100];
	fp1 = fopen("second.txt","r");
	while(fgets(text,100,fp1))
	{
		printf("%s",text);	
	}
	return 0;
}

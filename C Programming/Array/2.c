#include<stdio.h>
int main()
{
	int a[5] = {101,102,103,104,105},i;
	float f[5] = {45.25,78.96};
	char ch[5] = {'A','B','C','D','E'};
	
	printf("\nArray a = ");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\nArray f = ");
	for(i=0;i<5;i++)
	{
		printf("%.2f ",f[i]);
	}
	
	printf("\nArray ch = ");
	for(i=0;i<5;i++)
	{
		printf("%c ",ch[i]);
	}
	return 0;
}

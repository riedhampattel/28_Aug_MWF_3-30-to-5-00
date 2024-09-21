#include<stdio.h>
int main()
{
	int a[5] = {101,102,103,104,105};
	float f[5] = {45.25,78.96};
	char ch[5] = {'A','B','C','D','E'};
	
	printf("\nArray a = ");
	printf("%d ",a[0]);
	printf("%d ",a[1]);
	printf("%d ",a[2]);
	printf("%d ",a[3]);
	printf("%d ",a[4]);
	
	printf("\nArray f = ");
	printf("%.2f ",f[0]);
	printf("%.2f ",f[1]);
	
	printf("\nArray ch = ");
	printf("%c ",ch[0]);
	printf("%c ",ch[1]);
	printf("%c ",ch[2]);
	printf("%c ",ch[3]);
	printf("%c ",ch[4]);
	return 0;
}

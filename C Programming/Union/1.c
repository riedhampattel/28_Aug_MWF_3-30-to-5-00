#include<stdio.h>
union Demo
{
	int x;
	char y;
};
int main()
{
	union Demo d1;
	d1.x = 70;
	d1.y = 'D';
	printf("\nValue of x = %d",d1.x);
	printf("\nValue of y = %c",d1.y);
	return 0;
}

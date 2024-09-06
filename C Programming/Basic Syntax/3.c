#include<stdio.h>
int main()
{
	int n1,n2,n3;
	float f1,f2,f3;
	char ch1,ch2,ch3;
	
	printf("\nEnter the value of n1 = ");
	scanf("%d",&n1);
	printf("\nEnter the value of n2 = ");
	scanf("%d",&n2);
	printf("\nEnter the value of n3 = ");
	scanf("%d",&n3);
	
	printf("\nValue of n1 = %d",n1);
	printf("\nValue of n2 = %d",n2);
	printf("\nValue of n3 = %d",n3);
	
	printf("\nEnter the value of ch1 = ");
	scanf(" %c",&ch1);
	printf("\nEnter the value of ch2 = ");
	scanf(" %c",&ch2);
	printf("\nEnter the value of ch3 = ");
	scanf(" %c",&ch3);
	
	printf("\nValue of ch1 = %c",ch1);
	printf("\nValue of ch2 = %c",ch2);
	printf("\nValue of ch3 = %c",ch3);
	
	printf("\nEnter the value of f1 = ");
	scanf("%f",&f1);
	printf("\nEnter the value of f2 = ");
	scanf("%f",&f2);
	printf("\nEnter the value of f3 = ");
	scanf("%f",&f3);
	
	printf("\nValue of f1 = %.2f",f1);
	printf("\nValue of f1 = %.3f",f2);
	printf("\nValue of f1 = %.4f",f3);
	
	return 0;
}

#include<stdio.h>
struct Student
{
	int roll;
	float percentage;
	char grade;
};
int main()
{
	struct Student s1,s2;
	
	printf("\nEnter the roll no. = ");
	scanf("%d",&s1.roll);
	printf("\nEnter the percentage = ");
	scanf("%f",&s1.percentage);
	printf("\nEnter the grade = ");
	scanf(" %c",&s1.grade);
	
	printf("\nEnter the roll no. = ");
	scanf("%d",&s2.roll);
	printf("\nEnter the percentage = ");
	scanf("%f",&s2.percentage);
	printf("\nEnter the grade = ");
	scanf(" %c",&s2.grade);
	
	printf("\nStudent 1 details := ");
	printf("\nRoll no. = %d",s1.roll);
	printf("\nPercentage = %.2f",s1.percentage);
	printf("\nGrade = %c",s1.grade);
	
	printf("\nStudent 2 details := ");
	printf("\nRoll no. = %d",s2.roll);
	printf("\nPercentage = %.2f",s2.percentage);
	printf("\nGrade = %c",s2.grade);
	
	return 0;
}

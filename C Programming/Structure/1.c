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
	s1.roll=101;
	s1.percentage=45.26;
	s1.grade='C';
	
	s2.roll=102;
	s2.percentage=85.65;
	s2.grade='B';
	
	printf("\nStudent 2 details := ");
	printf("\nRoll no. = %d",s2.roll);
	printf("\nPercentage = %.2f",s2.percentage);
	printf("\nGrade = %c",s2.grade);
	
	return 0;
}

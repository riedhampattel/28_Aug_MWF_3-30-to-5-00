#include<iostream>
using namespace std;
//shallow copy
class Student
{
	public :
		string name;
		double *cgpaptr;
		Student(string name,double cgpa)
		{
			this->name = name;
			cgpaptr = new double;
			*cgpaptr = cgpa;
		}
		Student(Student &obj)
		{
			name = obj.name;
			cgpaptr = obj.cgpaptr;
		}
		void display()
		{
			cout<<"\nName = "<<name;
			cout<<"\nCGPA = "<<*cgpaptr<<endl;
		}
};
int main()
{
	Student s1("Ajay",8.6);
	s1.display();
	Student s2("Samir",7.8);
	s2.display();
	
	Student s3(s1);
	Student s4(s2);
	
	s3.display();
	s4.display();
	
	*s4.cgpaptr = 9.2;
	
	s2.display();
	s4.display();
	return 0;
}

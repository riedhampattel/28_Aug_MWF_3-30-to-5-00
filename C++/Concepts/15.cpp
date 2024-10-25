#include<iostream>
using namespace std;
//aggregation
class Student
{
	public :
		int id;
		string name;
		int maths;
		int english;
		Student(int id,string name,int maths,int english)
		{
			this->id = id;
			this->name = name;
			this->maths = maths;
			this->english = english;
		}
		void grade()
		{
			if(maths+english>150)
			{
				cout<<"\nGrade = A";
			}
			else
			{
				cout<<"\nGrade = B";
			}
		}
};
class Address
{
	private :
		string city;
		Student *obj;
	public :
		Address(string city,Student *obj)
		{
			this->city = city;
			this->obj = obj;
		}
		void display()
		{
			cout<<"\nid = "<<obj->id;
			cout<<"\nName = "<<obj->name;
			cout<<"\nCity = "<<city;
		}
};
int main()
{
	Student s1(101,"Rahul",75,68);
	Address a1("Ahmedabad",&s1);
	Student s2(102,"Rohan",85,68);
	Address a2("Gandhinagar",&s2);
	
	a1.display();
	a2.display();
	return 0;
}

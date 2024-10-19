#include<iostream>
using namespace std;
class Demo
{
	private :
		int id;
		string name;
		char grade;
	public :
		void set(int id,string name,char grade)
		{
			this->id = id;
			this->name = name;
			this->grade = grade; 
		}
		void display()
		{
			cout<<"\nStudent's id = "<<id;
			cout<<"\nStudent's name = "<<name;
			cout<<"\nStudent's grade = "<<grade;
		}
};
int main()
{
	Demo d1;
	d1.set(101,"Rahul",'A');
	d1.display();
	return 0;
}

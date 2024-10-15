//Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.
#include<iostream>
using namespace std;
class Person
{
	private :
		string name;
		int age;
		string country;
	public :
		void set(string n,int a,string c)
		{
			name = n;
			age = a;
			country = c;
		}
		void get()
		{
			cout<<"\nName := "<<name;
			cout<<"\nAge := "<<age;
			cout<<"\nCountry := "<<country;
		}
};
int main()
{
	Person p1,p2;
	p1.set("Rahul",25,"India");
	p1.get(); 
	
	p2.set("Abdul",15,"Bangladesh");
	p2.get();
	return 0;
}

#include<iostream>
using namespace std;
//function overriding
class Parent
{
	public :
		void display()
		{
			cout<<"\nHello from the Parent class";
		}
};
class Child : public Parent
{
	public :
		void display()
		{
			cout<<"\nHello from the child class";
		}
};
class GrandChild : public Child
{
	public :
		void display()
		{
			cout<<"\nHello from the Grand Child class";
		}
};
int main()
{
	Parent p;
	Child c;
	GrandChild gc;
	p.display();
	c.display();
	gc.display();
	return 0;
}

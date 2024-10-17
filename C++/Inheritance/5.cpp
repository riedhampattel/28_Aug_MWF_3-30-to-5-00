#include<iostream>
using namespace std;
class Parent
{
	public :
		void display()
		{
			cout<<"\nHello from Parent class";
		}
};
class Child1 : public Parent
{
	public :
		void print1()
		{
			cout<<"\nHello from Child1 class";
		}
};
class GrandChild1 : public Child1
{
	
};
class Child2 : public Parent
{
	public :
		void print2()
		{
			cout<<"\nHello from Child2 class";
		}
};
class GrandChild2 : public Child2
{
	
};
int main()
{
	GrandChild1 gc1;
	GrandChild2 gc2;
	Child1 c1;
	Child2 c2;
	
	gc1.display();
	gc2.display();
	gc1.print1();
	gc2.print2();
	return 0;
}

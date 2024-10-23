#include<iostream>
using namespace std;
class Parent
{
	public :
		Parent()
		{
			cout<<"\nHello from Parent class constructor";
		}
		void parent()
		{
			cout<<"\nParent class property used";
		}
};
class Child1 : virtual public Parent
{
	public :
		Child1()
		{
			cout<<"\nHello from Child1 class constructor";
		}
};
class Child2 : virtual public Parent
{
	public :
		Child2()
		{
			cout<<"\nHello from Child2 class constructor";
		}
};
class GrandChild : public Child1,public Child2
{
	public :
		GrandChild()
		{
			cout<<"\nHello from GrandChild class constructor";
		}
};
int main()
{
	GrandChild gc;
	gc.parent();
	return 0;
}

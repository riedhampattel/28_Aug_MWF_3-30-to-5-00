#include<iostream>
using namespace std;
//hierarchical inheritance
class Parent
{
	public :
		void display()
		{
			cout<<"\nThis function is inside Parent class";
		}
};
class Child1 : public Parent
{
	
};
class Child2 : public Parent
{
	
};
int main()
{
	Child1 c1;
	Child2 c2;
	c1.display();
	c2.display();	
	return 0;
}

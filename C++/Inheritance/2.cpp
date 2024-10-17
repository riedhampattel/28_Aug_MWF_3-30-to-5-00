#include<iostream>
using namespace std;
class Parent
{
	public :
		void display()
		{
			cout<<"\nThis function is inside Parent class";
		}
};
class Child : public Parent
{
	
};
class GrandChild : public Child
{
	
};
int main()
{
	GrandChild gc;
	gc.display();
	return 0;
}

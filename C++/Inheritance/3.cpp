#include<iostream>
using namespace std;
class Father
{
	public :
		void display()
		{
			cout<<"\nThis function is inside father class";
		}
};
class Mother
{
	public :
		void print()
		{
			cout<<"\nThis function is inside mother class";
		}
};
class Child : public Father,public Mother
{
};
int main()
{
	Child c1;
	c1.display();
	c1.print();
	return 0;
}

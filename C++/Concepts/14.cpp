#include<iostream>
using namespace std;
class Shape//abstract class
{
	public :
		virtual void display() = 0;//pure virtual function
};
class Circle : public Shape
{
	public : 
		void display()
		{
			cout<<"\nThis is circle";
		}
};
class Square : public Shape
{
	public :
		void display()
		{
			cout<<"\nThis is square";
		}
};
int main()
{
	Shape *s1;
	Circle c1;
	Square sq;
	s1 = &c1;
	s1->display();
	s1 = &sq;
	s1->display();
	return 0;
}

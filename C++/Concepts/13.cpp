#include<iostream>
using namespace std;
class Shape//abstract class
{
	public :
		virtual void display()
		{
			cout<<"\nThis is a shape";
		}
};
class Circle : public Shape //derived class
{
	public :
		void display()
		{
			cout<<"\nThis is a circle";
		}
};
class Square : public Shape //derived class
{
	public :
		void display(int x)
		{
			cout<<"\nValue of x = "<<x;
		}
};
int main()
{
	Circle c1;
	c1.display();
	Square s1;
	s1.display(5);
	return 0;
}

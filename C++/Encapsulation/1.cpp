//Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.
#include<iostream>
using namespace std;
class Circle
{
	private :
		double radius;
	public :
		void set()
		{
			cout<<"\nEnter the value of radius = ";
			cin>>radius;
		}
		void area()
		{
			double area = 3.14*(radius*radius);
			cout<<"\nThe area of a circle is = "<<area;
		}
		int circumference()
		{
			double cfr = 2*(3.14*radius);
			return cfr; 
		}
};
int main()
{
	Circle c1;
	c1.set();
	c1.area();
	cout<<"\nCircumference of a circle is = "<<c1.circumference();
	
	Circle c2;
	c2.set();
	c2.area();
	cout<<"\nCircumference of a circle is = "<<c2.circumference();
	return 0;
}

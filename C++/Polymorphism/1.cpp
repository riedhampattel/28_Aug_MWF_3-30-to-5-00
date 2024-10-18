#include<iostream>
using namespace std;
class Shape
{
	//square,rectangle,triangle,cuboid,circle
	public :
		Shape(double r)
		{
			cout<<"\nThe area of a circle is = "<<3.14*(r*r);
		}
		Shape(int l,int b)
		{
			cout<<"\nThe area of rectangle is = "<<l*b;
		}
		Shape(int b,double h)
		{
			cout<<"\nThe area of triangle is = "<<0.5*(b*h);
		}
		Shape(int l,int b, int h)
		{
			cout<<"\nThe volume of cuboid is = "<<l*b*h;
		}
		Shape(int side)
		{
			cout<<"\nThe area of square is = "<<side*side;
		}
};
int main()
{	
	Shape s1(4);
	Shape s2(4,5);
	Shape s3(7,8.5);
	Shape s4(4,3,2);
	Shape s5(5.0);
	return 0;
}

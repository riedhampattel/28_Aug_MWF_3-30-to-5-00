#include<iostream>
using namespace std;
class Shape
{
	//square,rectangle,triangle,cuboid,circle
	public :
		void shape(double r)
		{
			cout<<"\nThe area of a circle is = "<<3.14*(r*r);
		}
		void shape(int l,int b)
		{
			cout<<"\nThe area of rectangle is = "<<l*b;
		}
		void shape(int b,double h)
		{
			cout<<"\nThe area of triangle is = "<<0.5*(b*h);
		}
		void shape(int l,int b, int h)
		{
			cout<<"\nThe volume of cuboid is = "<<l*b*h;
		}
		void shape(int side)
		{
			cout<<"\nThe area of square is = "<<side*side;
		}
};
int main()
{	
	Shape s1;
	s1.shape(4);
	s1.shape(4,5);
	s1.shape(4,5,2);
	s1.shape(5.8);
	s1.shape(4,5.5);
	return 0;
}

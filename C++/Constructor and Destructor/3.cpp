#include<iostream>
using namespace std;
class Demo
{
	public :
		int x;
		Demo()
		{
			
		}
		Demo(Demo &obj)
		{
			cout<<"\nCopy constructor called";
			x = obj.x;
		}
};
int main()
{
	Demo d1;
	d1.x = 10;
	Demo d2;
	d2.x = 20;
	Demo d3=d1;
	Demo d4(d2);
	
	cout<<"\nValue carried by d1 object = "<<d1.x;
	cout<<"\nValue carried by d2 object = "<<d2.x;
	cout<<"\nValue carried by d3 object = "<<d3.x;
	cout<<"\nValue carried by d4 object = "<<d4.x;
	
	return 0;
}

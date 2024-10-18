#include<iostream>
using namespace std;
class Demo
{
	public :
		int x;
		int y;
		Demo()
		{
			x=0;
			y=0;	
		}
		Demo(int n1,int n2)
		{
			x = n1;
			y = n2;
		}
		Demo operator&(Demo obj)
		{
			Demo temp;
			temp.x = x + obj.x;
			temp.y = y + obj.y;
			return temp;
		}
};
int main()
{
	int x = 10;
	int y = 20;
	int z = x + y;
	cout<<"\nThe value of z = "<<z;
	
	Demo d1;
	d1.x=10;
	d1.y=20;
	
	Demo d2(30,40);
	
	Demo d3;
	d3 = d1 & d2;
	cout<<"\nThe value of x = "<<d3.x;//40
	cout<<"\nThe value of y = "<<d3.y;//60
	return 0;
}

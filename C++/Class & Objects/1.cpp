#include<iostream>
using namespace std;

class Demo
{
	public :
		int x = 10;
		char y = 'A';
		string str = "TOPS";
};
int main()
{
	Demo d1;
	cout<<"\nValue of x = "<<d1.x;
	cout<<"\nValue of y = "<<d1.y;
	cout<<"\nValue of str = "<<d1.str;
	return 0;
}

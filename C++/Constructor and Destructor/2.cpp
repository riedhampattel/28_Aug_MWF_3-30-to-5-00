#include<iostream>
using namespace std;
class Demo
{
	private :
		string s;
	public :
		Demo()
		{
			cout<<"\nDefault constructor called";
		}
		Demo(string str)
		{
			cout<<"\nParameterized constructor called";
			s = str;	
		}
		void display()
		{
			cout<<"\nValue of s = "<<s;
		}
};
int main()
{
	Demo d1("Hello");
	d1.display();
	Demo d2("World");
	d2.display();
	Demo d3;
	return 0;
}

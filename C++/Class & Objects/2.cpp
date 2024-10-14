#include<iostream>
using namespace std;

class Demo
{
	private :
		int x = 10;
		char y = 'A';
		string str = "TOPS";
	public :
		void display()
		{
			cout<<"\nValue of x = "<<x;
			cout<<"\nValue of y = "<<y;
			cout<<"\nValue of str = "<<str;
		}
};
int main()
{
	Demo d1;
	d1.display();
	return 0;
}

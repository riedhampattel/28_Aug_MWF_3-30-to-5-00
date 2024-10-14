#include<iostream>
using namespace std;

class Demo
{
	private :
		int x = 10;
		char y = 'A';
		string str = "TOPS";
	public :
		int integer()
		{
			return x;
		}
};
int main()
{
	Demo d1;
	cout<<"The value of x = "<<d1.integer();
	return 0;
}

#include<iostream>
using namespace std;
class Demo
{
	public :
		Demo()
		{
			cout<<"\nConstructor called";	
		}
		~Demo()
		{
			cout<<"\nDestructor called";
		}
};
int main()
{
	Demo d1;
	cout<<"\nIf starts";
	if(1)
	{
		Demo d2;
	}
	cout<<"\nIf ends";
	return 0;
}

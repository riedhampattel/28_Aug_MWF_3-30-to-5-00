#include<iostream>
using namespace std;

class Demo
{
	private :
		int x = 10;
		char y = 'A';
		string str = "TOPS";
	public :
		void update(char a)
		{
			y = a;
		}
		void display()
		{
			cout<<"\nValue of y = "<<y;
		}
};
int main()
{
	Demo d1;
	d1.update('Z');
	d1.display();
	return 0;
}

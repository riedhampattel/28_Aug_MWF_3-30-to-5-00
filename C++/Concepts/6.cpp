#include<iostream>
using namespace std;
class Print
{
	public :
		void display();
};
void Print :: display()
{
	cout<<"Scope resolution operator";
}
int main()
{
	Print p1;
	p1.display();
	return 0;
}

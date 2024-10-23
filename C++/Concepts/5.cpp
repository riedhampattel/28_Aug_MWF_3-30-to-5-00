#include<iostream>
using namespace std;
int x = 10;//global scope
int main()
{
	int x = 20;//local scope
	cout<<"\nValue of local x = "<<x;
	cout<<"\nValue of global x = "<<::x;
	return 0;
}

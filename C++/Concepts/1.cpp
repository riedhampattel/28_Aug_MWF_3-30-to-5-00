#include<iostream>
using namespace std;
int main()
{
	string food = "pizza";
	string *item = &food;
	cout<<"\nValue of food = "<<food;
	cout<<"\nValue of item = "<<*item;
	cout<<"\nAddress of item = "<<item;
	cout<<"\nAddress of food = "<<&food;
	return 0;
}

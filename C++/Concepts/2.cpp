#include<iostream>
using namespace std;
int main()
{
	string food = "pizza";
	string &item = food;
	
	item = "burger";
	
	cout<<"\nValue of food = "<<food;
	cout<<"\nAddress of food = "<<&food;
	
	cout<<"\nValue of item = "<<item;
	cout<<"\nAddress of item = "<<&item;
	return 0;
}

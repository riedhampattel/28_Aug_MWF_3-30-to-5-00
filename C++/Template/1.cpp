#include<iostream>
using namespace std;
template <typename T>
void swapvalues(T &x,T &y)
{
	T temp = x;
	x = y;
	y = temp;
}
int main()
{
	int x = 10;
	int y = 20;
	cout<<"\nValue of x before swapping = "<<x;
	cout<<"\nValue of y before swapping = "<<y;
	swapvalues(x,y);
	cout<<"\nValue of x after swapping = "<<x;
	cout<<"\nValue of y after swapping = "<<y;
	
	char p = 'A';
	char q = 'B';
	cout<<"\nValue of p before swapping = "<<p;
	cout<<"\nValue of q before swapping = "<<q;
	swapvalues(p,q);
	cout<<"\nValue of p after swapping = "<<p;
	cout<<"\nValue of q after swapping = "<<q;
	
	float a = 15.65;
	float b = 78.56;
	cout<<"\nValue of a before swapping = "<<a;
	cout<<"\nValue of b before swapping = "<<b;
	swapvalues(a,b);
	cout<<"\nValue of a after swapping = "<<a;
	cout<<"\nValue of b after swapping = "<<b;
	return 0;
}

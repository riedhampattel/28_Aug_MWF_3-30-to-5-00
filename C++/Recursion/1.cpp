#include<iostream>
using namespace std;
void display(int num)
{
	if(num>=1)
	{
		cout<<"\nFunction called";
		num--;
		display(num);	
	}
}
int main()
{
	int cnt;
	cout<<"\nEnter the count = ";
	cin>>cnt;
	display(cnt);
	return 0;
}

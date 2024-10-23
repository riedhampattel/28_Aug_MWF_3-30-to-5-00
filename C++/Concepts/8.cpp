#include<iostream>
using namespace std;
void count()
{
	static int i;
	i++;
	cout<<"\n"<<i;
}
int main()
{
	count();
	count();
	count();
	return 0;
}

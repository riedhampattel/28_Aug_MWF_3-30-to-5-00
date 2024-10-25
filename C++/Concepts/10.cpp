#include<iostream>
using namespace std;
//inline function
inline int cube(int num)  {return num*num*num;};

int main()
{
	int ans = cube(5);
	cout<<"\nCube of 5 is = "<<ans;
	return 0;
}

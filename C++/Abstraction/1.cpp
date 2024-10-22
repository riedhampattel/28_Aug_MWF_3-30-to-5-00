#include<iostream>
using namespace std;
class Demo//base class
{
	private :
		int x = 10;
		string s1 = "Private";
	protected :
		int y = 20;
		string s2 = "Protected";
	public :
		int z = 30;
		string s3 = "Public";
};
class temp : public Demo //derived class
{
	public :
		void display()
		{
			cout<<"\nValue of y = "<<y;
			cout<<"\nValue of s2 = "<<s2;
		}
};
int main()
{
	Demo d1;
	//private : within the class
//	cout<<"\nValue of x = "<<d1.x;
//	cout<<"\nValue of s1 = "<<d1.s1;

	//protected : within the class or in derived class
//	cout<<"\nValue of y = "<<d1.y;
//	cout<<"\nValue of s2 = "<<d1.s2;

	temp t1;
	//protected : within the class or in derived class
//	cout<<"\nValue of y = "<<t1.y;
//	cout<<"\nValue of s2 = "<<t1.s2;

	t1.display();
	
	cout<<"\nValue of z = "<<d1.z;
	cout<<"\nValue of s3 = "<<d1.s3;
	return 0;
}

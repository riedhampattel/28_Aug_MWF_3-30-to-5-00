#include<iostream>
using namespace std;
class Demo
{
	private :
		int i;
		char ch;
		string str;
	public :
		void set(int x,char y,string z)
		{
			i = x;
			ch = y;
			str = z;
		} 
		void get()
		{
			cout<<"\nValue of i = "<<i;
			cout<<"\nValue of ch = "<<ch;
			cout<<"\nValue of str = "<<str;
		}
};
int main()
{
	int i;
	char ch;
	string str;
	cout<<"\nEnter the value of i = ";
	cin>>i;
	cout<<"\nEnter the value of ch = ";
	cin>>ch;
	cout<<"\nEnter the value of str = ";
	cin>>str;
	
	Demo d1,d2;
	d1.set(i,ch,str);
	d1.get();
	
	d2.set(45,'R',"Car");
	d2.get();
	return 0;
}

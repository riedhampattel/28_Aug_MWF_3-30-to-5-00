#include<iostream>
#include<fstream>
//ifstream ---> read
//ofstream ---> create, write
using namespace std;
int main()
{
	string txt;
	ifstream MyFile("first.txt");
	
	while(getline(MyFile,txt))
	{
		cout<<txt<<endl;
	}
	return 0;
}

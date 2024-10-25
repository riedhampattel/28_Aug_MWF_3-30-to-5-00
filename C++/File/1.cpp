#include<iostream>
#include<fstream>
//ifstream ---> read
//ofstream ---> create, write
using namespace std;
int main()
{
	ofstream MyFile("first.txt");
	MyFile<<"This is my first file";
	cout<<"Operation successful";
	return 0;
}

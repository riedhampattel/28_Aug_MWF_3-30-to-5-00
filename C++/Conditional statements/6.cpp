/*
Write a C++ program to check whether a character is an alphabet, digit or special character.
Test Data :
@
Expected Output :
This is a special character.
*/
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"\nEnter any character = ";
	cin>>ch;
	
	if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
	{
		cout<<"\nYou have enetered an alphabet";
	}
	else if(ch>=48 && ch<=57)
	{
		cout<<"\nYou have enetered a number";
	}
	else
	{
		cout<<"\nYou have enetered a special character";
	}
	return 0;
}

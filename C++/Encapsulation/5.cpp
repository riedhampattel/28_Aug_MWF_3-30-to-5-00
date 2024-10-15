//Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member functions to set and get these variables, as well as to validate if the date is valid.
#include<iostream>
using namespace std;
class Date
{
	private :
		int day,year;
		string month;
	public :
		int count=0;
		void set()
		{
			int d,m,y;
			cout<<"\nEnter the date = ";
			cin>>d;
			cout<<"\nEnter the month = ";
			cin>>m;
			cout<<"\nEnter the year = ";
			cin>>y;
			if(m==2 && y%4==0 && (d>=1 && d<=29))
			{
				day = d;
				month = "February";
				year = y;
			}
			else if(m==2 && (d>=1 && d<=28))
			{
				day = d;
				month = "February";
				year = y;
			}
			else if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && (d>=1 && d<=31))
			{
				day = d;
				switch(m)
				{
					case 1 :
						month = "January";
					break;
					case 3 :
						month = "March";
					break;
					case 5 :
						month = "May";
					break;
					case 7 :
						month = "July";
					break;
					case 8 :
						month = "August";
					break;
					case 10 :
						month = "October";
					break;
					case 12 :
						month = "December";
					break;
				}
				year = y;
			}
			else if((m==4 || m==6 || m==9 || m==11) && (d>=1 && d<=30))
			{
				day = d;
				switch(m)
				{
					case 4 :
						month = "April";
					break;
					case 6 :
						month = "June";
					break;
					case 9 :
						month = "September";
					break;
					case 11 :
						month = "November";
					break;
				}
				year = y;
			}
			else
			{
				count++;
			}
		}
		void get()
		{
			if(count==0)
			{
				cout<<"\n"<<day<<" - "<<month<<" - "<<year;	
			}
			else
			{
				cout<<"\nInvalid date format";	
			}
		}
};
int main()
{
	Date d1;
	d1.set();
	d1.get();
	
	Date d2;
	d2.set();
	d2.get();
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	string monthname;
	int numberofdays;
	cout<<"enter the month number to find no. of days:";
	cin>>monthname;
    if (monthname== "january"||monthname == "march"||monthname == "may"||monthname == "july"||monthname == "august"||monthname == "october"||monthname == "december")
	{
		cout<<"numberofdays = 31";
	}
	else if (monthname == "april"||monthname == "june"||monthname == "september"||monthname == "november")
	{
		cout<<"numberofdays = 30";
	}
	
	else if (monthname == "february")
	{
		cout<<"numberofdays = 28";
	}
	else 
	{cout<<"invalid month";
	}
	return 0;
}

#include<iostream>
using namespace std;
main()
{int monthnumber,numberofdays;

	cout<<"enter the month no. u want no. of days for : ";
	cin>>monthnumber;
	if (monthnumber==1||monthnumber==3||monthnumber==5||monthnumber==7||monthnumber==8||monthnumber==10||monthnumber==12)
{
		numberofdays = 31;
	cout<<numberofdays;}
	else  if (monthnumber==4||monthnumber==6||monthnumber==9||monthnumber==11)
	{
	numberofdays = 30;
	cout<<numberofdays;}
	else if (monthnumber == 2)
	{
	numberofdays = 28;
	cout<<numberofdays<<"/29(depending on leap year)";}
	else if(monthnumber>12) 
	{
	cout<<"invalid month!!";}
	
}

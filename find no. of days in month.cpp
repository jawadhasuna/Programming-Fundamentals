#include<iostream>
using namespace std;
int main (){

	int monthnumber;
	int numberofdays;
	cout<<"enter month number u want no. of days for?"<<endl;
	cin>>monthnumber;
	
	if ( monthnumber== 1||monthnumber== 3||monthnumber== 5||monthnumber== 7||monthnumber== 8||monthnumber== 10||monthnumber== 12)
	{numberofdays= 31;
	cout<<"the number of days are : "<<numberofdays<<endl;
		
	}
	
	else if 
	( monthnumber== 4||monthnumber== 6||monthnumber== 9||monthnumber== 11)
	{numberofdays= 30;
	cout<<"the number of days are : "<<numberofdays<<endl;
		
	}
	else if 
	( monthnumber== 2)
	{numberofdays= 28;
	cout<<"the number of days are : "<<numberofdays<<endl;}
		
	
	else 
	{cout<< "invalid month!!"<<endl;}
	
	
	
	
return 0;
}

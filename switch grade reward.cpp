#include<iostream>
using namespace std;
main()
{char grade;
cout<<"Enter your Grade : ";
cin>>grade;
switch(grade)
{
case'A':
case'a':
cout<<"Excellent";
break;	
case'B':
case'b':
case'C':	
case'c':
cout<<"Good";
break;		
case'D':	
case'd':
cout<<"Fair";
break;		
default:
cout<<"Fail";
//break;
}
}

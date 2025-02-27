#include<iostream>
using namespace std;
main ()
{
	//find sum of 1st 100 numbers: 
	int i=1,num,sum=0;
	cout<<"enter the last no. till u want sum of : "<<endl;
	cin>>num;
	while (i<=num)
	{sum= sum+i;
	i++; 
	}
	cout<<"sum of all the no. till given no. is :"<<sum<<endl;	
}

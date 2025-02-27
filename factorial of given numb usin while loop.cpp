#include<iostream>
using namespace std;
main()
{
	//find factorial of 1st ten numbers:
	int fact=1,i = 1,num;
	cout<<"enter the number u want factorial of: "<<endl;
	cin>>num;
	while(i<=num)
	{fact=fact*i;
	cout<<"all factorials till given number is : "<<fact<<endl;
		i++;}
		cout<<"**hence factorial of given number is : "<<fact<<endl;
}

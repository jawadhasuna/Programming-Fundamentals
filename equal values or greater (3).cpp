#include<iostream>
using namespace std;
main()
{ int a,b,c;
  cout<<"enter the value of A: "<<endl;
  cin>>a;
   
  cout<<"enter the value of B: "<<endl;
  cin>>b;
   
  cout<<"enter the value of C: "<<endl;
  cin>>c;
   
  
      if (a>b && a>c)
	  {
	  cout<<"the greatest value is a :  "<<a;
      }
	
	  else if (b>a && b>c)
	  {
     	cout<<"the greatest value is b :  "<<b;
      }
    
      else  if (c>b && c>a )
	  {
	  cout<<"the greatest value is c :  "<<c;
      } 
      else 
      {
	  cout<<"equal values , one is less";
      }
}

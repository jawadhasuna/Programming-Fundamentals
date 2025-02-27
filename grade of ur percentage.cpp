#include<iostream>
using namespace std;
main()
{int obtmarks,perc;
cout<<"To find the grade of your percentage enter the obtained marks : ";
cin>>obtmarks;
perc = obtmarks*100/500;
if (perc<60)  
cout<<"FAIL";
if (perc>=60 && perc<=70)
cout<<"D";
if (perc>=71 && perc<=80)
cout<<"C";
if (perc>=81 && perc<=90)
cout<<"B";
 if (perc>=91 && perc<=100)
cout<<"A";
else if (perc > 100)
cout<<"not valid!!";

}

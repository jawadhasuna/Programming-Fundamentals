#include<iostream>
using namespace std;
main()

  {  
    
	 int obtmarks,perc,total=1100;
     cout<<"enter the obt  marks : ";
     cin>> obtmarks;

     perc = 100*obtmarks/total;
     cout<<perc<<endl;
                        if(perc<50)  
                             cout<<"fail!";
                         if (perc >=50 && perc<=70)
                             {cout<<"D";}
                             if (perc>=71 && perc<=80)
                                 cout<<"c";
                                  if (perc>=81 && perc<=90)
                                        cout<<"b";
                                       if (perc>=91 && perc<=100)
                                          cout<<"a";
                                               if(perc>100)  
                                               cout<<" Error";
                                                                   }

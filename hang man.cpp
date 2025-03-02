#include<iostream>
using namespace std;
main()
{ 
char a;

cout<<"you have 1 shot to guess the middle letter of the 3 letter word while the 1st and 3rd letter is a vowel 'u'_'i' : ";
cin>>a;

if (a=='n'||a=='N')
   {
    cout<<"good u have guessed the word: uni \03";
   }	
else	
	
   {cout<<"u have lost the hangman!!"<<endl;
   	cout <<" |--O"<<endl;
    cout <<" | (|)"<<endl;
	cout <<" | _|_"<<endl;
   
   }
   
   
}

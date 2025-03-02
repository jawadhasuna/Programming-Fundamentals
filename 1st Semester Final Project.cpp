 #include <iostream>
#include <string>
#include <cstdlib>
#include <ctime> 
using namespace std;
void hangman()
{   cout<<"best game ever :)";
    cout<<"\n-----------------------------------------";
    cout<<"\n-----------------------------------------"<<endl<<endl;
    cout<<"\n\tWelcome to Hangman Game"<<endl<<endl;
    cout<<"\n-----------------------------------------";
    cout<<"\n-----------------------------------------"<<endl<<endl;
    cout<<"You have to save the man from hanging by guessing correct fruit name!!!"<<endl;
    cout<<"\n-----------------------------------------"<<endl;
    int tries=5;
    int n=0;
    char guess;
    string word;
    string words[20]={"apple","watermelon","orange","pear","cherry","strawberry","grape","mango","blueberry","pomegranate","plum","banana","papaya","kiwi","pineapple","apricot","grapefruit","melon","avocado","peach"};
    srand(time(0));
    int randnum=rand()%20;
    word=words[randnum];
    string mysteryword(word.length(),'*');
    
    while (tries>=1)
    {
        //system("cls");
        cout<<"   ______              |"<<endl;
        cout<<"   |               |             |"<<endl;
        cout<<"   |               0             |"<<endl;
        cout<<"   |              /|\\            |"<<endl;
        cout<<"   |               |             |"<<endl;
        cout<<"   |              / \\            |"<<endl;
        cout<<"   |         ______      |"<<endl;
        cout<<"   |                             |"<<endl;
        cout<<"   |                             |"<<endl;
        cout<<"   |                             |"<<endl;
        cout<<"_|_                          |"<<endl;
        cout<<endl;
        cout<<"\n\t\t\t\tTries Left : "<<tries<<endl;
        bool correctguess=false;
        cout<<mysteryword<<endl<<endl;
        cout<<"Total Number Of Letters To Guess : "<<word.length()-n<<endl<<endl;
        cout<<"Enter Your Guess : ";
        cin>>guess;
        for(int i=0; i<word.length(); i++)
 {
            if (word[i]==guess)
            {
                mysteryword[i]=guess;
                cout<<"\nYou Guessed Correctly! Nicely Done <3"<<endl<<endl;
                correctguess=true;
                n++;
            }
        } 
        
        if (mysteryword==word)
        {
            cout<<"\n-----------------------------------------"<<endl;
            cout<<"\n\t\tYou win!\nThe Fruit Was "<<word<<endl<<"\nYou saved the man from being hanged"<<endl<<endl;
            cout<<"               0              "<<endl;
            cout<<"              /|\\            "<<endl;
            cout<<"               |              "<<endl;
            cout<<"              / \\            "<<endl<<endl;
            cout<<"Now he is a happy man  :)"<<endl;
            break;
        }
        if (correctguess==false)
        {
            cout<<"\nWrong Guess! Don't Do It Again :("<<endl;
            tries--;   
        }
        
    }
    if(tries==0)
    {
        cout<<"\n-----------------------------------------";
        cout<<"\n-----------------------------------------"<<endl;
        cout<<"\nThe Word Was "<<word<<endl;
        cout<<"   ______               |"<<endl;
        cout<<"   |               |              |"<<endl;
        cout<<"   |               |              |"<<endl;
        cout<<"   |               |              |"<<endl;
        cout<<"   |               |              |"<<endl;
        cout<<"   |               0              |"<<endl;
        cout<<"   |              /|\\             |"<<endl;
        cout<<"   |               |              |"<<endl;
        cout<<"   |              / \\             |"<<endl;
        cout<<"   |                              |"<<endl;
        cout<<"_|_                           |"<<endl<<endl;
        cout<<"\nThe man is hanged and will be dead soon!    :("<<endl;
        cout<<"\n-----------------------------------------";
        cout<<"\n-----------------------------------------"<<endl<<endl;
        cout<<"\n\t\tGame Over"<<endl;
        cout<<"\n-----------------------------------------";
 cout<<"\n-----------------------------------------"<<endl<<endl;
        //system("pause");
    }
    
    //system("cls");
}

void rps()
{
    int user, computer, rand_num, rounds, ur_score=0, comp_score=0;
    cout<<"\n-----------------------------------------";
    cout<<"\n-----------------------------------------"<<endl<<endl;
    cout<<"\nWelcome to Rock, Paper, Scissor Game"<<endl<<endl;
    cout<<"\n-----------------------------------------";
    cout<<"\n-----------------------------------------"<<endl;
    cout<<"\nEnter Number Of Rounds : ";
    cin>>rounds;
    do
    {
        srand(time(0));
        computer=rand()%3;
        cout<<"\n-----------------------------------------"<<endl;
        cout<<"\n**Press 0 For Rock*\n*Press 1 For Paper*\n*Press 2 For Scissor**";
        cout<<endl;
        cout<<"\nEnter your choice : ";
        cin>>user;
        cout<<endl;
        if (computer==0)
        {
            if(user==0)
            {
                cout<<"\nYou Choose : Rock";
                cout<<"\nComputer Choose : Rock";
                cout<<"\nTie!";
            }
            else if(user==1)
            {
                cout<<"\nYou Choose : Paper";
                cout<<"\nComputer Choose : Rock";
                cout<<"\nYou win!";
                ur_score++;
            }
            else if(user==2)
            {
                cout<<"\nYou Choose : Scissor";
                cout<<"\nComputer Choose : Rock";
                cout<<"\nYou lose!";
                comp_score++;
            }
 else
            {
                cout<<"\nWrong Input! Try Again"<<endl;
                continue;
            }
            //system("cls");
        }
        else if (computer==1)
        {
            if(user==0)
            {
                cout<<"\nYou Choose : Rock";
                cout<<"\nComputer Choose : Paper";
                cout<<"\nYou lose!!";
                comp_score++;
            }
            else if(user==1)
            {
                cout<<"\nYou Choose : Paper";
                cout<<"\nComputer Choose : Paper";
                cout<<"\nTie!";
            }
            else if(user==2)
            {
                cout<<"\nYou Choose : Scissor";
                cout<<"\nComputer Choose : Paper";
                cout<<"\nYou win!";
                ur_score++;
            }
            else
            {
                cout<<"\nWrong Input! Try Again"<<endl;
                continue;
            }
            //system("cls");
        }
        else if (computer==2)
        {
            if(user==0)
            {
                cout<<"\nYou Choose : Rock";
                cout<<"\nComputer Choose : Scissor";
                cout<<"\nYou win!";
                ur_score++;
            }
            else if(user==1)
            {
                cout<<"\nYou Choose : Paper";
                cout<<"\nComputer Choose : Scissor";
                cout<<"\nYou lose!";
 comp_score++;
            }
            else if(user==2)
            {
                cout<<"\nYou Choose : Scissor";
                cout<<"\nComputer Choose : Scissor";
                cout<<"\nTie!";
            }
            else
            {
                cout<<"\nWrong Input! Try Again"<<endl;
                continue;
            }
            //system("cls");
        }
        cout<<endl;
        cout<<endl;
        rounds--;
    }
    while(rounds>0);
    
    cout<<"\n-----------------------------------------"<<endl;
    cout<<"\nYour Score : "<<ur_score;
    cout<<"\nComputer Score : "<<comp_score;
    if(ur_score>comp_score)
    {
        cout<<"\n***You have Won! :)***";
    }
    else if(ur_score<comp_score)
    {
        cout<<"\n***You have Lost! :(***";
    }
    else 
    {
        cout<<"\n***Its a Tie!***";
    }
    cout<<"\n-----------------------------------------";
    cout<<"\n-----------------------------------------"<<endl<<endl;
    cout<<"\n\t\tGame Over"<<endl;
    cout<<"\n-----------------------------------------";
    cout<<"\n-----------------------------------------"<<endl<<endl;
}

int main()
{
    int choice1, choice2;
    cout<<"\n\n\t\tWelcome"<<endl;
    cout<<"\n-----------------------------------------";
    cout<<"\n-----------------------------------------"<<endl;
    do
 {
        cout<<"\n**Press 1 for Rock, Paper and Scissor Game*\n*Press 2 for Hangman**"<<endl;
        cout<<"Enter Your Choice : ";
        cin>>choice1;
        cout<<endl;
        if(choice1==1)
        {
            rps();
        }
        else if(choice1==2)
        {
            hangman();
        }
        else
        {
            cout<<"\nWrong choice! Please Try Again  :)"<<endl;
        }
        cout<<"\n-----------------------------------------"<<endl;
        cout<<"\nIf You Want To Play Again Then Press 1"<<endl;
        cin>>choice2;
    }
    while(choice2==1);
    cout<<"\n\nThank You For Playing The Game!\nIts Been A Pleasure To Entertain You  :)";
    return 0;
}

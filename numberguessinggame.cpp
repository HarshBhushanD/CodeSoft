#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
      cout<<"\n-----------Welcome to Number Guessing Game-----------\n"<<endl;
      cout<<"\n-You will have to chose any number between 1 to 100.";
      cout<<"\n--->>Let's begin to play,Have a Good Luck";

      srand(time(0));
      int random=(rand()%100)+1;

      cout<<"\n you will have only 5 chances to guess the correct number"<<endl;
      int chancesleft=5;
      int playerinput;

      for(int i=0;i<=5;i++){
        cout <<"\n  Enter a Number"<<endl;
        cin>>playerinput;

        if(playerinput==random){
            cout<<"\n Congratulations!.You have successfully guessed the correct Number\n";
            cout<<"\n Thanks for playing.Have a good day ahead";

            break;
        }
        else{
            if(playerinput>random){
                cout<<endl;
                cout<<"The number input by you is graeter than the actual number,please enter the smaller number";
                cout<<endl;
                cout<<"Try again";
                cout<<endl;
            }

            else{
                cout<<endl;
                cout<<"The number input by you is lesser than the actual number,please enter the larger number";
                cout<<endl;
                cout<<"Try again";
                cout<<endl;
            }
        }
        chancesleft--;

        if(chancesleft==0){
        cout<<endl;
        cout<<"Oops you ran out of chances";
        cout<<endl;
        cout<<"The random number was: "<<random<<endl;
        cout<<"Thanks for playing.Have a good day ahead.";
      }
      }
      cout<<"\n";
      return 0;  
}
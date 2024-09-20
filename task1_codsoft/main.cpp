//task 1 internship by codsoft  [creating a Number guessing game #computerised]
// [25 aug,2024]



#include<iostream>
#include<cstdio>
#include<ctime>
using namespace std;
int main()
{
    
    cout<<"-----------welcome to the Number Guessing game------------"<<endl;
    cout<<endl;
    cout<<"->>  You have to guess the number between 1 to 100 .";
    
    cout<<"->> lets start playing and best of luck"<<endl;
    
    
    
    srand(time(0));
    int randnumber=( rand()%100)+1;
    cout<<endl;
    cout <<"** You will have total 5 chances to guess the correct number. **";
    int chanceleft=5;
    int playerinput;
    
    
    for(int i=1;i<=5;i++){
        cout<<"Enter a number"<<endl;
        cin>>playerinput;
        
        if(playerinput==randnumber){
            cout<<"Congrats!!. You have successfully guessed the right number";
            cout<<"thanks for playing have a nice day";
            break;
        }
        else
        {
            if (playerinput > randnumber){
                cout<<"Insert a Smaller Number . Try Again"<<endl;
            }
            else{
                cout<<"Insert a Larger Number . Try Again"<<endl;

            }
                }
        chanceleft--;
        cout<<"(Chances Left to guess the Random Number: " << chanceleft<< " )"<<endl;
        
        if (chanceleft==0)
            
        {
            cout <<"\n Sorry your chance has been finished to guess the random number\n"<<endl;
            cout<<" The random Number was :" << randnumber <<endl;
            cout<< " Thanks for playing have a nice day.";
        }
    }
    
    cout<<endl;
    return 0;
}

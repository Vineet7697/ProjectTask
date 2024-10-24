#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    
    cout<<"\n\t\t\t Welcome to GuessTheNumber Game!"<<endl;
    cout<<"You have to guess a number between 1 and 100.You have limited chioces based on the level you choose.Good Luck!"<<endl;
   
    while(true){
        cout<<"\n Enter the difficulty level: \n";
        cout<<"1 for easy!\t";
        cout<<"2 for medium!\t";
        cout<<"3 for difficult!\t";
        cout<<"0 for ending the game!\n"<<endl;

        int difficultyChoice;
        cout<<"Enter the number:";
        cin>>difficultyChoice;

        srand(time(0));
        int secretNumber = 1 + (rand()%100);
        int playerChoice;

        if(difficultyChoice==1){
            cout<<"\n You have 10 choices for finding the secret number between 1 and 100.";
            int choicesLeft=10;
            for(int i=0;i<=10;i++){
                cout<<"\n\nEnter the number:";
                cin>>playerChoice;
                if(playerChoice==secretNumber){
                    cout<<"Well played! you won, "<<playerChoice <<" is the secret number "<<endl;
                    cout<<"\t\t\t Thanks for playing...."<<endl;
                    cout<<"play the game again with us!\n\n"<<endl;
                    break;
                }
                else{
                    cout<<"nope,"<<playerChoice<<"is not the right number\n";
                    if(playerChoice>secretNumber){
                        cout<<"The secret number is smaller than the number you have choosen"<<endl;

                    }
                    else{
                        cout<<"The secret number is grater than the number you have choosen"<<endl;
                    }
                    choicesLeft--;
                    cout<<choicesLeft<<"choices left."<<endl;
                    if(choicesLeft==0){
                        cout<<"You couldn't find the secret number, it was "<<secretNumber<<",you lose!!\n\n";
                        cout<<"Play the game again to win!!!\n\n";
                }

            }
        }
    }
        else if(difficultyChoice==2){
            cout<<"\n You have 7 choices for finding the secret number between 1 and 100.";
            int choicesLeft=7;
            for(int i=0;i<=7;i++){
                cout<<"\n\nEnter the number:";
                cin>>playerChoice;
                if(playerChoice==secretNumber){
                    cout<<"Well played! you won, "<<playerChoice <<"is the secret number"<<endl;
                    cout<<"\t\t\t Thanks for playing...."<<endl;
                    cout<<"play the game again with us!\n\n"<<endl;
                    break;
                }
                else{
                    cout<<"nope,"<<playerChoice<<"is not the right number\n";
                    if(playerChoice>secretNumber){
                        cout<<"The secret number is smaller than the number you have choosen"<<endl;

                    }
                    else{
                        cout<<"The secret number is grater than the number you have choosen"<<endl;
                    }
                    choicesLeft--;
                    cout<<choicesLeft<<"choices left."<<endl;
                    if(choicesLeft==0){
                        cout<<"you couldn't find the secret number , it was "<<secretNumber<<",you lose!!\n\n";
                        cout<<"play the game again to win!!!\n\n";
                }

            }
        }
    }
        else if(difficultyChoice==3){
            cout<<"\n You have 5 choices for finding the secret number between 1 and 100.";
            int choicesLeft=5;
            for(int i=0;i<=5;i++){
                cout<<"\n\nEnter the number:";
                cin>>playerChoice;
                if(playerChoice==secretNumber){
                    cout<<"Well played! you won, "<<playerChoice <<"is the secret number"<<endl;
                    cout<<"\t\t\t Thanks for playing...."<<endl;
                    cout<<"play the game again with us!\n\n"<<endl;
                    break;
                }
                else{
                    cout<<"nope,"<<playerChoice<<"is not the right number\n";
                    if(playerChoice>secretNumber){
                        cout<<"The secret number is smaller than the number you have choosen"<<endl;

                    }
                    else{
                        cout<<"The secret number is grater than the number you have choosen"<<endl;
                    }
                    choicesLeft--;
                    cout<<choicesLeft<<"choices left."<<endl;
                    if(choicesLeft==0){
                        cout<<"you couldn't find the secret number , it was "<<secretNumber<<",you lose!!\n\n";
                        cout<<"play the game again to win!!!\n\n";
                }

            }
        }
    }
        else if(difficultyChoice==0){
            exit(0);
        }
        else{
            cout<<"wrong choice, Enter valid choice to play the game!(0,1,2,3)"<<endl;
        }
    }
        return 0;
}

#include <iostream>
using namespace std;
int main(){
    int guess=5; //you can change this value
    int userguess;
    int tries=3;
    int usertries=0;
    cout << "This is a number guessing game" << endl;
    cout << "You need to guess a random number from 1 to 10" << endl;
    while(guess!=userguess){
        cout << "Enter your guess: ";
        cin >> userguess;
        usertries++;
        if(tries==usertries){
            cout << "Oops you ran out of chances. Better luck next time !" << endl;
            break;
        }
        if(guess==userguess){
            cout << "You have guessed the number correctly ! " << endl;
        }
        
    }
    
    return 0;
}

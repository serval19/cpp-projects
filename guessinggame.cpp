#include <iostream>
using namespace std;
int main(){
    int guess=5; //you can modify this value
    int userguess;
    while(guess!=userguess){
        cout << "Enter your guess: ";
        cin >> userguess;
    }
    cout << "You have guessed the number correctly :)";
    return 0;
}

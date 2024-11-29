#include<iostream>
#include<cstdlib>//for random function
#include<ctime>// for time(0)i.e current time
using namespace std;

int main(){
    srand(static_cast<unsigned int>(time(0)));
    int random = rand() % 10 +1;
    
    int guess;
    int attempts=0;
    bool correct=false;
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Try to guess the secret number between 1 and 10 " << endl;
    

    while(! correct){
        cout<<"Enter your guess: ";
        cin>>guess;
        attempts ++;

        if (guess == random){
            correct=true;
            cout << "Congratulations! You guessed the right number!"<< endl;
        }
        else if(guess < random){
                cout << "Your guess is too low." << endl;
        }
        else{
            cout << "Your guess is too high." << endl;   
        }
    }
    cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;  

    return 0;               
}



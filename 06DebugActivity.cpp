//guessing game to debug

#include <iostream>
using namespace std;

int main()
{
    int secretNumber = 59;  //number user is trying to guess
    int guessedNumber;       //variable to hold user's  guess
    int counter;            //variable to count number of guesses used

    cout << "I am thinking of a number between 0 and 100. Guess my number." << endl;

    cin >> guessedNumber;

    while(guessedNumber != secretNumber)
    {
        if(guessedNumber > secretNumber)
            cout << "Too high! Guess again: " << endl;
            counter++;

        if(guessedNumber < secretNumber)
            cout << "Too low!  Guess again: " << endl;
            counter++;

        if(guessedNumber = secretNumber)
            cout << "You guessed it!" << endl;
            break; //exit the loop when we guess the right number
    }

    cout << "You needed " << counter << " guesses." << endl;
    return 0;
}
#include <iostream>
#include <cstdlib>//for rand()
#include <ctime>//for time()
using namespace std;
int main()
{
    int guess,attempts= 0;
    //Generate different random number every run
    srand(time(0));
    // Random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    cout << "===== Number Guessing Game =====\n";
    while(true)
    {
        cout<< "Enter your guess: ";
        cin>> guess;
        attempts++;
        if(guess>secretNumber)
        {
            cout<< "Too High!\n";
        }
        else if(guess < secretNumber)
        {
            cout<< "Too Low!\n";
        }
        else
        {
            cout<< "Correct Guess!\n";
            cout<< "Attempts = " << attempts;
            break;
        }
    }
    return 0;
}
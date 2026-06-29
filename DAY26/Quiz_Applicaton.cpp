#include <iostream>
using namespace std;
int main()
{
    int answer;
    int score = 0;
    cout << "===== QUIZ APPLICATION =====\n";
    // Question 1
    cout << "\n1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n";
    cout << "Enter answer: ";
    cin >> answer;
    if(answer == 2)
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Wrong Answer!\n";
    }
    // Question 2
    cout << "\n2. Who developed C language?\n";
    cout << "1. Dennis Ritchie\n2. Bjarne Stroustrup\n";
    cout << "3. James Gosling\n4. Guido van Rossum\n";
    cout << "Enter answer: ";
    cin >> answer;
    if(answer == 1)
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Wrong!\n";
    }
    cout << "\nFinal Score = " << score << "/2";
    return 0;
}
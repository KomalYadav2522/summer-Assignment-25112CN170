#include<iostream>
#include <string>
using namespace std;
int main()
{
    string words[100], temp;
    int n;
    cout<< "Enter number of words:";
    cin>>n;
    //Input words
    for(int i=0;i<n;i++)
    {
        cout<< "Enter word" <<i + 1<<": ";
        cin>> words[i];
    }
    // Bubble Sort according to length
    for(int i= 0;i<n-1;i++)
    {
        for(int j = 0;j<n-i-1;j++)
        {
            // Compare lengths
            if(words[j].length() > words[j + 1].length())
            {
                temp = words[j];
                words[j] = words[j + 1];
                words[j + 1] = temp;
            }
        }
    }
    // Display sorted words
    cout << "\nWords sorted by length:\n";
    for(int i = 0; i < n; i++)
    {
        cout << words[i] << endl;
    }
    return 0;
}
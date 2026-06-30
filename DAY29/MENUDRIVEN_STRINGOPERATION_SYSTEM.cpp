#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str1, str2;
    int choice;

    cout << "Enter First String : ";
    getline(cin, str1);

    cout << "Enter Second String : ";
    getline(cin, str2);
    while(true)
    {
        cout << "\n========== STRING OPERATIONS ==========";

        cout << "\n1. Length";
        cout << "\n2. Copy";
        cout << "\n3. Concatenate";
        cout << "\n4. Compare";
        cout << "\n5. Reverse";
        cout << "\n6. Palindrome";
        cout << "\n7. Exit";

        cout << "\nEnter Choice : ";
        cin >> choice;
        switch(choice)
        {
            //Length
            case 1:
            {
                cout << "\nLength of First String = "
                     << str1.length();

                cout << "\nLength of Second String = "
                     << str2.length();

                break;
            }
            //Copy
            case 2:
            {
                str2 = str1;

                cout << "\nCopied String = "
                     << str2;

                break;
            }
            //Concatenate
            case 3:
            {
                cout << "\nResult = "
                     << str1 + str2;

                break;
            }
            //Compare
            case 4:
            {
                if(str1 == str2)
                    cout << "\nStrings are Equal.";
                else if(str1 > str2)
                    cout << "\nFirst String is Greater.";
                else
                    cout << "\nSecond String is Greater.";

                break;
            }
            //Reverse
            case 5:
            {
                string temp = str1;

                reverse(temp.begin(), temp.end());

                cout << "\nReversed String = "
                     << temp;

                break;
            }
            //Palindrome
            case 6:
            {
                string temp = str1;

                reverse(temp.begin(), temp.end());

                if(temp == str1)
                    cout << "\nPalindrome String.";
                else
                    cout << "\nNot a Palindrome.";

                break;
            }
            //Exit
            case 7:
            {
                cout << "\nThank You!";
                return 0;
            }
            default:
            {
                cout << "\nInvalid Choice.";
            }
        }
    }
    return 0;
}
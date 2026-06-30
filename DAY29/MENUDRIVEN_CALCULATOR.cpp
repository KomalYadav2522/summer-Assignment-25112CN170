#include <iostream>
#include <cmath>// For pow()
using namespace std;
int main()
{
    int choice;
    double num1, num2;
    while(true)
    {
        cout << "\n========== MENU DRIVEN CALCULATOR ==========";

        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n5. Modulus";
        cout << "\n6. Power";
        cout << "\n7. Exit";

        cout << "\nEnter Choice : ";

        cin >> choice;

        if(choice == 7)
        {
            cout << "\nThank You!";
            break;
        }
        cout << "\nEnter First Number : ";
        cin >> num1;

        cout << "Enter Second Number : ";
        cin >> num2;
        switch(choice)
        {
        // Addition
        case 1:

            cout << "\nResult = " << num1 + num2;

            break;

        // Subtraction
        case 2:

            cout << "\nResult = " << num1 - num2;

            break;

        // Multiplication
        case 3:

            cout << "\nResult = " << num1 * num2;

            break;

        // Division
        case 4:

            if(num2 != 0)
            {
                cout << "\nResult = " << num1 / num2;
            }

            else
            {
                cout << "\nDivision by Zero is Not Possible.";
            }

            break;

        // Modulus
        case 5:

            if((int)num2 != 0)
            {
                cout << "\nResult = "
                     << (int)num1 % (int)num2;
            }

            else
            {
                cout << "\nModulus by Zero is Not Possible.";
            }

            break;

        // Power
        case 6:

            cout << "\nResult = "
                 << pow(num1, num2);

            break;

        default:

            cout << "\nInvalid Choice.";
        }
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n=0;
    int choice;
    while(true)
    {
        cout << "\n========== ARRAY OPERATIONS ==========";

        cout << "\n1. Insert Elements";
        cout << "\n2. Display Array";
        cout << "\n3. Search Element";
        cout << "\n4. Update Element";
        cout << "\n5. Delete Element";
        cout << "\n6. Sort Array";
        cout << "\n7. Reverse Array";
        cout << "\n8. Exit";

        cout << "\nEnter Choice : ";
        cin >> choice;
        switch(choice)
        {
        //Insert Elements
        case 1:
        {
            cout << "\nEnter Number of Elements : ";
            cin >> n;

            cout << "\nEnter Elements\n";

            for(int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }

            break;
        }
        //Display Array
        case 2:
        {
            if(n == 0)
            {
                cout << "\nArray is Empty.";
            }
            else
            {
                cout << "\nArray Elements : ";

                for(int i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }
            }

            break;
        }
        //Search Element
        case 3:
        {
            int key;
            bool found = false;

            cout << "\nEnter Element to Search : ";
            cin >> key;

            for(int i = 0; i < n; i++)
            {
                if(arr[i] == key)
                {
                    cout << "\nElement Found at Position "
                         << i + 1;

                    found = true;
                    break;
                }
            }

            if(!found)
            {
                cout << "\nElement Not Found.";
            }

            break;
        }
        //Update Element
        case 4:
        {
            int pos, value;

            cout << "\nEnter Position : ";
            cin >> pos;

            if(pos >= 1 && pos <= n)
            {
                cout << "Enter New Value : ";
                cin >> value;

                arr[pos - 1] = value;

                cout << "\nElement Updated Successfully.";
            }
            else
            {
                cout << "\nInvalid Position.";
            }

            break;
        }
        //Delete Element
        case 5:
        {
            int pos;

            cout << "\nEnter Position to Delete : ";
            cin >> pos;

            if(pos >= 1 && pos <= n)
            {
                for(int i = pos - 1; i < n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }

                n--;

                cout << "\nElement Deleted Successfully.";
            }
            else
            {
                cout << "\nInvalid Position.";
            }

            break;
        }
        //(Bubble Sort)
        case 6:
        {
            for(int i = 0; i < n - 1; i++)
            {
                for(int j = 0; j < n - i - 1; j++)
                {
                    if(arr[j] > arr[j + 1])
                    {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }

            cout << "\nArray Sorted Successfully.";

            break;
        }
        //Reverse Array
        case 7:
        {
            int start = 0;
            int end = n - 1;

            while(start < end)
            {
                int temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;

                start++;
                end--;
            }
            cout << "\nArray Reversed Successfully.";
            break;
        }
        // Exit
        case 8:
        {
            cout << "\nThank You!";
            return 0;
        }

        default:
            cout << "\nInvalid Choice.";
        }
    }
    return 0;
}

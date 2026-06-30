#include<iostream>
#include<string>
using namespace std;
//Contact class
class Contact
{
    public:
       int id;
       string name;
       string mobile;
       string email;

};
int main()
{
    Contact c[100];
    int totalContacts = 0;
    int choice;
    while(true)
    {
        cout << "\n========== CONTACT MANAGEMENT SYSTEM ==========";

        cout << "\n1. Add Contact";
        cout << "\n2. Display Contacts";
        cout << "\n3. Search Contact";
        cout << "\n4. Update Contact";
        cout << "\n5. Delete Contact";
        cout << "\n6. Exit";

        cout << "\nEnter Choice : ";
        cin >> choice;

        switch(choice)
        {
        // Add Contact
        case 1:
        {
            cout << "\nEnter Contact ID : ";
            cin >> c[totalContacts].id;

            cin.ignore();

            cout << "Enter Name : ";
            getline(cin, c[totalContacts].name);

            cout << "Enter Mobile Number : ";
            getline(cin, c[totalContacts].mobile);

            cout << "Enter Email : ";
            getline(cin, c[totalContacts].email);

            totalContacts++;

            cout << "\nContact Added Successfully.";

            break;
        }
        // Display Contacts
        case 2:
        {
            if(totalContacts == 0)
            {
                cout << "\nNo Contacts Found.";
            }
            else
            {
                for(int i = 0; i < totalContacts; i++)
                {
                    cout << "\n--------------------------";
                    cout << "\nContact ID : " << c[i].id;
                    cout << "\nName : " << c[i].name;
                    cout << "\nMobile : " << c[i].mobile;
                    cout << "\nEmail : " << c[i].email;
                    cout << "\n--------------------------";
                }
            }
            break;
        }
        // Search Contact
        case 3:
        {
            int id;
            bool found = false;

            cout << "\nEnter Contact ID : ";
            cin >> id;

            for(int i = 0; i < totalContacts; i++)
            {
                if(c[i].id == id)
                {
                    cout << "\nContact Found";
                    cout << "\nName : " << c[i].name;
                    cout << "\nMobile : " << c[i].mobile;
                    cout << "\nEmail : " << c[i].email;

                    found = true;
                    break;
                }
            }
            if(!found)
                cout << "\nContact Not Found.";

            break;
        }
        // Update Contact
        case 4:
        {
            int id;
            bool found = false;

            cout << "\nEnter Contact ID : ";
            cin >> id;

            for(int i = 0; i < totalContacts; i++)
            {
                if(c[i].id == id)
                {
                    cin.ignore();

                    cout << "Enter New Name : ";
                    getline(cin, c[i].name);

                    cout << "Enter New Mobile Number : ";
                    getline(cin, c[i].mobile);

                    cout << "Enter New Email : ";
                    getline(cin, c[i].email);

                    cout << "\nContact Updated Successfully.";

                    found = true;
                    break;
                }
            }
            if(!found)
                cout << "\nContact Not Found.";

            break;
        }
        // Delete Contact
        case 5:
        {
            int id;
            bool found = false;

            cout << "\nEnter Contact ID : ";
            cin >> id;

            for(int i = 0; i < totalContacts; i++)
            {
                if(c[i].id == id)
                {
                    for(int j = i; j < totalContacts - 1; j++)
                    {
                        c[j] = c[j + 1];
                    }

                    totalContacts--;

                    cout << "\nContact Deleted Successfully.";

                    found = true;
                    break;
                }
            }
            if(!found)
                cout << "\nContact Not Found.";

            break;
        }
        // Exit
        case 6:
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
#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    int roll;
    string name;
    int marks[5];
    int total;
    float percentage;
    char grade;
};

int main()
{
    Student s[100];
    int totalStudents = 0;
    int choice;
    while(true)
    {
        cout << "\n========== MARKSHEET MANAGEMENT SYSTEM ==========";

        cout << "\n1. Add Student";
        cout << "\n2. Display All Marksheet";
        cout << "\n3. Search Student";
        cout << "\n4. Update Marks";
        cout << "\n5. Exit";

        cout << "\nEnter Choice : ";

        cin >> choice;

        switch(choice)
        {
        // Add Student
        case 1:
        {
            cout << "\nEnter Roll Number : ";
            cin >> s[totalStudents].roll;

            cin.ignore();

            cout << "Enter Name : ";
            getline(cin, s[totalStudents].name);

            s[totalStudents].total = 0;

            cout << "\nEnter Marks of 5 Subjects\n";

            for(int i=0;i<5;i++)
            {
                cout << "Subject " << i+1 << " : ";

                cin >> s[totalStudents].marks[i];

                s[totalStudents].total += s[totalStudents].marks[i];
            }
            s[totalStudents].percentage =
                s[totalStudents].total / 5.0;

            if(s[totalStudents].percentage >=90)
                s[totalStudents].grade='A';

            else if(s[totalStudents].percentage>=75)
                s[totalStudents].grade='B';

            else if(s[totalStudents].percentage>=60)
                s[totalStudents].grade='C';

            else if(s[totalStudents].percentage>=40)
                s[totalStudents].grade='D';

            else
                s[totalStudents].grade='F';

            totalStudents++;

            cout << "\nStudent Added Successfully.";

            break;
        }
        // Display
        case 2:
        {
            if(totalStudents==0)
            {
                cout<<"\nNo Records Found.";
            }

            else
            {
                for(int i=0;i<totalStudents;i++)
                {
                    cout<<"\n--------------------------------";

                    cout<<"\nRoll : "<<s[i].roll;

                    cout<<"\nName : "<<s[i].name;

                    cout<<"\nTotal : "<<s[i].total;

                    cout<<"\nPercentage : "<<s[i].percentage;

                    cout<<"\nGrade : "<<s[i].grade;

                    cout<<"\n--------------------------------";
                }
            }

            break;
        }
        // Search
        case 3:
        {
            int roll;

            bool found=false;

            cout<<"\nEnter Roll Number : ";

            cin>>roll;

            for(int i=0;i<totalStudents;i++)
            {
                if(s[i].roll==roll)
                {
                    cout<<"\nStudent Found";

                    cout<<"\nName : "<<s[i].name;

                    cout<<"\nPercentage : "<<s[i].percentage;

                    cout<<"\nGrade : "<<s[i].grade;

                    found=true;

                    break;
                }
            }

            if(!found)
                cout<<"\nStudent Not Found.";

            break;
        }
        // Update Marks
        case 4:
        {
            int roll;

            bool found=false;

            cout<<"\nEnter Roll Number : ";

            cin>>roll;

            for(int i=0;i<totalStudents;i++)
            {
                if(s[i].roll==roll)
                {
                    s[i].total=0;

                    cout<<"\nEnter New Marks\n";

                    for(int j=0;j<5;j++)
                    {
                        cout<<"Subject "<<j+1<<" : ";

                        cin>>s[i].marks[j];

                        s[i].total+=s[i].marks[j];
                    }

                    s[i].percentage=s[i].total/5.0;

                    if(s[i].percentage>=90)
                        s[i].grade='A';
                    else if(s[i].percentage>=75)
                        s[i].grade='B';
                    else if(s[i].percentage>=60)
                        s[i].grade='C';
                    else if(s[i].percentage>=40)
                        s[i].grade='D'; 
                    else
                        s[i].grade='F';
                    cout<<"\nRecord Updated Successfully.";
                    
                    found=true;
                    break;
                }
            }
            if(!found){
                cout<<"\nStudent Not Found.";
            }
            break;
        }
        //Exit
        case 5:
        {
            cout<<"\nThank You";
            return 0;
        }
        default:
            cout<<"\nInvalid Choice."
    }
    return 0;
}
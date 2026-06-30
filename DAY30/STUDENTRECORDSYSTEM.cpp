#include<iostream>
#include<string>
using namespace std;
class Student
{
    public:
      int roll;
      string name;
      float marks;
};
int main()
{
    Student s[100];
    int total=0;
    int choice;
    while(true)
    {
        cout<<"\n\n=====STUDENT RECORD SYSTEM=====";
        cout<<"\n1.Add Student";
        cout<<"\n2.Display Students";
        cout<<"\n3.Search Student";
        cout<<"\n4.Update Student";
        cout<<"\n5.Delete Student";
        cout<<"\n6.Exit";
        cout<<"\nEnter Choice:";
        cin>>choice;
        switch(choice)
        {
            //Add Student
            case 1:
            {
                cout<<"\nEnter Roll Number:";
                cin>>s[total].roll;
                cin.ignore();
                cout<<"\nEnter Name:";
                getline(cin,s[total].name);
                
                cout<<"Enter Marks:";
                cin>>s[total].marks;

                total++;

                cout<<"\nStudent Added Successfully:";

                break;
            }
            //Display Students
            case 2:
            {
                if(total==0)
                {
                    cout<<"\nNo Records Found.";
                }
                else{
                    for(int i=0;i<total;i++)
                    {
                        cout<<"\n----------------";

                        cout<<"\nRoll :"<<s[i].roll;

                        cout<<"\nName :"<<s[i].name;

                        cout<<"\nMarks :"<<s[i].marks;

                        cout<<"\n-----------------";
                    }
                }
                break;
            }
            //Search Student
            case 3:
            {
                int roll;
                bool found=false;

                cout<<"\nEnter Roll Number :";
                cin>>roll;

                for(int i=0;i<total;i++)
                {
                    if(s[i].roll==roll)
                    {
                        cout<<"\nStudent Found";

                        cout<<"\nName :"<<s[i].name;

                        cout<<"\nMarks :"<<s[i].marks;

                        found=true;

                        break;
                    }
                }
                if(found==false)
                {
                    cout<<"\nStudent Not Found.";
                }
                break;
            }
            //Update Student
            case 4:
            {
                int roll;
                bool found=false;
                cout<<"\nEnter roll no :";
                cin>>roll;
                for(int i=0;i<total;i++)
                {
                    if(s[i].roll==roll)
                    {
                        cin.ignore();

                        cout<<"\nEnter New Name :";

                        getline(cin,s[i].name);

                        cout<<"Enter New Marks :";
                        cin>>s[i].marks;

                        found=true;

                        cout<<"\nRecord Updated.";

                        break;
                    }
                }
                if(found==false)
                {
                    cout<<"\nRecord Not Found";
                }
                break;
            }
            //Delete Student
            case 5:
            {
                int roll;
                bool found=false;
                cout<<"\nEnter Roll Number :";
                cin>>roll;
                for(int i=0;i<total;i++)
                {
                    if(s[i].roll==roll)
                    {
                        for(int j=i;j<total-1;j++)
                        {
                            s[j]=s[j+1];
                        }
                        total--;

                        found=true;

                        cout<<"\nRecord Deleted.";

                        break;
                    }
                }
                if(found==false)
                {
                    cout<<"\nRecord Not Found.";
                }
                break;
            }
            //Exit
            case 6:
            {
                cout<<"\nThank You";
                return 0;
            }
            default:
            {
                cout<<"\nInvalid Choice.";
            }
        }
    }
    return 0;
}
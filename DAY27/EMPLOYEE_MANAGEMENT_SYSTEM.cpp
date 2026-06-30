#include<iostream>
#include<string>
using namespace std;
//Employee class
class Employee
{
    public:
      int id;
      string name;
      string department;
      float salary;
};
int main()
{
    Employee emp[100];
    int total=0;
    int choice;
    while(true)
    {
        cout<<"\n\n=====EMPLOYEE MANAGEMENT SYSTEM=====";
        cout<<"\n1.Add Employee";
        cout<<"\n2.Display Employee";
        cout<<"\n3.Search  Employee";
        cout<<"\n4.Update  Employee";
        cout<<"\n5.Delete  Employee";
        cout<<"\n6.Exit";

        cout<<"\nEnter Choice:";
        cin>>choice;
        switch(choice)
        {
            //Add  Employee
            case 1:
            {
                cout<<"\nEnter  Employee ID :";
                cin>>emp[total].id;
                cin.ignore();
                cout<<"\nEnter  Employee Name:";
                getline(cin,emp[total].name);
                
                cout<<"Enter Department :";
                cin>>emp[total].department;

                cout<<"Enter Salary";
                cin>>emp[total].salary;

                total++;

                cout<<"\n Employee Added Successfully:";

                break;
            }
            //Display  Employee
            case 2:
            {
                if(total==0)
                {
                    cout<<"\nNo  Employee Records Found.";
                }
                else{
                    for(int i=0;i<total;i++)
                    {
                        cout<<"\n----------------";

                        cout<<"\nEmployee ID :"<<emp[i].id;

                        cout<<"\nName :"<<emp[i].name;

                        cout<<"\nDepartment :"<<emp[i].department;

                        cout<<"\nSalary :"<<emp[i].salary;

                        cout<<"\n-----------------";
                    }
                }
                break;
            }
            //Search  Employee
            case 3:
            {
                int id;
                bool found=false;

                cout<<"\nEnter  Employee ID :";
                cin>>id;

                for(int i=0;i<total;i++)
                {
                    if(emp[i].id==id)
                    {
                        cout<<"\n Employee Found";

                        cout<<"\nName :"<<emp[i].name;

                        cout<<"\nDepatment :"<<emp[i].department;

                        cout<<"\nSalary :"<<emp[i].salary;

                        found=true;

                        break;
                    }
                }
                if(found==false)
                {
                    cout<<"\n Employee Not Found.";
                }
                break;
            }
            //Update  Employee
            case 4:
            {
                int id;
                bool found=false;
                cout<<"\nEnter  Employee ID:";
                cin>>id;
                for(int i=0;i<total;i++)
                {
                    if(emp[i].id==id)
                    {
                        cin.ignore();

                        cout<<"\nEnter New Name :";

                        getline(cin,emp[i].name);

                        cout<<"Enter New Department :";
                        cin>>emp[i].department;

                        cout<<"\nEnter New Salary :";
                        cin>>emp[i].salary;

                        found=true;

                        cout<<"\n  Employee Record Updated.";

                        break;
                    }
                }
                if(found==false)
                {
                    cout<<"\n Employee Not Found";
                }
                break;
            }
            //Delete  Employee
            case 5:
            {
                int id;
                bool found=false;
                cout<<"\nEnter  Employee ID :";
                cin>>id;
                for(int i=0;i<total;i++)
                {
                    if(emp[i].id==id)
                    {
                        //Shift remaining records to the left
                        for(int j=i;j<total-1;j++)
                        {
                            emp[j]=emp[j+1];
                        }
                        total--;

                        found=true;

                        cout<<"\n Employee Record Deleted.";

                        break;
                    }
                }
                if(found==false)
                {
                    cout<<"\n Employee Not Found.";
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
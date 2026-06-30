#include<iostream>
#include<string>
using namespace std;
//Employee class
class Employee
{
    public:
      int id;
      string name;
      float basic;
      float hra;
      float da;
      float ta;
      float pf;
      float gross;
      float net;
};
int main()
{
    Employee emp[100];
    int total=0;
    int choice;
    while(true)
    {
        cout<<"\n\n=====SALARY MANAGEMENT SYSTEM=====";
        cout<<"\n1.Add Employee";
        cout<<"\n2.Display Employee";
        cout<<"\n3.Search  Employee";
        cout<<"\n4.Update  Salary";
        cout<<"\n5.Exit";

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
                
                cout<<"Enter Basic Salary :";
                cin>>emp[total].basic;

                //Salary Calculation
                emp[total].hra=emp[total].basic*0.20;

                emp[total].da=emp[total].basic*0.10;

                emp[total].ta=emp[total].basic*0.05;

                emp[total].pf=emp[total].basic*0.12;

                emp[total].gross=emp[total].basic+emp[total].hra+emp[total].da+emp[total].ta;

                emp[total].net=emp[total].gross-emp[total].pf;

                total++;

                cout<<"\n Employee Added Successfully:";

                break;
            }
            //Display  Employee
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

                        cout<<"\nEmployee ID :"<<emp[i].id;

                        cout<<"\nName :"<<emp[i].name;

                        cout<<"\nBasic Salary:"<<emp[i].basic;

                        cout<<"\nHRA :"<<emp[i].hra;

                        cout<<"\nDA :"<<emp[i].da;

                        cout<<"\nTA :"<<emp[i].ta;

                        cout<<"\nPF :"<<emp[i].pf;

                        cout<<"\nGross Salary :"<<emp[i].gross;

                        cout<<"\nNet Salary :"<<emp[i].net;

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

                        cout<<"\n Net Salary :"<<emp[i].net;

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
            //Update  Salary
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
                        cout<<"\nEnter New Basic Salary :";

                        cin>>emp[i].basic;

                        emp[i].hra=emp[i].basic*0.20;

                        emp[i].da=emp[i].basic*0.10;

                        emp[i].ta=emp[i].basic*0.05;

                        emp[i].pf=emp[i].basic*0.12;

                        emp[i].gross=emp[i].basic+emp[i].hra+emp[i].da+emp[i].ta;

                        emp[i].net=emp[i].gross-emp[i].pf;

                        cout<<"\nSalary Updated Successfully";

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
            //Exit
            case 5:
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
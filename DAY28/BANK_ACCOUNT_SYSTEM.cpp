#include<iostream>
#include<string>
using namespace std;
//Bank Account Class
class BankAccount
{
    public:
      int accountno;
      string name;
      float balance;
};
int main()
{
    BankAccount account[100];
    int total=0;
    int choice;
    while(true)
    {
        cout<<"\n\n=====BANK ACCOUNT SYSTEM=====";
        cout<<"\n1.Create Account";
        cout<<"\n2.Display Accounts";
        cout<<"\n3.Search  Account";
        cout<<"\n4.Deposit Money";
        cout<<"\n5.Withdraw Money";
        cout<<"\n6.Balance Enquiry";
        cout<<"\n7.Exit";

        cout<<"\nEnter Choice:";
        cin>>choice;
        switch(choice)
        {
            //Create Account
            case 1:
            {
                cout<<"\nEnter Account No:";
                cin>>account[total].accountno;
                cin.ignore();
                cout<<"\nEnter Account Holder Name:";
                getline(cin,account[total].name);
                
                cout<<"\nEnter Initial Balance:";
                cin>>account[total].balance;

                total++;

                cout<<"\n Account Created Successfully:";

                break;
            }
            //Display  Accounts
            case 2:
            {
                if(total==0)
                {
                    cout<<"\nNo Accounts Found.";
                }
                else{
                    for(int i=0;i<total;i++)
                    {
                        cout<<"\n----------------";

                        cout<<"\nAccount Number :"<<account[i].accountno;

                        cout<<"\nName :"<<account[i].name;

                        cout<<"\nBalance :"<<account[i].balance;

                        cout<<"\n-------------------";
                    }
                }
                break;
            }
            //Search  Account 
            case 3:
            {
                int accNo;
                bool found=false;

                cout<<"\nEnter  Account Number :";
                cin>>accNo;

                for(int i=0;i<total;i++)
                {
                    if(account[i].accountno==accNo)
                    {
                        cout<<"\n Account  Found";

                        cout<<"\nName :"<<account[i].name;

                        cout<<"\nBalance :"<<account[i].balance;

                        found=true;

                        break;
                    }
                }
                if(found==false)
                {
                    cout<<"\n Account  Not Found.";
                }
                break;
            }
            //Deposit Money
            case 4:
            {
                int accNo;
                float amount;
                bool found=false;
                cout<<"\nEnter Account Number:";
                cin>>accNo;

                cout<<"\nEnter Deposit Amount:";
                cin>>amount;
                for(int i=0;i<total;i++)
                {
                    if(account[i].accountno==accNo)
                    {
                        account[i].balance+=amount;

                        cout<<"\nAmount Deposited Successfully.";

                        found=true;

                        break;
                    }
                }
                if(found==false)
                {
                    cout<<"\n Account  Not Found";
                }
                break;
            }
            //withdraw Money
            case 5:
            {
                int accNo;
                float amount;

                cout<<"\nEnter Account Number:";
                cin>>accNo;

                cout<<"\nEnter Withdraw Amount:";
                cin>>amount;

                bool found=false;
                for(int i=0;i<total;i++)
                {
                    if(account[i].accountno==accNo)
                    {
                        if(amount<=account[i].balance)
                        {
                            account[i].balance-=amount;
                        
                            cout<<"\nWithdraw Successfull.";
                        }
                        else{
                            cout<<"\nInsufficient Balance.";
                        }
                        found=true;
                        break;
                    }
                }
                if(!found){
                    cout<<"\nAccount  not Found.";
                }
                break;
            }
            //Balance Enquiry
            case 6:
            {
                int accNo;
                bool found=false;
                cout<<"\nEnter Account Number :";
                cin>>accNo;
                for(int i=0;i<total;i++)
                {
                    if(account[i].accountno==accNo)
                    {
                        cout<<"\nCurrent Balance :"<<account[i].balance;

                        found=true;

                        break;
                    }
                }
                if(found==false)
                {
                    cout<<"\n Account  Not Found.";
                }
                break;
            }
            //Exit
            case 7:
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
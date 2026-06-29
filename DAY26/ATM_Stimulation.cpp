#include<iostream>
#include<string>
using namespace std;
//Function to check balance
void checkBalance(int balance)
{
    cout<<"\nCurrentBalance:Rs."<<balance<<endl;
}
//Function to deposit money
void depositMoney(int &balance)
{
    int amount;
    cout<<"Enter amount to deposit:Rs.";
    cin>>amount;
    if(amount<=0){
        cout<<"InvalidAmount!\n";
    }
    else{
        balance+=amount;
        cout<< "Rs."<<amount<<"deposited successfully.\n";
    }
}
//Function to withdraw money
void withdrawMoney(int &balance)
{
    int amount;
    cout<<"Enter amount to withdraw:\n";
    cin>>amount;
    if(amount<=0)
    {
        cout<<"Invalid amount!\n";
    }
    else if(amount>balance){
        cout<<"Insufficient balance!\n";
    }
    else{
        balance-=amount;
        cout<<"Please collect your cash.\n";
        cout<<"Rs."<<amount<<"withdrawn successfully.\n";
    }
}
int main()
{
    //User Details
    string name;
    long long accountNumber;
    //Initial balance
    int balance=100000;
    int choice;
    //Taking user details
    cout<<"=======WELCOME TO ATM=======\n";
    cout<<"Enter your name:";
    getline(cin,name);
    cout<<"Enter yiur account number:\n";
    cin>>accountNumber;
    cout<<"\nWelcome,"<<name<<"!\n";
    cout<<"Account Number:"<<accountNumber<<endl;
    do
    {
        cout <<"\n========ATM MENU=========\n";
        cout<<"1.Check Balance\n";
        cout<<"2.Deposit Money\n";
        cout<<"3.Withdraw Money\n";
        cout<<"4.Exit\n";
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:{
                checkBalance(balance);
                break;
            }
             case 2:{
                depositMoney(balance);
                break;
            }
             case 3:{
                withdrawMoney(balance);
                break;
            }
             case 4:{
                cout <<"\nThank You,"<<name<<", for using our ATM!\n";
                break;
            }
            default:{
                cout<< "Invalid Choice!Try Again.\n";
            }
        }
    }
    while(choice!=4);
    return 0;    
    
}
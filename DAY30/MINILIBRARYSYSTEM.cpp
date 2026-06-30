#include<iostream>
#include<string>
using namespace std;
class Book
{
    public:
      int id;
      string name;
      string author;
      bool issued;
};
int main()
{
    Book b[100];
    int total=0;
    int choice;
    while(true)
    {
        cout<<"\n\n=====LIBRARY MANAGEMENT SYSTEM=====";
        cout<<"\n1.Add Book";
        cout<<"\n2.Display Books";
        cout<<"\n3.Search  Book";
        cout<<"\n4.Issue  Book";
        cout<<"\n5.Return Book";
        cout<<"\n6.Delete  Book";
        cout<<"\n7.Exit";

        cout<<"\nEnter Choice:";
        cin>>choice;
        switch(choice)
        {
            //Add  Book
            case 1:
            {
                cout<<"\nEnter Book ID :";
                cin>>b[total].id;
                cin.ignore();
                cout<<"\nEnter Book Name:";
                getline(cin,b[total].name);
                
                cout<<"\nEnter  Author Name :";
                cin>>b[total].author;

                b[total].issued=false;

                total++;

                cout<<"\n Book Added Successfully:";

                break;
            }
            //Display  Books
            case 2:
            {
                if(total==0)
                {
                    cout<<"\nNo Books Available.";
                }
                else{
                    for(int i=0;i<total;i++)
                    {
                        cout<<"\n----------------";

                        cout<<"\nBook ID :"<<b[i].id;

                        cout<<"\nBook Name :"<<b[i].name;

                        cout<<"\nAuthor :"<<b[i].author;

                        if(b[i].issued){
                            cout<<"\nStatus: Issued";
                        }
                        else{
                            cout<<"\nStatus: Available";
                        }

                        cout<<"\n-------------------";
                    }
                }
                break;
            }
            //Search  Book
            case 3:
            {
                int id;
                bool found=false;

                cout<<"\nEnter  Book ID :";
                cin>>id;

                for(int i=0;i<total;i++)
                {
                    if(b[i].id==id)
                    {
                        cout<<"\n Book Found";

                        cout<<"\nBook Name :"<<b[i].name;

                        cout<<"\nAuthor :"<<b[i].author;

                        found=true;

                        break;
                    }
                }
                if(found==false)
                {
                    cout<<"\n Book Not Found.";
                }
                break;
            }
            //Issue Book
            case 4:
            {
                int id;
                bool found=false;
                cout<<"\nEnter Book ID:";
                cin>>id;
                for(int i=0;i<total;i++)
                {
                    if(b[i].id==id)
                    {
                        if(!b[i].issued){
                            b[i].issued=true;
                            cout<<"\nBook Issued Successfully.";
                        }
                        else{
                            cout<<"\nBook Already Issued.";
                        }

                        found=true;

                        break;
                    }
                }
                if(found==false)
                {
                    cout<<"\n Book Not Found";
                }
                break;
            }
            //Return Book
            case 5:
            {
                int id;

                cout<<"\nEnter Book ID:";
                cin>>id;

                bool found=false;
                for(int i=0;i<total;i++)
                {
                    if(b[i].id==id)
                    {
                        if(b[i].issued)
                        {
                            b[i].issued==false;
                            cout<<"\nBook Returned Successfully.";
                        }
                        else{
                            cout<<"\nBook Was Not Issued.";
                        }
                        found=true;
                        break;
                    }
                }
                if(!found){
                    cout<<"\nBook not Found.";
                }
                break;
            }
            //Delete  Book
            case 6:
            {
                int id;
                bool found=false;
                cout<<"\nEnter  Book ID :";
                cin>>id;
                for(int i=0;i<total;i++)
                {
                    if(b[i].id==id)
                    {
                        for(int j=i;j<total-1;j++)
                        {
                            b[j]=b[j+1];
                        }
                        total--;

                        found=true;

                        cout<<"\n Book Deleted Successfully.";

                        break;
                    }
                }
                if(found==false)
                {
                    cout<<"\n Book Not Found.";
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
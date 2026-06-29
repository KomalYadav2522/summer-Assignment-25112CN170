#include<iostream>
#include<string>
using namespace std;
int main()
{
    string names[100],temp;
    int n;
    cout<<"Enter number of names:";
    cin>>n;
    cin.ignore();//Remove newline
    //Input names
    for(int i=0;i<n;i++)
    {
        cout<<"Enter name"<<i+1<<":";
        getline(cin,names[i]);
    }
    //Bubble Sort
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            //Compare names alphabetically
            if(names[j]>names[j+1]){
                temp=names[j];
                names[j]=names[j+1];
                names[j+1]=temp;
            }
        }
    }
    //Display sorted names
    cout<<"\nNames in alphabetical order:\n";
    for(int i=0;i,n;i++)
    {
        cout<<names[i]<<endl;
    }
    return 0;

}
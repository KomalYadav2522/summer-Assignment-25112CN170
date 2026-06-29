#include <iostream>
#include<string>
using namespace std;
int main()
{
    string str1,str2;
    cout<<"Enter first string:";
    getline(cin,str1);
    cout<<"Enter second string:";
    getline(cin,str2);
    cout<<"Common characters are:";
    //Traverse first string
    for(int i=0;i<str1.length();i++)
    {
        //Compare with second string
        for(int j=0; j<str2.length();j++)
        {
            if(str1[i]==str2[j]){
                cout<<str1[i]<<" ";
                break;//stop checking further
            }
        }
    }
    return 0;
}

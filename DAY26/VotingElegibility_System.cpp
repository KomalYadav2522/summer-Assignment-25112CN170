#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<< "Enter your age:";
    cin>> age;
    //Ternary operator
    (age>=18)
        ?cout<<"Elegible to vote"
        :cout<<"Not Elegible to vote";
    
    return 0;
}
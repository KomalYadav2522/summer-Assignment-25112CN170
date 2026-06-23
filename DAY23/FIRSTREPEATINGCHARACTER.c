#include<stdio.h>
int main()
{
    char str[100];
    int freq[256]={0};//Stores frequency of each character
    int i;
    printf("Enter a string:");
    scanf("%s",str);
    //Count frequency of each character
    for(i=0;str[i]!='\0';i++)
    {
        freq[str[i]]++;
    }
    //Find first repeating character
    for(i=0;str[i]!='\0';i++)
    {
        if(freq[str[i]]>1)
        {
            printf("First repeating character =%c",str[i]);
            return 0;
        }
    }
    printf("No repeating character found.");
    return 0;
    
}
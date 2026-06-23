#include<stdio.h>
int main()
{
    char str[100],maxChar;
    int freq[256]={0};//Stores frequency of each character
    int i,max=0;
    printf("Enter a string:");
    scanf("%s",str);
    //Count frequency of each character
    for(i=0;str[i]!='\0';i++)
    {
        freq[str[i]]++;
    }
    //Find maximum occuring character
    for(i=0;i<256;i++)
    {
        if(freq[i]>max)
        {
            max=freq[i];
            maxChar=i;
        }
    }
    printf("Maximum Occuring Character= %c\n",maxChar);
    printf("Frequency =%d",max);
    return 0;
    
}
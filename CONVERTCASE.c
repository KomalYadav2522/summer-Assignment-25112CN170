#include<stdio.h>
int main()
{
    char str[100];
    //Input string
    printf("Enter a string in lowercase:");
    fgets(str,sizeof(str),stdin);
    //Traverse complete string
    for(int i=0;str[i]!='\0';i++)
    {
        //Check whether character is lowercase
        if(str[i]>='a'&&str[i]<='z'){
            //Convert to uppercase
            str[i]=str[i]-32;
        }
    }
    printf("Uppercase String:%s",str);
    return 0;
}
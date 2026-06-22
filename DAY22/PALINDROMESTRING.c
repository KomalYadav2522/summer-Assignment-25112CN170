#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],rev[100];
    //Input string
    printf("Enter a string:");
    scanf("%s",str);
    //Find length
    int len=strlen(str);
    //Reverse the string
    for(int i=0;i<len;i++)
    {
        rev[i]=str[len-1-i];
    }
    //Add null character at end
    rev[len]='\0';
    //Compare original and reversed string
    if(strcmp(str,rev)==0){
        printf("Palindrome String");
    }
    else{
        printf("Not a palindrome String");
    }
    return 0;
}
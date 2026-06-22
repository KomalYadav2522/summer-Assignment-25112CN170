#include<stdio.h>
int main()
{
    char str[100];
    int count=0;
    printf("Enter a sentence:");
    fgets(str,sizeof(str),stdin);
    //Traverse string
    for(int i=0;str[i]!='\0';i++)
    {
        //Check start of a new word
        if(i==0&&str[i]!=' '&&str[i]!='\n'||(str[i]!=' '&&str[i-1]==' ')){
            count++;
        }
    }
    printf("Number of words=%d",count);
    return 0;
}
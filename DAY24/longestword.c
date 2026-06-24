#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    char *token;
    char longest[50];
    printf("Enter a sentence:");
    fgets(str,sizeof(str),stdin);
    //Extract first word
    token=strtok(str," \n");
    strcpy(longest,token);
    //Extract remaining words
    while(token!=NULL)
    {
        if(strlen(token)>strlen(longest)){
            strcpy(longest,token);
        }
        token=strtok(NULL," \n");
    }
    printf("Longest Word=%s",longest);
    printf("Length=%lu",strlen(longest));
    return 0;
}
#include<stdio.h>
int main()
{
    char str[100];
    int visited[256]={0};
    int i;
    printf("Enter string:");
    scanf("%s",str);
    printf("String after removing duplicates:");
    for(i=0;str[i]!='\0';i++)
    {
        //Print only first occurence
        if(visited[str[i]]==0)
        {
            printf("%c",str[i]);

            //Mark characters as visited
            visited[str[i]]= 1;
        }
    }
    return 0;
}
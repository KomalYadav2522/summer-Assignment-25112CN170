#include <stdio.h>
int main()
{
    char str[100];
    int j = 0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    // Traverse original string
    for(int i = 0; str[i] != '\0'; i++)
    {
        // Keep only non-space characters
        if(str[i]!= ' ' && str[i] != '\n')
        {
            str[j] = str[i];
            j++;
        }
    }
    //Terminate string
    str[j]='\0';
    printf("String after removing spaces: %s", str);
    return 0;
}
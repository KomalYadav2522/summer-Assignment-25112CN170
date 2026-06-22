#include <stdio.h>
int main()
{
    char str[100], ch;
    int count = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    // Input character to search
    printf("Enter character to find frequency: ");
    scanf(" %c", &ch);
    // Traverse string
    for(int i = 0;str[i]!='\0';i++)
    {
        // If character matches
        if(str[i] == ch)
        {
            count++;
        }
    }
    printf("Frequency of '%c' = %d", ch, count);
    return 0;
}
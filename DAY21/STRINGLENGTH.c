#include<stdio.h>
int main()
{
    char str[100];
    int i=0,length=0;
    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Traverse string until null character is found
    while(str[i] != '\0')
    {
        // Ignore newline character inserted by fgets()
        if(str[i] != '\n')
        {
            length++;
        }
        i++;
    }
    // Display length
    printf("Length of string = %d", length);
    return 0;
}
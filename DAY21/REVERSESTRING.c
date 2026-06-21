#include<stdio.h>
int main()
{
    char str[100], temp;
    int i, length =0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Find length
    while(str[length]!= '\0')
    {
        if(str[length] =='\n')
            break;
        length++;
    }
    // Swap characters from both ends
    for(i=0;i<length/2;i++)
    {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    printf("Reversed string = %s", str);
    return 0;
}